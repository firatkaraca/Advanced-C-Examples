#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dizi[100];
    char eleme;
    char *can;

    printf("Lutfen bir karakter dizisi giriniz:\n>>> ");
    gets(dizi);
    printf("Karakter dizisinden cikarmak istediginiz karakter nedir?\n>>> ");
    scanf("%c",&eleme);

    /*
    for(can=dizi;*can;can++)
    {
        if(*can==eleme)
        {
            strcpy(can,can+1);
        }
    }*/

    can=dizi;
    while(*can)
    {
        if(*can==eleme)
        {
            strcpy(can,can+1);
        }
        else
        {
            can++;
        }
    }

    printf("\nEleme yapildiktan sonra dizimiz <<< %s >>> \n\n",dizi);

    return 0;
}
