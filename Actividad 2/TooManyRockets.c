#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    int m = 0;
    int n = 0;

    for (int m = 0; m < 16; m++) {

        for (int n = 0; n < 9 * num; n++) {
            if (m == 0 || m == 13) {
                printf("   /\\    ");
                n = n + 9;
            }

            if (m == 1 || m == 14) {
                printf("  /  \\   ");
                n = n + 9;
            }

            if (m == 2 || m == 15) {
                printf(" /    \\  ");
                n = n + 9;
            }

            if(m == 3 || m == 6 || m == 9 || m == 12) {
                printf("+------+ ");
                n += 9;
            }

            if(m == 4 || m == 5 || m == 10 || m == 11) {
                printf("|      | ");
                n += 9;
            }

            if(m == 7) {
                printf("| Viva | ");
                n += 9;
            }

            if(m == 8) {
                printf("|Mexico| ");
                n += 9;
            }
        }    

        printf("\n");
    }
}

