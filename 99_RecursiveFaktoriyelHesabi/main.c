#include <stdio.h>
#include <stdlib.h>

int fakt(int sayi)
{
    int sonuc;
    if(sayi!=0)
    {
        sonuc=sayi*fakt(sayi-1);
    }
    else
    {
        sonuc=1;
    }
    return sonuc;
}

int main()
{
    /*Klavyeden girilen bir n pozitif tamsayisina kadar olan sayilarin faktöriyelinin
    hesaplanmasini saðlayan C programini recursive fonksiyon kullanarak yaziniz*/


    int n;
    printf("Lutfen bir deger giriniz : ");
    scanf("%d",&n);
    printf("Faktoriyel = %d\n",fakt(n));


    return 0;
}
