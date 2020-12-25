#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
//Strlen Fonksiyonu
int main()
{
    char can[]="Aralik";
    printf("Karakter dizimizin boyu:%d\n",strlen(can));
    printf("Karakter dizimizin boyu:%d",sizeof(can));
    return 0;
}
*/

/*
//Strcmp Fonksiyonu
int main()
{
    int sonuc;
    char can[]="abcdef";
    char canan[]="ABCDEF";
    sonuc=strcmp(can,canan);
    printf("%d\n",sonuc);
    if(sonuc<0)
    {
        printf("Can canandan daha kucuktur");
    }
    else if(sonuc>0)
    {
        printf("Can canandan daha buyuktur");
    }
    else
    {
        printf("Ikiside birbirine esittir");
    }
}
*/

/*
//Strcpy Fonksiyonu
int main()
{
    char can[]="Benim adim firat karaca";
    char canan[100];

    strcpy(canan,can);
    printf("%s",canan);
}
*/

/*
//Strchat Fonksiyonu
int main()
{
    char can[]="Benim adim ";
    char canan[]="firat karaca";

    strcat(can,canan);
    printf("%s",can);
}
*/
/*
int main()
{
    char bos[100];

    strcpy(bos,"Benim ");

    strcat(bos,"adim ");

    strcat(bos,"firat karaca");

    printf("%s",bos);
}
*/


int main()
{
    int a;
    char can[100];
    char canan[100];

    printf("Lutfen bir yazi giriniz:\n");
    gets(can);
    printf("Lutfen ikinci yaziyi giriniz:\n");
    gets(canan);

    printf("Birinci yazinin sonuna kac karakter eklemek istersiniz:\n");
    scanf("%d",&a);

    printf("\nEklemeden once:%s\n",can);

    printf("\nBirlestirmeden sonra:");
    strncat(can,canan,a);

    printf("%s\n",can);
}
