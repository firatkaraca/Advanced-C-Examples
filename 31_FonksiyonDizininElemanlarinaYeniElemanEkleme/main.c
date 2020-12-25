#include <stdio.h>
#include <stdlib.h>
//ekle   (dizi,   hangisira, ekleneceksayi        n);
void ekle(int A[],int sirano,int deger,    int elemansayisi)
{
    int i;

    if(sirano<=elemansayisi+1)
    {
        for(i=elemansayisi-1;i>=sirano-1;i--)
        {
            A[i+1]=A[i];
        }
        A[sirano-1]=deger;
        for(i=0;i<=elemansayisi;i++)
        {
            printf("%d\n",A[i]);m
        }
    }
    else
    {
        printf("Gecerli bir sira numarasi giriniz");
    }
}


int main()
{
    int n,i;
    int sirasi,deger;
    printf("Kac adet sayi uretilecek:");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d\n",dizi[i]);
    }
    printf("Hangi siraya eleman eklenecek:");
    scanf("%d",&sirasi);
    printf("Eklenecek sayi nedir:");
    scanf("%d",&deger);
    ekle(dizi,sirasi,deger,n);
}
