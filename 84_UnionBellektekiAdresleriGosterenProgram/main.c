#include <stdio.h>
#include <stdlib.h>

union paylasim_kontrol{
int x;
int y;
}kontrol;

int main()
{
    /*Klavyeden girilen sayilari tutan iki adet degisken için ayný bellek bölgesini paylaþan
    paylas adýnda bir union tanýmlayýnýz ve degiþkenlerin kullandýklarý bellek bölgesinin
    adreslerini ekrana gösteriniz*/

    int *X,*Y;

    kontrol.x=100;
    X=&kontrol.x;
    printf("Tamsayi(x) = %d Bellek adresi %X\n",kontrol.x,X);

    kontrol.y=200;
    Y=&kontrol.y;
    printf("Tamsayi(y) = %d Bellek adresi %X\n",kontrol.y,Y);

    return 0;
}
