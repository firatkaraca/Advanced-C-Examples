#include <stdio.h>
#include <stdlib.h>

union paylasim_kontrol{
int x;
int y;
}kontrol;

int main()
{
    /*Klavyeden girilen sayilari tutan iki adet degisken i�in ayn� bellek b�lgesini payla�an
    paylas ad�nda bir union tan�mlay�n�z ve degi�kenlerin kulland�klar� bellek b�lgesinin
    adreslerini ekrana g�steriniz*/

    int *X,*Y;

    kontrol.x=100;
    X=&kontrol.x;
    printf("Tamsayi(x) = %d Bellek adresi %X\n",kontrol.x,X);

    kontrol.y=200;
    Y=&kontrol.y;
    printf("Tamsayi(y) = %d Bellek adresi %X\n",kontrol.y,Y);

    return 0;
}
