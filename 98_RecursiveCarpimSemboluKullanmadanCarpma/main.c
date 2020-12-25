#include <stdio.h>
#include <stdlib.h>

int carpim(int sayi1,int sayi2)
{
    int sonuc;
    if(sayi2==1)
    {
        sonuc=sayi1;
    }
    else
    {
        sonuc=sayi1+carpim(sayi1,sayi2-1);
    }
    return sonuc;
}


/*Klavyeden girilen iki tamsayinin carpimini carpim sembolu kullanmadan gerceklestiren
c programini recursive fonksiyon ardimiyla yaziniz.*/

int main()
{
    int a,b;
    printf("Lutfen iki adet sayi giriniz:\n");
    scanf("%d%d",&a,&b);

    printf("%d x %d = %d",a,b,carpim(a,b));
    system("color a");
    return 0;
}
