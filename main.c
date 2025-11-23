#include <stdio.h>

int main() {

    int saglik = 100;
    int enerji = 80;
    int yemek = 50;
    int siginak = 0;
    char komut;
    int i;

    do {
        printf("\nSaglik: %d | Enerji: %d | Yemek: %d | Siginak: %d\n", 
               saglik, enerji, yemek, siginak);

        printf("\nKomut (A S R E F P X): ");
        scanf(" %c", &komut);

        switch (komut) {

            case 'A':
                printf("Avlandin.\n");
                enerji -= 10;
                saglik -= 5;
                yemek += 5;
                break;

            case 'S':
                printf("Siginak buldun.\n");
                siginak = 1;
                break;

            case 'R':
                printf("Dinlendin.\n");
                enerji += 20;
                if (enerji > 100) enerji = 100;
                break;

            case 'E':
                printf("Envanter: Yemek=%d\n", yemek);
                break;

            case 'F':
                printf("Tehlike dalgasi basladi.\n");
                for (i = 0; i < 3; i++) {
                    printf("%d. dalga -> saglik -5\n", i+1);
                    saglik -= 5;
                }
                break;

            case 'P': {
                char sifre;
                do {
                    printf("Engeli asmaki cin 'K' gir: ");
                    scanf(" %c", &sifre);
                } while (sifre != 'K');
                printf("Gecis basarili!\n");
                break;
            }

            case 'X':
                printf("Cikis yapiliyor...\n");
                break;

            default:
                printf("Gecersiz komut.\n");
        }

        if (saglik <= 0) {
            printf("Oldun! Simulasyon bitti.\n");
            break;
        }

    } while (komut != 'X');

    return 0;
}
