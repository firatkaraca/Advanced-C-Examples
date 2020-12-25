#include <stdio.h>
#include <stdlib.h>
#define MAX 40

int karakter_sayisi(char dizi[MAX])
{
    int i;
    for(i=0;dizi[i]!='\0';i++);
    return i;
}

void ortak_harf(char dizi[MAX],char tab[MAX])
{
    int i,j;
    int sayac=0;
    int a=karakter_sayisi(dizi);
    int b=karakter_sayisi(tab);

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(dizi[i]==tab[j])
            {
                printf("1.Kelimenin %d.harfi 2.Kelimenin %d.harfiyle ortak << %c >>\n",i+1,j+1,dizi[i]);
                sayac++;
            }
        }
    }

    printf("\nOrtak harf sayisi = %d",sayac);

}

int main()
{
    int i=0;
    int karakter;
    char dizi[MAX];
    int tab[MAX];

    printf("Lutfen bir cumle giriniz:\n>>> ");

    do
    {
        scanf("%c",&dizi[i]);
        i++;
    }
    while(dizi[i-1]!='\n');
    dizi[i-1]='\0';

    karakter=karakter_sayisi(dizi);
    printf("Dizimizin Boyu = %d",karakter);

    printf("\n\nLutfen iki tane kelime giriniz:\n");
    scanf("%s %s",&dizi,&tab);

    ortak_harf(dizi,tab);

    return 0;
}
