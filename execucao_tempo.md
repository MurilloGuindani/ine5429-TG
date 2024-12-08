
./speed_sig --info --duration 10


Configuration info

==================

Target platform:  x86_64-Linux-6.8.0-49-generic
Compiler:         gcc (11.4.0)
OQS version:      0.12.0-rc1 (major: 0, minor: 12, patch: 0, pre-release: -rc1)
OpenSSL enabled:  Yes (OpenSSL 3.0.2 15 Mar 2022)
AES:              NI
SHA-2:            OpenSSL
SHA-3:            C
OQS build flags:  OQS_DIST_BUILD OQS_LIBJADE_BUILD OQS_OPT_TARGET=generic CMAKE_BUILD_TYPE=Release
CPU exts active:  ADX AES AVX AVX2 AVX512 BMI1 BMI2 PCLMULQDQ VPCLMULQDQ POPCNT SSE SSE2 SSE3

Speed test

==========

Started at 2024-12-08 18:03:41
Operation                            | Iterations | Total time (s) | Time (us): mean | pop. stdev | CPU cycles: mean          | pop. stdev
------------------------------------ | ----------:| --------------:| ---------------:| ----------:| -------------------------:| ----------:
Dilithium2                           |            |                |                 |            |                           |
keypair                              |     369995 |         10.000 |          27.027 |      5.281 |                     32137 |       6258
sign                                 |     134417 |         10.000 |          74.396 |     45.855 |                     88522 |      54576
verify                               |     365642 |         10.000 |          27.349 |      4.838 |                     32529 |       5732
public key bytes: 1312, secret key bytes: 2528, signature bytes: 2420
Dilithium3                           |            |                |                 |            |                           |
keypair                              |     204566 |         10.000 |          48.884 |      3.684 |                     58151 |       4346
sign                                 |      81442 |         10.000 |         122.787 |     72.307 |                    146133 |      86070
verify                               |     210161 |         10.000 |          47.583 |      2.423 |                     56612 |       2827
public key bytes: 1952, secret key bytes: 4000, signature bytes: 3293
Dilithium5                           |            |                |                 |            |                           |
keypair                              |     124877 |         10.000 |          80.079 |      3.971 |                     95284 |       4693
sign                                 |      64105 |         10.000 |         155.998 |     73.014 |                    185662 |      86908
verify                               |     127215 |         10.000 |          78.608 |      8.186 |                     93539 |       9716
public key bytes: 2592, secret key bytes: 4864, signature bytes: 4595
ML-DSA-44                            |            |                |                 |            |                           |
keypair                              |     337762 |         10.000 |          29.607 |      3.319 |                     35204 |       3903
sign                                 |     125693 |         10.000 |          79.559 |     47.391 |                     94664 |      56405
verify                               |     336723 |         10.000 |          29.698 |      5.493 |                     35315 |       6500
public key bytes: 1312, secret key bytes: 2560, signature bytes: 2420
ML-DSA-65                            |            |                |                 |            |                           |
keypair                              |     193452 |         10.000 |          51.692 |      7.322 |                     61486 |       8676
sign                                 |      76896 |         10.000 |         130.048 |     78.135 |                    154755 |      92995
verify                               |     198021 |         10.000 |          50.500 |      9.482 |                     60073 |      11247
public key bytes: 1952, secret key bytes: 4032, signature bytes: 3309
ML-DSA-87                            |            |                |                 |            |                           |
keypair                              |     118196 |         10.000 |          84.605 |     15.264 |                    100657 |      18124
sign                                 |      63249 |         10.000 |         158.106 |     75.475 |                    188164 |      89833
verify                               |     122186 |         10.000 |          81.843 |     12.513 |                     97384 |      14867
public key bytes: 2592, secret key bytes: 4896, signature bytes: 4627
Falcon-512                           |            |                |                 |            |                           |
keypair                              |       1321 |         10.005 |        7573.786 |   2081.924 |                   9015765 |    2478290
sign                                 |      37849 |         10.000 |         264.208 |     42.845 |                    314450 |      50953
verify                               |     217395 |         10.000 |          45.999 |     12.860 |                     54707 |      15270
public key bytes: 897, secret key bytes: 1281, signature bytes: 752
   Actual signature length returned (655) less than declared maximum signature length (752)
