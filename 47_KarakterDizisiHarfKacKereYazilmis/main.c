#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int sayma[26]={0};
    int can,karakter,i;
    karakter=0;
    printf("Lutfen bir text girin ve entera basin:\n>>> ");
    while((c=getchar())!='\n')
    {
        can=c-'a';
        if(can>=0 && can<26)
        {
            sayma[can]++;
        }
        else
            karakter++;
    }
    printf("\nCumledeki karakter sayisi = %d\n\n",karakter);


    for(i=0;i<26;i++)
    {
        if(sayma[i]>0)
            printf("< %c > harfi %d kez tekrarlandi\n",i+'a',sayma[i]);
    }

    return 0;
}
