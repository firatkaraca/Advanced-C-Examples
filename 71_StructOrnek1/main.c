#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci_bilgi{
    int no;
    char ad[10];
    char soyad[10];
    int yas;
    };

int main()
{
    struct ogrenci_bilgi ogrenci_1,ogrenci_2;
    ogrenci_1.no=425;
    strcpy(ogrenci_1.ad,"Firat");
    strcpy(ogrenci_1.soyad,"Karaca");
    ogrenci_1.yas=21;

    ogrenci_2=ogrenci_1;//Birbirine esitleme


    printf("%d\t%s\t%s\t%d",ogrenci_1.no,ogrenci_1.ad,ogrenci_1.soyad,ogrenci_1.yas);
    printf("\n");
    printf("%d\t%s\t%s\t%d",ogrenci_2.no,ogrenci_2.ad,ogrenci_2.soyad,ogrenci_2.yas);


    return 0;
}
