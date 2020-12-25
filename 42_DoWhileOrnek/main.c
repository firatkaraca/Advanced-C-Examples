#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    float sonuc;

    do
    {
        printf("N degeri kac olsun:");
        scanf("%d",&n);

    }
    while(n<1);
    for(i=1;i<=n;i++)
    {
        sonuc+=(float)1/i;
    }
    printf("Sonucumuz = %f",sonuc);
    return 0;
}
