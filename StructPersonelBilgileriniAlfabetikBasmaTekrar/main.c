#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct personel{
int sifre;
char ad[10];
char soyad[10];
int yas;
float maas;
char cinsiyet[10];
}kisiler;


void sirala(kisiler x[],int m)
{
    int i,j;
    kisiler t;

    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(strcmp(x[i].ad,x[j].ad)>0)
            {
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }
}

void listele(kisiler x[],int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("%d %s %s %d %.2f %s\n\n\n",x[i].sifre,  x[i].ad, x[i].soyad, x[i].yas,  x[i].maas,  x[i].cinsiyet);
    }

}


int main()
{
    int N;
    int i;
    printf("Kac adet personel bilgisi tutulacak:\n>>> ");
    scanf("%d",&N);

    kisiler bilgiler[N];

    for(int i=0;i<N;i++)
    {
        printf("====================================\n");
        printf("Sifre    : ");
        scanf("%d",&bilgiler[i].sifre);

        printf("Ad       : ");
        scanf("%s",&bilgiler[i].ad);

        printf("Soyad    : ");
        scanf("%s",&bilgiler[i].soyad);

        printf("Yas      : ");
        scanf("%d",&bilgiler[i].yas);

        printf("Maas     : ");
        scanf("%f",&bilgiler[i].maas);

        printf("Cinsiyet : ");
        scanf("%s",&bilgiler[i].cinsiyet);
    }


        printf("\n\n====================================\n");
        printf("       A-Z SIRALANMIS HALi\n");
        printf("====================================\n\n");



    sirala(bilgiler,N);
    listele(bilgiler,N);

    return 0;
}
