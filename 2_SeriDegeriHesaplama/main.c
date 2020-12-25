#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    float x,seri;
    char devam;

    do
    {
        printf("Pozitif sayi giriniz:\n");
        scanf("%d",&n);
        printf("Reel sayi giriniz:\n");
        scanf("%f",&x);

        for(i=1;i<=2*n-1;i+=2)
        {
            seri+=i/pow(x,i+1);
        }

        printf("Seri=%.2f\n",seri);
        printf("Devam icin : 'E' veya 'e' ye basin:\n");
        scanf("%s",&devam);
        printf("___________________________________\n\n");
    }
    while((devam=='E')||(devam=='e'));

    printf("Hoscakalin\n");
    printf("___________________________________\n\n");

    return 0;
}
