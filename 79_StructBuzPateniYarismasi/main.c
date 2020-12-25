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
Bir buz pateni karþýlaþmasýnda,bir yarýþmacýnýn performansý 6.00 üzerinden puanlanarak 10 hakem
tarafýndan deðerlendirilmektedir.Yarýþmacýnýn performans puaný ise hakemlerin vermiþ olduðu en
düþük ve en yüksek puan atýlýp,geri kalan puanlarýn aritmetik ortalamasý alýnarak bulunmaktadýr
Yazacaðýnýz programda yarýþmacýnýn adý soyadý performans puanýný hesaplayýp ekranda görüntüleyiniz.
Performans hesaplamasýný tek parametreli bir fonksiyonda yapýnýz.Bu fonksiyon yarýþmacýya ait yapýyý
parametre olarak almalý ve performans puanýný hesaplayarak geri döndürmelidir.
*/
