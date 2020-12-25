#include <stdio.h>
#include <stdlib.h>

struct degerTip{
int tip;
union{
char kar;
float sayi;
}bir;
};

int main()
{
    struct degerTip degerler[20];
    int i=-1;
    int j;
    int n=0;
    float ortalama=0.0;
    char satir;

    do
    {
        i++;
        printf("Lutfen bir tamsayi giriniz:");
        scanf("%d",&degerler[i].tip);
        scanf("%c",&satir);
        if(degerler[i].tip==1)
        {
            printf("Karakter giriniz:");
            scanf("%c",&degerler[i].bir.kar);
            scanf("%c",&satir);
        }
        else if(degerler[i].tip==0)
        {
            printf("Reel sayi giriniz:");
            scanf("%f",&degerler[i].bir.sayi);
        }

    }while(degerler[i].tip==0 || degerler[i].tip==1);


    for(j=0;j<=i;j++)
    {
        if(degerler[j].tip==0)
        {
            ortalama+=degerler[j].bir.sayi;
            n++;
        }
    }
    ortalama=ortalama/n;

    printf("Reel sayilarin ortalamasi : %f",ortalama);

    return 0;
}
