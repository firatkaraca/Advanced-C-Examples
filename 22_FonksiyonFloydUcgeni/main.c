#include <stdio.h>
#include <stdlib.h>


void floyd(int n)
{
    int i=1;
    int j;
    int sayac=1;

    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("%3d",sayac);
            sayac++;

            j++;
        }
        printf("\n\n");
        i++;
    }
}

int main()
{
    int satir;

    printf("Floyd ucgeni satir sayisini giriniz:");
    scanf("%d",&satir);

    floyd(satir);
}
