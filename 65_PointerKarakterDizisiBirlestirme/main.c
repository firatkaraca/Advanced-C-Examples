#include <stdio.h>
#include <stdlib.h>

int main()
{
    int can[100],canan[100];
    int *sayi1,*sayi2;
    int n,m;
    printf("Ilk dizimizin eleman sayisi (max.50) :\n>>> ");
    scanf("%d",&n);

    for(sayi1=can;sayi1<can+n;sayi1++)
    {
        printf("Eleman %d : ",sayi1-can);
        scanf("%d",sayi1);
    }

    printf("\nIkinci dizimizin eleman sayisi (max.50) :\n>>> ");
    scanf("%d",&m);
    for(sayi2=canan;sayi2<canan+m;sayi2++)
    {
        printf("Eleman %d : ",sayi2-canan);
        scanf("%d",sayi2);
    }
    printf("\nDizi A :");
    for(sayi1=can;sayi1<can+n;sayi1++)
    {
        printf("%4d",*sayi1);
    }
    printf("\n\nDizi B :");
    for(sayi2=canan;sayi2<canan+m;sayi2++)
    {
        printf("%4d",*sayi2);
    }

    for(sayi1=can+n,sayi2=canan;sayi2<canan+m;sayi1++,sayi2++)
    {
        *sayi1=*sayi2;
    }
    printf("\n\nB nin A nin sonuna eklenmis hali :");

    for(sayi1=can;sayi1<can+n+m;sayi1++)
    {
        printf("%4d",*(sayi1));
    }
    printf("\n\n");

    return 0;
}
