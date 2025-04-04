#include <stdio.h>

void disaster(int a, int b, int c, int d, int e, int f) {
    // Too many local variables
    int x = 5;
    int y = 10;
    int z = 20;
    int i = 0;
    int j = 1;
    int k = 2;
    int l = 3;
    int m = 4;
    int n = 5;
    int o = 6;
    int p = 7;

    // Deep nesting and high complexity with many branches
    if (a > 10) {
        if (b > 5) {
            if (c == 3) {
                for (i = 0; i < 10; i++) {
                    while (j < 15) {
                        if (k < 20) {
                            if (l == 2) {
                                if (m > 3) {
                                    printf("Deep nesting hell...\n");
                                }
                            }
                        }
                        j++;
                    }
                }
            }
        }
    }

    // Magic numbers everywhere
    int result = a * 42 + b * 7 + c * 13 + d * 99 + e * 3 + f * 8;
    if (result > 1000) {
        printf("Huge result: %d\n", result);
    }

    // Just filler code to make it longer
    for (int q = 0; q < 100; q++) {
        x += q % 7;
        if (q % 2 == 0) {
            y += q;
        } else {
            z -= q;
        }
    }

    printf("Done processing.\n");
}

