#include <stdio.h>
#include <stdlib.h>

int main()
{
    char can;
    printf("Lutfen bir karakter giriniz:");
    scanf("%c",&can);
    if((can>='A')&&(can<='Z'))
    {
        printf("Kucuk harfimiz = %c",tolower(can));
    }
    else
    {
        printf("Yanlis bir karakter girdiniz");

    }
    return 0;
}
