#include <stdio.h>
#include <stdlib.h>

int us(int taban,int us)
{
    int i;
    int sonuc=1;

    for(i=1;i<=us;i++)
    {
        sonuc=taban*sonuc;
    }
    return sonuc;
}

int main()
{
    int a,b;

    printf("Taban ve us degerlerini giriniz:\n");
    scanf("%d%d",&a,&b);

    printf("%d^%d = %d",a,b,us(a,b));
}
