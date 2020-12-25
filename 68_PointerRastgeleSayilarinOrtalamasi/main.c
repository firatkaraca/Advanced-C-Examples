#include <stdio.h>
#include <stdlib.h>

float ortalama_bul(int *dizim,int boyut)
{
    int i;
    float toplam=0;
    float ortalama;
    for(i=0;i<boyut;i++)
    {
        toplam+=*(dizim+i);
    }
    ortalama=toplam/boyut;
    return ortalama;
}


int main()
{
    int n;
    int i;
    printf("Kac adet sayi uretilecek:");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    printf("Uretilen sayilar:\n");
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d\n",dizi[i]);
    }
    printf("Sayilarin ortalamasi : %.2f",ortalama_bul(dizi,n));


    return 0;
}
