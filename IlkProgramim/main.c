#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Lutfen birinci sayiyi giriniz:");
    scanf("%d",&a);
    printf("Lutfen ikinci sayiyi giriniz:");
    scanf("%d",&b);
    printf("\nToplam:%d",a+b);
    printf("\nFark:%d",a-b);
    printf("\nCarpim:%d",a*b);
    printf("\nBolum:%.2f",(float)a/b);
    printf("\nMod:%d",a%b);
    printf("\n\nHesap Makinesi Basariyla Calisti\n\n");
}
