#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci
{
char ad[10];
char soyad[10];
int numara;
int yas;
char sehir[15];
char universite[30];
char fakulte[40];
char bolum[30];
int sinif;
};

int main()
{
    struct ogrenci firat;
    strcpy(firat.ad,"Firat");
    strcpy(firat.soyad,"Karaca");
    firat.numara=170307025;
    firat.yas=21;
    strcpy(firat.sehir,"Erzurum");
    strcpy(firat.universite,"Ataturk Universitesi");
    strcpy(firat.fakulte,"Ikdisadi Ve Idari Bilimler Fakultesi");
    strcpy(firat.bolum,"Yonetim Bilisim Sistemleri");
    firat.sinif=4;


    printf("Adi        :  %s\nSoyadi     :  %s\nNumara     :  %d\nYas        :  %d\nSehir      :  %s\nUniversite :  %s\nFakulte    :  %s\nBolum      :  %s\nSinif      :  %d\n",firat.ad,firat.soyad,firat.numara,firat.yas,firat.sehir,firat.universite,firat.fakulte,firat.bolum,firat.sinif);
    return 0;
}
