//
//  main.c
//  borsa_tavan
//
//  Created by Emre Dikici on 21.09.2023.
//
#include <stdio.h>
#include <math.h>

int main() {
    double maliyet;
    int gun_sayisi;
    int adet;
    
    printf("adeti girin: ");
    scanf("%d", &adet);
    
    printf("Maliyeti girin: ");
    scanf("%lf", &maliyet);

    printf("Gun sayisini girin: ");
    scanf("%d", &gun_sayisi);

    printf("Gun\tBorsa Tavan Serisi\n");
    printf("----------------------------\n");

    for (int gun = 1; gun <= gun_sayisi; gun++) {
        double borsa_tavan = maliyet * pow(1.1, gun);
        int kar = (borsa_tavan*adet)-(maliyet*adet);
        printf("%d\t%.2lf\t%d\n", gun, borsa_tavan,kar);
    }

    return 0;
}
