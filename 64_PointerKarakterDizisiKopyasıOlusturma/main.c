#include <stdio.h>
#include <stdlib.h>
#define MAX 15

int main()
{
    char dizi[MAX]={'k','l','d','b','q','i','s','t','e','f','o','r','c','h','x'};
    char *sayi1;
    char *sayi2;
    char dizi_kopya[MAX];
    int i;

    sayi2=dizi_kopya;

    for(sayi1=dizi;sayi1<dizi+MAX;sayi1++)
    {
        *sayi2=*sayi1;
        sayi2++;
    }

    printf("Original Table :");

    for(i=0;i<MAX;i++)
    {
        printf("%4c",*(dizi+i));
    }

    printf("\n\n");
    printf("....Copy Table :");

    for(sayi2=dizi_kopya;sayi2<dizi_kopya+MAX;sayi2++)
    {
        printf("%4c",*sayi2);
    }

    printf("\n");


    return 0;
}
