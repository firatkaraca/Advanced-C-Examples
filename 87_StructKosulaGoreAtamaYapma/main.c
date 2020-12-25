#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct ogrenci
{
    char ad[10];
    char soyad[20];
    int no;
    int sinif;
};


int main()
{
    struct ogrenci ogr;

    do
    {
        printf("Lutfen ogrenci numarasini giriniz :\n>>> ");
        scanf("%d",&ogr.no);
    }
    while(ogr.no!=2019);

    if(ogr.no==2019)
    {
        strcpy(ogr.ad,"Firat");
        strcpy(ogr.soyad,"Karaca");
        ogr.no=2019;
        ogr.sinif=5;

        printf("\nAd    : %s",ogr.ad);
        printf("\nSoyad : %s",ogr.soyad);
        printf("\nNo    : %d",ogr.no);
        printf("\nSinif : %d\n",ogr.sinif);
    }


    return 0;
}
