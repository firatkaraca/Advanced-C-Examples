#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayim)
{
    int i,sonuc=1;
    for(i=1;i<=sayim;i++)
    {
        sonuc=sonuc*i;
    }
    return sonuc;
}


int main()
{
    int sayi;

    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&sayi);

    printf("%d! = %d",sayi,faktoriyel(sayi));
}
