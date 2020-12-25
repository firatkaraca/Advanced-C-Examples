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
        printf("%d %s %s %d %.2f %s\n",x[i].sifre,x[i].ad,x[i].soyad,x[i].yas,x[i].maas,x[i].cinsiyet);
    }
}

int main()
{
    int N;
    int i;

    printf("Kac adet personel bilgisi tutulacak : ");
    scanf("%d",&N);

    kisiler p[N];

    for(i=0;i<N;i++)
    {
        printf("--------------\n");
        printf("Sifre : ");
        scanf("%d",&p[i].sifre);

        printf("Ad : ");
        scanf("%s",&p[i].ad);

        printf("Soyad : ");
        scanf("%s",&p[i].soyad);

        printf("Yas :");
        scanf("%d",&p[i].yas);

        printf("Maas : ");
        scanf("%f",&p[i].maas);

        printf("Cinsiyet : ");
        scanf("%s",&p[i].cinsiyet);
    }

    sirala(p,N);
    listele(p,N);

    return 0;
}
