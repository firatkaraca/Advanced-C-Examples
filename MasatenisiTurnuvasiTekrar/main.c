#include <stdio.h>
#include <stdlib.h>
#define N 2

struct oyuncu{
char isim[10];
char soyisim[10];
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
    printf("Adi giriniz    : ");
    scanf("%s",j->isim);

    printf("Soyadi giriniz : ");
    scanf("%s",j->soyisim);

    printf("Yasi giriniz   : ");
    scanf("%d",&j->yas);

    printf("Seviye giriniz : ");
    scanf("%d",&j->seviye);
}

void ekibi_olustur(struct equipe *e)
{
    printf("\nEkibin adini giriniz :\n>>> ");
    scanf("%s",&e->isim);

    printf("      ------------\n");
    printf("        Oyuncu 1\n");
    printf("      ------------\n");
    oyuncuyu_olustur(&e->oyuncu1);

    printf("      ------------\n");
    printf("        Oyuncu 2\n");
    printf("      ------------\n");
    oyuncuyu_olustur(&e->oyuncu2);
}

///////////////////////////////////////////////////////////////////

void ekibi_bas(struct equipe e)
{
    printf("Isim : %s\n\n",e.isim);

    printf("Oyuncu 1:\n");
    printf("---------\n");
    oyuncuyu_bas(e.oyuncu1);
    printf("\n-------------------\n");

    printf("Oyuncu 2:\n");
    printf("---------\n");
    oyuncuyu_bas(e.oyuncu2);
    printf("\n-------------------\n");
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
    struct equipe ekip[N];
    int i;

    for(i=0;i<N;i++)
    {
        printf("\n======================\n");
        printf("        Ekip %d:\n",i+1);
        printf("======================\n");
        ekibi_olustur(&ekip[i]);

    }

    printf("\n==============================================================\n");
    printf("                    EKiPLERiN LiSTESi");
    printf("\n==============================================================\n");


    for(i=0;i<N;i++)
    {
        printf("     Ekip %d\n",i+1);
        printf("===============\n");
        ekibi_bas(ekip[i]);
    }

    return 0;
}
