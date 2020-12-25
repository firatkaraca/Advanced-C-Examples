#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int main()
{
    char dizi1[]="bonne";
    char dizi2[]="soiree";
    char sonuc[100]="";

    strcpy(sonuc,dizi1);

    strncpy(sonuc+3,dizi2,5);
    printf("%s",sonuc);
}
*/

int main()
{
    char can[100][100]={"bir","iki","uc","dort","bes"};

    printf("Dizimin dorduncu elemani:%s\n",can[3]);
    printf("Dizimin dorduncu elemaninin ucuncu karakteri:%c\n",can[3][2]);
}
