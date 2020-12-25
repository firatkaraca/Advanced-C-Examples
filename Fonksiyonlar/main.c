#include <stdio.h>
#include <stdlib.h>

int sayilaritopla(int sayi1,int sayi2,int sonuc,char ope)
{
    if(ope=='+')
    {
        return (sayi1+sayi2);
    }
    else if(ope=='-')
    {
        return (sayi1-sayi2);
    }
    else if(ope=='*')
    {
        return (sayi1*sayi2);
    }
    else if(ope=='/')
    {
        return (sayi1/sayi2);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int sayi1,sayi2,toplam;
    char op;
    printf("Lutfen bir operator giriniz:\n");
    scanf("%c",&op);
    printf("Lutfen iki tane sayi giriniz:\n");
    scanf("%d%d",&sayi1,&sayi2);
    toplam=sayilaritopla(sayi1,sayi2,toplam,op);
    if(toplam==0)
    {
        toplam=printf("Hatali operator girdiniz!");
    }
    else
    {
        printf("Sonuc:%d",toplam);
    }
}
