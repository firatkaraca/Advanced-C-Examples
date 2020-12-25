#include <stdio.h>
#include <stdlib.h>
#define N 100


typedef struct{
char ilac_adi[20];
int adet;
int fiyat;

}data;

int main()
{
    data veriler[N];
    int i;

    for(i=0;i<N;i++)
    {
        printf("_____________________________________\n\n");
        printf("Lutfen ilac adini giriniz    : ");
        scanf("%s",&veriler[i].ilac_adi);

        printf("Lutfen ilac adedini giriniz  : ");
        scanf("%d",&veriler[i].adet);

        printf("Lutfen ilac fiyatini giriniz : ");
        scanf("%d",&veriler[i].fiyat);
    }
    printf("_____________________________________\n");
    printf("\n\n====================\n");
    printf("      ILAC ADI\n");
    printf("====================\n");

    for(i=0;i<N;i++)
    {
        if(veriler[i].adet<=20)
        {
            printf("> %s\n",veriler[i].ilac_adi);
        }
    }

    return 0;
}
