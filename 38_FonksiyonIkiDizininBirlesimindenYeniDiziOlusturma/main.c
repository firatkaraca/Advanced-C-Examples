#include <stdio.h>
#include <stdlib.h>


void birlestir(int A[],int B[],int C[],int N,int K)
{
    int degisken=0;
    int i;
    for(i=0;i<N;i++)
    {
        C[degisken]=A[i];
        degisken++;
    }
    for(i=0;i<K;i++)
    {
        C[degisken]=B[i];
        degisken++;
    }
    for(i=0;i<N+K;i++)
    {
        printf("%d\t",C[i]);
    }
}


int main()
{
    int K,N,i;
    printf("Ilk dizinin eleman sayisini giriniz:");
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
    {
        printf("%d.sayi = ",i+1);
        scanf("%d",&A[i]);
    }

    printf("\nIkinci dizinin eleman sayisini giriniz:");
    scanf("%d",&K);
    int B[K];
    for(i=0;i<K;i++)
    {
        printf("%d.sayi = ",i+1);
        scanf("%d",&B[i]);
    }

    int birlesik[N+K];
    birlestir(A,B,birlesik,N,K);
    return 0;
}
