#include <stdio.h>
#include <stdlib.h>

struct yarismaciTip
{
    char isim[10],soyad[10];
    float puan[10],performans;
};

float puanHesap(struct yarismaciTip pat)
{
    int i;
    float sonuc=0;
    float max=0.0;
    float min=6.0;

    for(i=0;i<10;i++)
    {
        if(pat.puan[i]>max)
        {
            max=pat.puan[i];
        }
        if(pat.puan[i]<min)
        {
            min=pat.puan[i];
        }
        sonuc+=pat.puan[i];
    }
    sonuc=(sonuc-max-min)/8;
    return sonuc;
}


int main()
{
    int i;
    struct yarismaciTip patenci;
    printf("  --------------\n   Yarismacinin  \n  --------------\n\n");
    printf("    Adi : ");
    scanf("%s",&patenci.isim);
    printf(" Soyadi : ");
    scanf("%s",&patenci.soyad);
    printf(" ________________\n");

    printf("  \n Hakem Puani (0-6):\n------------------\n");
    for(i=0;i<10;i++)
    {
        printf("> ");
        scanf("%f",&patenci.puan[i]);
    }

    patenci.performans=puanHesap(patenci);

    printf("\nPatenci Performans = %f\n\n",patenci.performans);
    return 0;
}











/*
Bir buz pateni karşılaşmasında,bir yarışmacının performansı 6.00 üzerinden puanlanarak 10 hakem
tarafından değerlendirilmektedir.Yarışmacının performans puanı ise hakemlerin vermiş olduğu en
düşük ve en yüksek puan atılıp,geri kalan puanların aritmetik ortalaması alınarak bulunmaktadır
Yazacağınız programda yarışmacının adı soyadı performans puanını hesaplayıp ekranda görüntüleyiniz.
Performans hesaplamasını tek parametreli bir fonksiyonda yapınız.Bu fonksiyon yarışmacıya ait yapıyı
parametre olarak almalı ve performans puanını hesaplayarak geri döndürmelidir.
*/
