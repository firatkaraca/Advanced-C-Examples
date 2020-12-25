#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    int i,sayac;
    printf("Lutfen bir cumle giriniz:\n>>>");
    gets(cumle);

    i=0;
    sayac=0;
    while(cumle[i])
    {
        if(cumle[i]==32)
        {
            sayac++;
        }
        i++;
    }
    printf("Girilen cumledeki kelime sayisi = %d",sayac+1);
}
