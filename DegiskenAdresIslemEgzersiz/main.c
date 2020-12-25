#include <stdio.h>
#include <stdlib.h>

void ussunu_al(int a,int b,int *can)
{
    int i;
    *can=1;
    for(i=0;i<b;i++)
    {
        *can=*can*a;
    }
}

int main()
{
    int x,y,sonuc;
    printf("Lutfen x degerini giriniz:\n>>>");
    scanf("%d",&x);
    printf("Lutfen y degerini giriniz:\n>>>");
    scanf("%d",&y);

    ussunu_al(x,y,&sonuc);
    printf("%d uzeri %d = %d",x,y,sonuc);
}
