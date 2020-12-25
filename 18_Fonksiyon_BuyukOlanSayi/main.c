#include <stdio.h>
#include <stdlib.h>

int buyukolan(int a,int b)
{
    if(a>b)
        return 1;
    else if(a<b)
        return 0;
    else
        return 2;
}


int main()
{
    int sayi1,sayi2;
    int sonuc;

    printf("Lutfen iki adet sayi giriniz:\n");
    scanf("%d%d",&sayi1,&sayi2);

    sonuc=buyukolan(sayi1,sayi2);

    if(sonuc==1)
        printf("%d %d den buyuktur",sayi1,sayi2);
    else if(sonuc==0)
        printf("%d %d den buyuktur",sayi2,sayi1);
    else
        printf("%d %d ye esittir",sayi1,sayi2);
    return 0;
}
