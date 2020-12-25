#include <stdio.h>
#include <stdlib.h>

void yerdegistir(int *x,int *y)
{
    int gecici;

    gecici=*x;
    *x=*y;
    *y=gecici;


}

int main()
{
    int sayi1,sayi2;

    printf("Lutfen X degerini giriniz : ");
    scanf("%d",&sayi1);
    printf("Lutfen Y degerini giriniz : ");
    scanf("%d",&sayi2);
    printf("__________________________________________\n\n");
    printf("          X : %d\n",sayi1);
    printf("          Y : %d\n",sayi2);

    yerdegistir(&sayi1,&sayi2);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Yer degistirildikten sonra:\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

    printf("          X : %d\n",sayi1);
    printf("          Y : %d\n",sayi2);
    printf("_______________\n\n");
    printf("_________\n\n");
    printf("____\n\n");

    printf("_\n\n");


    return 0;
}
