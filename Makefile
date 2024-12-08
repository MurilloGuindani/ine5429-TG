# Variáveis de configuração
CC = gcc
CFLAGS = -Wall -O2
LDFLAGS = -lm
LIBOQS = /home/gabrielafs/Documentos/UFSC/Segurança/trabalho_grupo/liboqs/build/lib/liboqs.a    # Caminho para a biblioteca estática liboqs.a
INCLUDE_OQS = /home/gabrielafs/Documentos/UFSC/Segurança/trabalho_grupo/liboqs/build/include    # Caminho para os cabeçalhos da liboqs
SRC = test.c
OUT = test

# Alvo default
all: $(OUT)

# Compilação do programa
$(OUT): $(SRC)
	$(CC) $(CFLAGS) -I$(INCLUDE_OQS) -o $(OUT) $(SRC) $(LIBOQS) $(LDFLAGS)

# Limpeza dos arquivos gerados
clean:
	rm -f $(OUT)

# Verificação das dependências
ldd:
	ldd $(OUT)
