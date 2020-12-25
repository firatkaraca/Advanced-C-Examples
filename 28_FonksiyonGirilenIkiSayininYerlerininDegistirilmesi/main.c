#include <stdio.h>
#include <stdlib.h>

void yerdegistir(int x,int y)
{
    int gecici;
    gecici=x;
    x=y;
    y=gecici;
    printf("x=%d y=%d",x,y);
}

int main()
{
    int x,y;
    printf("Lutfen iki adet sayi giriniz:\n");
    scanf("%d%d",&x,&y);
    printf("x:%d y:%d\n",x,y);
    yerdegistir(x,y);
    return 0;
}
