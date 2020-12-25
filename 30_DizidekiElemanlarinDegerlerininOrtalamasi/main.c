#include <stdio.h>
#include <stdlib.h>

float ortalamabul(int *dizim,int boyut)
{
    int i;
    int toplam=0;

    for(i=0;i<boyut;i++)
    {
        toplam+=dizim[i];
    }
    return (float)toplam/boyut;
}

int main()
{
    int n;
    int i;
    float ort;
    printf("Kac adet eleman girilecek:\n>>>");
    scanf("%d",&n);

    int dizi[n];

    for(i=0;i<n;i++)
    {
        printf("%d.sayiyi giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }
    ort=ortalamabul(dizi,n);
    printf("Girdigimi sayilarin ortalamasi = %.3f",ort);

    return 0;
}
