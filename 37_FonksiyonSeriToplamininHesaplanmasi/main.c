#include <stdio.h>
#include <stdlib.h>

int seritoplami(int n)
{
    int i,seri,toplam=0;

    /*
    for(i=1;i<=n;i++)
    {
        seri=i*i;
        toplam+=seri;
    }*/

    for(i=1;i<=n;i++)
    {
        toplam=toplam+(pow(i,2));
    }
    return toplam;
}

int main()
{
    int n;
    printf("N degerini giriniz:>>> ");
    scanf("%d",&n);
    printf("Serinin Toplami = %d\n",seritoplami(n));
    return 0;
}
