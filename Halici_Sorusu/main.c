#include <stdio.h>
#include <stdlib.h>
#define MKARE 40
#define ISCILIK 200
/*
Hal� Fiyat� Hesaplama
Bir ��renci evinde ��renciler salonu hal�yla kaplatmak istemektedir.
D��enecek hal�n�n metrekaresi 40 Tl�dir.
Ayr�ca hal�c� salonu d��emek i�in 200 Tl i��ilik almaktad�r.
Buna g�re metrekareyi girdi olarak alan ve
hal�c�ya �denmesi gereken toplam tutar� hesaplayan bir C program� yaz�n�z.
*/

/*
int main()
{
    float metrekare;
    printf("Salonun alani (m� cinsinden giriniz):\n>>>");
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
