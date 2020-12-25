#include <stdio.h>
#include <stdlib.h>

float calcul(float bir,float iki,char operasyon)
{
    float islemsonucu;
    switch(operasyon)
    {
    case '+':
        islemsonucu=bir+iki;
        break;
    case '-':
        islemsonucu=bir-iki;
        break;
    case '*':
        islemsonucu=bir*iki;
        break;
    case '/':
        islemsonucu=bir/iki;
        break;
    default:
        printf("Yanlis bir operator girdiniz\n");
        break;
    }
    return islemsonucu;
}


int main()
{
    float birincisayi,ikincisayi;
    char islem;
    float sonuc;
    printf("Hangi islemi yapmak istiyorsunuz:\n");
    scanf("%c",&islem);
    printf("Lutfen iki adet sayi giriniz:\n");
    scanf("%f%f",&birincisayi,&ikincisayi);
    printf("----------------------------\n\n");

    sonuc=calcul(birincisayi,ikincisayi,islem);
    printf("Ilk sayimiz=%.2f\nIkinci sayimizi=%.2f\nIslemimiz=%c\nSonucumuz=%.2f\n\n",birincisayi,ikincisayi,islem,sonuc);

    printf("----------------------------\n\n");

    return 0;
}
