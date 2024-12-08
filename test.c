#include <oqs/oqs.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Função para medir o tempo de execução
double measure_time(clock_t start, clock_t end) {
    return ((double)(end - start)) / CLOCKS_PER_SEC * 1000.0; // Retorna em milissegundos
}

// Testa um algoritmo de assinatura
void test_signature(const char *algorithm) {
    if (!OQS_SIG_alg_is_enabled(algorithm)) {
        printf("Algoritmo %s não está disponível.\n", algorithm);
        return;
    }

    printf("\n[TESTANDO] Algoritmo: %s\n", algorithm);

    // Inicializar o contexto de assinatura
    OQS_SIG *sig = OQS_SIG_new(algorithm);
    if (sig == NULL) {
        fprintf(stderr, "Falha ao inicializar o algoritmo %s.\n", algorithm);
        return;
    }

    // Gerar chave pública e privada
    uint8_t *public_key = malloc(sig->length_public_key);
    uint8_t *secret_key = malloc(sig->length_secret_key);
    if (OQS_SIG_keypair(sig, public_key, secret_key) != OQS_SUCCESS) {
        fprintf(stderr, "Falha ao gerar chaves para %s.\n", algorithm);
        goto cleanup;
    }

    // Mensagem para assinar
    const char *message = "Teste de assinatura digital.";
    size_t message_len = strlen(message);
    uint8_t *signature = malloc(sig->length_signature);

    // Medir o tempo de assinatura
    clock_t start = clock();
    if (OQS_SIG_sign(sig, signature, NULL, (const uint8_t *)message, message_len, secret_key) != OQS_SUCCESS) {
        fprintf(stderr, "Falha ao gerar assinatura para %s.\n", algorithm);
        goto cleanup;
    }
    clock_t end = clock();

    double time_taken = measure_time(start, end);
    printf("Tempo para gerar assinatura: %.2f ms\n", time_taken);

cleanup:
    // Limpar recursos
    free(public_key);
    free(secret_key);
    free(signature);
    OQS_SIG_free(sig);
}

int main() {
    // Algoritmos a serem testados
    const char *algorithms[] = {
        OQS_SIG_alg_ml_dsa_1,  // ML-DSA
        OQS_SIG_alg_sphincs_sha256_128f_simple, // SPHINCS+
        OQS_SIG_alg_mayo,      // MAYO
        OQS_SIG_alg_cross,     // CROSS
    };

    size_t num_algorithms = sizeof(algorithms) / sizeof(algorithms[0]);

    // Testar cada algoritmo
    for (size_t i = 0; i < num_algorithms; i++) {
        test_signature(algorithms[i]);
    }

    return 0;
}
