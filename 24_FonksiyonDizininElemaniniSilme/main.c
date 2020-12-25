#include <stdio.h>
#include <stdlib.h>

void kayitsil(int A[],int sira,int elemansayisi)
{
    int i;
    if(sira>elemansayisi)
    {
        printf("\nGecersiz bir deger girdiniz\n");
    }
    else
    {
        for(i=sira-1;i<elemansayisi-1;i++)
        {
            A[i]=A[i+1];
        }
        printf("\nKayit silindikten sonraki durum:\n");
        for(i=0;i<elemansayisi-1;i++)
        {
            printf("%d.sayi = %d\n",i+1,A[i]);
        }
    }
}

int main()
{
    int n,i,sirano;

    printf("Kac adet sayi uretilecek:\n>>> ");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d.sayi = %d\n",i+1,dizi[i]);
    }
    printf("\nSilinecek olan satir degerini giriniz:\n>>> ");
    scanf("%d",&sirano);
    kayitsil(dizi,sirano,n);
}
