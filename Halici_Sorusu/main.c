#include <stdio.h>
#include <stdlib.h>
#define MKARE 40
#define ISCILIK 200
/*
Halý Fiyatý Hesaplama
Bir öðrenci evinde öðrenciler salonu halýyla kaplatmak istemektedir.
Döþenecek halýnýn metrekaresi 40 Tl’dir.
Ayrýca halýcý salonu döþemek için 200 Tl iþçilik almaktadýr.
Buna göre metrekareyi girdi olarak alan ve
halýcýya ödenmesi gereken toplam tutarý hesaplayan bir C programý yazýnýz.
*/

/*
int main()
{
    float metrekare;
    printf("Salonun alani (mý cinsinden giriniz):\n>>>");
    scanf("%f",&metrekare);
    float toplamtutar;
    toplamtutar=metrekare*MKARE+ISCILIK;
    printf("Odenmesi gereken toplam tutar = %.2f TL",toplamtutar);
    return 0;
}
*/









int main()
{
    char kod;
    float alan,ucret=0;
    printf("Hali tipi seciniz < T B S >\n>>>");
    scanf("%c",&kod);
    printf("Lutfen alani giriniz:\n>>>");
    scanf("%f",&alan);
    if(kod=='T')
    {
        ucret=alan*18;
    }
    else if(kod=='B')
    {
        ucret=alan*17;
    }
    else if(kod=='S')
    {
        ucret=alan*19;
    }
    else
    {
        printf("Kod dogru girilmedi\n");
    }
    printf("Odenmesi gereken ucret %.2f TL'dir.",ucret);


    return 0;
}
