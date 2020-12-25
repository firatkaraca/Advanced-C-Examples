#include <stdio.h>
#include <stdlib.h>

int topla(int sayi)
{
    if(sayi==1)
    {
        return 1;
    }
    else
    {
        return sayi+topla(sayi-1);
    }
}


/*Klavyeden girilen bir N pozitif tamsayisina kadar olan sayilarin toplanarak sonucun ekrana
gosterilmesini saglayan c programini recursive fonksiyon yardimiyla yazin*/

int main()
{
    int N;
    printf("Lutfen bir sayi giriniz : ");
    scanf("%d",&N);

    printf("Toplam = %d",topla(N));

    return 0;
}
