#include <stdio.h>
#include <stdlib.h>
#define N 2

struct oyuncu{
char soyisim[10];
char isim[10];
int yas;
int seviye;
};

struct equipe{
char isim[10];
struct oyuncu oyuncu1;
struct oyuncu oyuncu2;
};


void oyuncuyu_olustur(struct oyuncu *j)
{
    printf("Isim giriniz    : ");
    scanf("%s",j->isim);
    printf("Soyisim giriniz : ");
    scanf("%s",j->soyisim);
    printf("Yas giriniz     : ");
    scanf("%d",&j->yas);
    printf("Seviye giriniz  : ");
    scanf("%d",&j->seviye);
}

void ekibi_olustur(struct equipe *e)
{
    printf("Ekibin adini giriniz : ");
    scanf("%s",&e->isim);
    printf("\n         Oyuncu 1\n");
    printf("        ------------\n");
    oyuncuyu_olustur(&e->oyuncu1);

    printf("\n         Oyuncu 2\n");
    printf("        ------------\n");
    oyuncuyu_olustur(&e->oyuncu2);
}

void ekibi_bas(struct equipe e)
{
    printf("\n________________________\n\n");
    printf("Isim : %s\n",e.isim);
    printf("Oyuncu 1:\n");
    oyuncuyu_bas(e.oyuncu1);
    printf("\n________________________\n\n");
    printf("Oyuncu 2:\n");
    oyuncuyu_bas(e.oyuncu2);
}

void oyuncuyu_bas(struct oyuncu j)
{
    printf("Isim    : %s\n",j.isim);
    printf("Soyisim : %s\n",j.soyisim);
    printf("Yas     : %d\n",j.yas);
    printf("Seviye  : %d\n",j.seviye);
}

int main()
{
    struct equipe tab[N];
    int i;
    for(i=0;i<N;i++)
    {
        printf("\n===========================\n");
        printf("          Ekip %d  \n",i+1);
        printf("===========================\n");
        ekibi_olustur(&tab[i]);
    }
    printf("**********************************\n");


    for(i=0;i<N;i++)
    {
        printf("Ekip %d : ",i+1);
        ekibi_bas(tab[i]);
    }
    return 0;
}
