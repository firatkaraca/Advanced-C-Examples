#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int i;
    int can[N];
    int max,min;
    int *canan;

    printf("%d adet deger giriniz:\n",N);
    for(canan=can;canan<can+10;canan++)
    {
        scanf("%d",canan);
    }


    max=min=can[0];

    for(canan=can;canan<can+10;canan++)
    {
        if(*canan>max)
        {
            max=*canan;
        }
        if(*canan<min)
        {
            min=*canan;
        }
    }
    printf("En buyuk deger = %d\n",max);
    printf("En kucuk deger = %d\n",min);

    return 0;
}
