#include <stdio.h>
#include <stdlib.h>

int main()
{
    int can[5];
    int *sayi1,*sayi2;
    int n;
    int gecici;
    printf("Lutfen dizimizin eleman sayisini giriniz:");
    scanf("%d",&n);
    printf("\n");
    for(sayi1=can;sayi1<can+n;sayi1++)
    {
        printf("%d.elemani giriniz:\n>>> ",sayi1-can+1);
        scanf("%d",sayi1);
    }
    printf("\nDizimizin ilk hali = ");
    for(sayi1=can;sayi1<can+n;sayi1++)
    {
        printf("%4d",*sayi1);
    }
    printf("\n");

    for(sayi1=can,sayi2=can+n-1;sayi1<sayi2;sayi1++,sayi2--)
    {
        gecici=*sayi1;
        *sayi1=*sayi2;
        *sayi2=gecici;
    }
    printf("\nDizimizin son hali = ");
    for(sayi1=can;sayi1<can+n;sayi1++)
    {
        printf("%4d",*sayi1);
    }
    printf("\n\n<<< Islem basariyla sonlandirildi >>>\n\n");
    return 0;
}
