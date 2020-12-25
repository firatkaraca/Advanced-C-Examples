#include <stdio.h>
#include <stdlib.h>

int enbuyuk(int A[],int elemansayisi)
{
    int i,enb;

    enb=A[0];
    for(i=1;i<elemansayisi;i++)
    {
        if(A[i]>enb)
        {
            enb=A[i];
        }
    }
    return enb;
}

int enkucuk(int A[],int elemansayisi)
{
    int i,enk;

    enk=A[0];
    for(i=1;i<elemansayisi;i++)
    {
        if(A[i]<enk)
        {
            enk=A[i];
        }
    }
    return enk;
}

int main()
{
    int n,i;

    printf("Kac adet sayi uretilecek:");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));

    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d\n",dizi[i]);
    }
    printf("\nEn buyuk = %d\n",enbuyuk(dizi,n));
    printf("\nEn kucuk = %d\n",enkucuk(dizi,n));
}
