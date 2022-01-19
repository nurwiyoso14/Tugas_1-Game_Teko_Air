#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Selamat Datang di game Tuang Teko!\n");
    printf("Tujuan kalian adalah membuat salah satu teko yang ada berisi air 4 liter\n");
    printf("dengan perintah yang telah disediakan.\n");
    printf("\n");
    printf("Catatan : Teko A dapat menyimpan air maksimal 3 liter, Teko B maksimal 5 liter\n");


    int teko_a = 0;
    int teko_b = 0;
    int masukan;

    while(teko_b != 4){
        printf("\n");
        printf("Isi teko saat ini :\n");
        printf("Teko A = %d liter\n", teko_a);
        printf("Teko B = %d liter\n", teko_b);

        printf("\n");
        printf("Daftar perintah yang dapat digunakan :\n");
        printf("1. Isi teko A\n");
        printf("2. Isi teko B\n");
        printf("3. Tuang teko A ke teko B\n");
        printf("4. Tuang teko B ke teko A\n");
        printf("5. Kosongkan teko A\n");
        printf("6. Kosongkan teko B\n");
        printf("\n");

        printf("Pilih perintah : ");
        scanf("%d", &masukan);

        switch(masukan){
        case 1 :
            teko_a += 3;
            if (teko_a > 3){
                teko_a = 3;
            }
            break;
        case 2 :
            teko_b += 5;
            if (teko_b > 5){
                teko_b = 5;
            }
            break;
        case 3 :
            teko_b += teko_a;
            teko_a = 0;
            if (teko_b > 5){
                teko_a = teko_b - 5;
                teko_b = 5;
                }
            break;
        case 4 :
            teko_a += teko_b;
            teko_b = 0;
            if (teko_a > 3){
                teko_b = teko_a - 3;
                teko_a = 3;
            }
            break;
        case 5 :
            teko_a = 0;
            break;
        case 6 :
            teko_b = 0;
            break;
        default:
            printf("Masukan tidak valid, ulangi lagi\n");
        }
        printf("\n");
        printf("----------------------------------------------------\n");
    }
    printf("\n");
    printf("Isi teko saat ini :\n");
    printf("Teko A = %d liter\n", teko_a);
    printf("Teko B = %d liter\n", teko_b);

    printf("\n");
    printf("Selamat, Anda telah memenangkan game ini!\n");

    return 0;
}
