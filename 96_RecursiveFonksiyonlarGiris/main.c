#include <stdio.h>
#include <stdlib.h>

/*Klavyeden girilen bir N pozitif tamsayisindan 0 a kadar sayilarin ekrana gosterilmesini
saglayan c programini yaziniz*/

void listele(int sayi)
{
    if(sayi==0)
    {
        printf("%d",sayi);
    }
    else
    {
        printf("%d\n",sayi);
        listele(sayi-1);
    }
}

int main()
{
    int n;
    printf("Lutfen bir sayi giriniz : ");
    scanf("%d",&n);
    listele(n);
    return 0;
}
