#include <stdio.h>
#include <stdlib.h>

#define VERGI_kitap 4.0
#define VERGI_temelgida 5.6
#define VERGI_luks 19.6

#define KITAP 0
#define TEMELGIDA 1
#define LUKS 2

int main()
{
    int kod;
    float fiyat;

    printf("Lutfen urunun fiyatini ve kodunu giriniz:\n");
    scanf("%f %d",&fiyat,&kod);



    switch(kod)
    printf("Urunumuzun satis fiyati = ");
    {
        case KITAP:printf("%f",fiyat+fiyat*VERGI_kitap/100);
        break;
        case TEMELGIDA:printf("%f",fiyat+fiyat*VERGI_temelgida/100);
        break;
        case LUKS:printf("%f",fiyat+fiyat*VERGI_luks/100);
        break;
        default:printf("Lutfen dogru bir kod girin");
    }
    return 0;
}
