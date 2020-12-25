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
    float sonuc;
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
    struct yarismaciTip patenci[100];
    int n;
    int birinci;
    int i,j;
    float max=0.0;

    printf("Lutfen yarismaci sayisini giriniz:\n>>> ");
    scanf("%d",&n);

    for(j=0;j<n;j++)
    {
        printf("____________________________________________\n");
        printf("_______________________________________\n");
        printf("__________________________________\n");

        printf("\nLutfen yarismacinin adini giriniz:\n>>> ");
        scanf("%s",patenci[j].isim);

        printf("\nLutfen yarismacinin soyadini giriniz:\n>>> ");
        scanf("%s",patenci[j].soyad);
        printf("__________________________________\n");

        printf("\nHakem puani:\n");
        printf("------------\n");

        for(i=0;i<10;i++)
        {
            printf("> ");
            scanf("%f",&patenci[j].puan[i]);
        }

        patenci[j].performans=puanHesap(patenci[j]);

        printf("\n...Puan = %f\n\n",patenci[j].performans);

        if(patenci[j].performans>max)
        {
            max=patenci[j].performans;
            birinci=j;
        }
    }

    printf("\nYarismanin birincisi : \n");
    printf("________________________\n\n");
    printf("      Isim : %s\n   Soyisim : %s\n      Puan : %f\n",patenci[birinci].isim,patenci[birinci].soyad,max);
    printf("________________________\n\n");





    return 0;
}
