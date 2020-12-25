#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int *pointer;
    int i;

    printf("...Dizimizin ilk hali:");

    for(i=0;i<15;i++)
    {
        printf("%4d",*(dizi+i));
    }
    printf("\n\n");

    printf("Dizideki cift sayilar:");

    for(i=0;i<15;i+=2)
    {
        printf("%4d",i);
    }
    printf("\n\n");
    printf(".Dizideki tek sayilar:");

    for(pointer=dizi+1;*pointer;pointer+=2)
    {
        printf("%4d",*pointer);
    }
    printf("\n\n");



    return 0;
}