Falcon-1024                          |            |                |                 |            |                           |
keypair                              |        441 |         10.068 |       22829.580 |   5654.268 |                  27176265 |    6730833
sign                                 |      18963 |         10.000 |         527.359 |     63.790 |                    627704 |      75870
verify                               |     112798 |         10.000 |          88.655 |     14.680 |                    105492 |      17442
public key bytes: 1793, secret key bytes: 2305, signature bytes: 1462
   Actual signature length returned (1269) less than declared maximum signature length (1462)
Falcon-padded-512                    |            |                |                 |            |                           |
keypair                              |       1272 |         10.001 |        7862.175 |   2013.875 |                   9359016 |    2397275
sign                                 |      35066 |         10.000 |         285.182 |     68.021 |                    339393 |      80893
verify                               |     221133 |         10.000 |          45.222 |     10.216 |                     53787 |      12130
public key bytes: 897, secret key bytes: 1281, signature bytes: 666
Falcon-padded-1024                   |            |                |                 |            |                           |
keypair                              |        440 |         10.001 |       22729.816 |   5303.071 |                  27057439 |    6312736
sign                                 |      19150 |         10.000 |         522.210 |     67.495 |                    621557 |      80273
verify                               |     113014 |         10.000 |          88.485 |     17.838 |                    105289 |      21210
public key bytes: 1793, secret key bytes: 2305, signature bytes: 1280
SPHINCS+-SHA2-128f-simple            |            |                |                 |            |                           |
keypair                              |      27851 |         10.000 |         359.065 |     36.670 |                    427377 |      43586
sign                                 |       1197 |         10.001 |        8354.786 |    499.562 |                   9945473 |     594618
verify                               |      14778 |         10.000 |         676.710 |     89.447 |                    805459 |     106348
public key bytes: 32, secret key bytes: 64, signature bytes: 17088
SPHINCS+-SHA2-128s-simple            |            |                |                 |            |                           |
keypair                              |        440 |         10.021 |       22774.061 |    985.362 |                  27110064 |    1172812
sign                                 |         57 |         10.020 |      175786.684 |   6698.711 |                 209256472 |    7974033
verify                               |      39219 |         10.000 |         254.980 |     23.119 |                    303483 |      27478
public key bytes: 32, secret key bytes: 64, signature bytes: 7856
SPHINCS+-SHA2-192f-simple            |            |                |                 |            |                           |
keypair                              |      18479 |         10.000 |         541.165 |     50.222 |                    644143 |      59744
sign                                 |        653 |         10.001 |       15315.306 |   1050.896 |                  18230858 |    1250807
verify                               |       9084 |         10.000 |        1100.874 |    145.116 |                   1310294 |     172581
public key bytes: 48, secret key bytes: 96, signature bytes: 35664
SPHINCS+-SHA2-192s-simple            |            |                |                 |            |                           |
keypair                              |        293 |         10.014 |       34177.659 |   2504.217 |                  40682686 |    2980684
sign                                 |         30 |         10.210 |      340341.100 |  13988.894 |                 405121253 |   16651547
verify                               |      23149 |         10.000 |         431.985 |     58.277 |                    514111 |      69280
public key bytes: 48, secret key bytes: 96, signature bytes: 16224
SPHINCS+-SHA2-256f-simple            |            |                |                 |            |                           |
keypair                              |       6284 |         10.000 |        1591.344 |    199.722 |                   1894140 |     237622
sign                                 |        319 |         10.018 |       31405.818 |   1619.431 |                  37383375 |    1927510
verify                               |       9011 |         10.001 |        1109.841 |    124.295 |                   1321021 |     147843
public key bytes: 64, secret key bytes: 128, signature bytes: 49856
SPHINCS+-SHA2-256s-simple            |            |                |                 |            |                           |
keypair                              |        426 |         10.001 |       23476.796 |   1339.810 |                  27945280 |    1594709
sign                                 |         33 |         10.180 |      308496.455 |  11270.166 |                 367217025 |   13415364
verify                               |      16846 |         10.000 |         593.617 |     46.840 |                    706564 |      55705
public key bytes: 64, secret key bytes: 128, signature bytes: 29792
SPHINCS+-SHAKE-128f-simple           |            |                |                 |            |                           |
keypair                              |      13278 |         10.000 |         753.131 |     97.004 |                    896400 |     115354
sign                                 |        570 |         10.016 |       17571.926 |   1180.827 |                  20916443 |    1405448
verify                               |       8277 |         10.001 |        1208.297 |    102.557 |                   1438208 |     121995
public key bytes: 32, secret key bytes: 64, signature bytes: 17088
SPHINCS+-SHAKE-128s-simple           |            |                |                 |            |                           |
keypair                              |        211 |         10.040 |       47581.697 |   4554.933 |                  56638499 |    5421794
sign                                 |         28 |         10.213 |      364748.107 |  10373.950 |                 434177793 |   12348374
verify                               |      21280 |         10.000 |         469.927 |     41.858 |                    559321 |      49774
public key bytes: 32, secret key bytes: 64, signature bytes: 7856
SPHINCS+-SHAKE-192f-simple           |            |                |                 |            |                           |
keypair                              |       8975 |         10.001 |        1114.297 |    106.703 |                   1326319 |     126927
sign                                 |        350 |         10.023 |       28635.814 |   1408.514 |                  34086508 |    1676507
verify                               |       5505 |         10.000 |        1816.617 |    186.228 |                   2162303 |     221551
public key bytes: 48, secret key bytes: 96, signature bytes: 35664
SPHINCS+-SHAKE-192s-simple           |            |                |                 |            |                           |
keypair                              |        140 |         10.013 |       71522.164 |   1935.022 |                  85136292 |    2303082
sign                                 |         15 |         10.125 |      675022.667 |  32790.340 |                 803516240 |   39031597
verify                               |      16034 |         10.000 |         623.680 |     23.193 |                    742355 |      27553
public key bytes: 48, secret key bytes: 96, signature bytes: 16224
SPHINCS+-SHAKE-256f-simple           |            |                |                 |            |                           |
keypair                              |       3503 |         10.002 |        2855.184 |     47.979 |                   3398634 |      57100
sign                                 |        173 |         10.019 |       57911.116 |   2185.031 |                  68934691 |    2600666
verify                               |       5750 |         10.001 |        1739.229 |    205.982 |                   2070175 |     244991
public key bytes: 64, secret key bytes: 128, signature bytes: 49856
SPHINCS+-SHAKE-256s-simple           |            |                |                 |            |                           |
keypair                              |        218 |         10.032 |       46017.839 |   1796.654 |                  54777509 |    2138498
sign                                 |         19 |         10.140 |      533659.632 |    789.773 |                 635246569 |     940046
verify                               |      11778 |         10.001 |         849.091 |     24.092 |                   1010675 |      28646
public key bytes: 64, secret key bytes: 128, signature bytes: 29792
MAYO-1                               |            |                |                 |            |                           |
keypair                              |     646529 |         10.000 |          15.467 |      1.513 |                     18378 |       1714
sign                                 |     139914 |         10.000 |          71.473 |      9.652 |                     85038 |      11470
verify                               |     552004 |         10.000 |          18.116 |      1.183 |                     21523 |       1348
public key bytes: 1168, secret key bytes: 24, signature bytes: 321
MAYO-2                               |            |                |                 |            |                           |
keypair                              |     313095 |         10.000 |          31.939 |      2.236 |                     37984 |       2597
sign                                 |     122938 |         10.000 |          81.342 |      4.551 |                     96792 |       5385
verify                               |     625431 |         10.000 |          15.989 |      1.011 |                     18992 |       1147
public key bytes: 5488, secret key bytes: 24, signature bytes: 180
MAYO-3                               |            |                |                 |            |                           |
keypair                              |     169876 |         10.000 |          58.867 |      2.562 |                     70030 |       2997
sign                                 |      42006 |         10.000 |         238.063 |     12.650 |                    283324 |      15036
verify                               |     138584 |         10.000 |          72.159 |      5.474 |                     85845 |       6488
public key bytes: 2656, secret key bytes: 32, signature bytes: 577
MAYO-5                               |            |                |                 |            |                           |
keypair                              |      74954 |         10.000 |         133.416 |      7.996 |                    158753 |       9499
sign                                 |      22529 |         10.000 |         443.891 |     11.233 |                    528340 |      13360
verify                               |      71455 |         10.000 |         139.949 |      7.377 |                    166543 |       8761
public key bytes: 5008, secret key bytes: 40, signature bytes: 838
cross-rsdp-128-balanced              |            |                |                 |            |                           |
keypair                              |     592981 |         10.000 |          16.864 |      4.325 |                     20048 |       5119
sign                                 |      12646 |         10.000 |         790.783 |     38.189 |                    941268 |      45455
verify                               |      18972 |         10.000 |         527.097 |     58.758 |                    627379 |      69898
public key bytes: 77, secret key bytes: 32, signature bytes: 12912
cross-rsdp-128-fast                  |            |                |                 |            |                           |
keypair                              |     588487 |         10.000 |          16.993 |      4.371 |                     20200 |       5173
sign                                 |      21446 |         10.000 |         466.297 |     40.916 |                    555015 |      48698
verify                               |      37650 |         10.000 |         265.609 |     28.937 |                    316134 |      34429
public key bytes: 77, secret key bytes: 32, signature bytes: 19152
cross-rsdp-128-small                 |            |                |                 |            |                           |
keypair                              |     610797 |         10.000 |          16.372 |      4.481 |                     19462 |       5304
sign                                 |       3497 |         10.001 |        2859.866 |    109.596 |                   3404239 |     130446
verify                               |       4936 |         10.002 |        2026.357 |    115.690 |                   2412048 |     137685
public key bytes: 77, secret key bytes: 32, signature bytes: 10080
cross-rsdp-192-balanced              |            |                |                 |            |                           |
keypair                              |     273436 |         10.000 |          36.572 |      7.606 |                     43503 |       9036
sign                                 |       5742 |         10.001 |        1741.709 |     80.228 |                   2073220 |      95481
verify                               |       8457 |         10.001 |        1182.572 |     71.246 |                   1407659 |      84798
public key bytes: 115, secret key bytes: 48, signature bytes: 28222
cross-rsdp-192-fast                  |            |                |                 |            |                           |
keypair                              |     271152 |         10.000 |          36.880 |      7.648 |                     43873 |       9086
sign                                 |       9483 |         10.001 |        1054.577 |     62.793 |                   1255268 |      74732
verify                               |      15538 |         10.000 |         643.597 |     47.309 |                    766081 |      56307
public key bytes: 115, secret key bytes: 48, signature bytes: 42682
cross-rsdp-192-small                 |            |                |                 |            |                           |
keypair                              |     261644 |         10.000 |          38.220 |      7.194 |                     45467 |       8546
sign                                 |       2386 |         10.002 |        4192.118 |     84.221 |                   4990111 |     100225
verify                               |       3441 |         10.001 |        2906.501 |     93.860 |                   3459768 |     111701
public key bytes: 115, secret key bytes: 48, signature bytes: 23642
cross-rsdp-256-balanced              |            |                |                 |            |                           |
keypair                              |     174158 |         10.000 |          57.420 |      9.862 |                     68312 |      11720
sign                                 |       3316 |         10.002 |        3016.211 |     94.086 |                   3590367 |     111973
verify                               |       5106 |         10.001 |        1958.664 |     72.173 |                   2331472 |      85897
public key bytes: 153, secret key bytes: 64, signature bytes: 51056
cross-rsdp-256-fast                  |            |                |                 |            |                           |
keypair                              |     175163 |         10.000 |          57.090 |      9.466 |                     67926 |      11250
sign                                 |       5282 |         10.000 |        1893.253 |     71.255 |                   2253628 |      84813
verify                               |       8603 |         10.001 |        1162.484 |     51.695 |                   1383744 |      61524
public key bytes: 153, secret key bytes: 64, signature bytes: 76298
cross-rsdp-256-small                 |            |                |                 |            |                           |
keypair                              |     180517 |         10.000 |          55.397 |      9.223 |                     65904 |      10964
sign                                 |       1793 |         10.004 |        5579.366 |    129.407 |                   6641477 |     154024
verify                               |       2603 |         10.002 |        3842.432 |    156.155 |                   4573889 |     185856
public key bytes: 153, secret key bytes: 64, signature bytes: 43592
cross-rsdpg-128-balanced             |            |                |                 |            |                           |
keypair                              |    1087676 |         10.000 |           9.194 |      3.414 |                     10913 |       4034
sign                                 |      16688 |         10.000 |         599.241 |     25.328 |                    713278 |      30138
verify                               |      27394 |         10.000 |         365.047 |     17.001 |                    434497 |      20199
public key bytes: 54, secret key bytes: 32, signature bytes: 9236
cross-rsdpg-128-fast                 |            |                |                 |            |                           |
keypair                              |    1074435 |         10.000 |           9.307 |      3.414 |                     11050 |       4041
sign                                 |      30273 |         10.000 |         330.337 |     13.664 |                    393183 |      16247
verify                               |      49521 |         10.000 |         201.936 |      9.492 |                    240341 |      11268
public key bytes: 54, secret key bytes: 32, signature bytes: 12472
cross-rsdpg-128-small                |            |                |                 |            |                           |
keypair                              |    1070156 |         10.000 |           9.344 |      3.392 |                     11091 |       4017
sign                                 |       4640 |         10.000 |        2155.183 |    176.771 |                   2565416 |     210353
verify                               |       7556 |         10.000 |        1323.467 |     33.162 |                   1575383 |      39459
public key bytes: 54, secret key bytes: 32, signature bytes: 7956
cross-rsdpg-192-balanced             |            |                |                 |            |                           |
keypair                              |     572378 |         10.000 |          17.471 |      5.137 |                     20765 |       6088
sign                                 |      10398 |         10.000 |         961.758 |    114.442 |                   1144783 |     136151
verify                               |      18300 |         10.000 |         546.466 |     42.351 |                    650460 |      50397
public key bytes: 83, secret key bytes: 48, signature bytes: 23380
cross-rsdpg-192-fast                 |            |                |                 |            |                           |
keypair                              |     607604 |         10.000 |          16.458 |      4.740 |                     19565 |       5617
sign                                 |      12827 |         10.001 |         779.657 |     52.430 |                    928046 |      62411
verify                               |      20527 |         10.000 |         487.185 |     38.776 |                    579884 |      46145
public key bytes: 83, secret key bytes: 48, signature bytes: 27404
cross-rsdpg-192-small                |            |                |                 |            |                           |
keypair                              |     578648 |         10.000 |          17.282 |      2.366 |                     20542 |       2783
sign                                 |       2926 |         10.000 |        3417.731 |    162.454 |                   4068343 |     193349
verify                               |       4975 |         10.001 |        2010.226 |    102.397 |                   2392879 |     121859
public key bytes: 83, secret key bytes: 48, signature bytes: 18188
cross-rsdpg-256-balanced             |            |                |                 |            |                           |
keypair                              |     380980 |         10.000 |          26.248 |      5.450 |                     31209 |       6461
sign                                 |       6477 |         10.001 |        1544.103 |     51.965 |                   1838011 |      61823
verify                               |      10881 |         10.001 |         919.099 |     39.182 |                   1094030 |      46627
public key bytes: 106, secret key bytes: 64, signature bytes: 40134
cross-rsdpg-256-fast                 |            |                |                 |            |                           |
keypair                              |     382919 |         10.000 |          26.115 |      5.454 |                     31051 |       6468
sign                                 |       7830 |         10.000 |        1277.184 |     59.635 |                   1520281 |      70955
verify                               |      12632 |         10.000 |         791.677 |     43.103 |                    942352 |      51293
public key bytes: 106, secret key bytes: 64, signature bytes: 48938
cross-rsdpg-256-small                |            |                |                 |            |                           |
keypair                              |     384586 |         10.000 |          26.002 |      5.590 |                     30917 |       6634
sign                                 |       2364 |         10.001 |        4230.371 |    190.243 |                   5035673 |     226426
verify                               |       3972 |         10.002 |        2518.192 |    137.402 |                   2997548 |     163528
public key bytes: 106, secret key bytes: 64, signature bytes: 32742
Ended at 2024-12-08 18:25:43
