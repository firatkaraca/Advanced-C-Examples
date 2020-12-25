#include <stdio.h>
#include <stdlib.h>
#define CAN 10

int main()
{
    int dizi[CAN];
    int i;
    int max,min;

    printf("Lutfen %d tane deger giriniz:\n",CAN);
    for(i=0;i<CAN;i++)
    {
        scanf("%d",&dizi[i]);
    }

    min=dizi[0];
    max=dizi[0];

    for(i=1;i<CAN;i++)
    {
        if(dizi[i]<min)
        {
            min=dizi[i];
        }
        if(dizi[i]>max)
        {
            max=dizi[i];
        }
    }
    printf("\nEn kucuk eleman = %d\n",min);
    printf("\nEn buyuk eleman = %d\n",max);
    return 0;
}
