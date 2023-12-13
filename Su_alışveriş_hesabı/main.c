//
//  main.c
//  deneme
//
//  Created by Emre Dikici on 16.11.2023.
//
#include <stdio.h>

int main(void)
{
    float birimfiyat = 70, toplamtutar = 0, aratutar;
    int adet;
    char cevap;

    do
    {
        printf("\nDamacana adetini giriniz:");
        scanf("%d", &adet);
        aratutar = adet * birimfiyat;
        toplamtutar += aratutar;
        printf("Musteriden alinmasi gereken tutar %.2f\n", aratutar);
        printf("Siparis var mi? (e/h): ");
        scanf(" %c", &cevap); // Boşluk karakteri eklenmiştir.

    } while (cevap == 'e' || cevap == 'E');

    printf("\nToplam satis tutari %.2f", toplamtutar);
    printf("\nNet kazanc %.2f", toplamtutar * 0.80);
    return 0;
}
