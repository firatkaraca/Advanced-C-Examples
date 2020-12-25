#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    int i=0,sayac=0;

    printf("Lutfen bir cumle giriniz:\n");
    gets(cumle);

    while(cumle[i])
    {
        if(cumle[i]==32)
        {
            sayac++;
        }
        i++;
    }
    printf("Cumledeki kelime sayisi = %d",i-sayac);
}
