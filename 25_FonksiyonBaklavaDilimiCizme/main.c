#include <stdio.h>
#include <stdlib.h>

/*
   c     3 bosluk
  ccc    2 bosluk
 ccccc   1 bosluk
ccccccc  0 bosluk
 +++++   1 bosluk
  +++    2 bosluk
   +     3 bosluk
*/

void ucgenc(int n)
{
   int i,j;
   int bosluksayisi=n-1;

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=bosluksayisi;j++)
       {
           printf(" ");
       }
       bosluksayisi--;
       for(j=1;j<=2*i-1;j++)
       {
           printf("c");
       }
       printf("\n");
   }
}

void ucgenplus(int n)
{
    int i,j;
    int bosluksayisi=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=bosluksayisi;j++)
        {
            printf(" ");
        }
        bosluksayisi++;
        for(j=1;j<=2*(n-i)-1;j++)
        {
            printf("+");
        }
        printf("\n");
    }
}

int main()
{
    int satir;
    printf("Lutfen satir sayisini giriniz:");
    scanf("%d",&satir);
    ucgenc(satir);
    ucgenplus(satir);
}
