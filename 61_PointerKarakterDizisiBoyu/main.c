#include <stdio.h>
#include <stdlib.h>

int main()
{
    char can[100];
    char *pointer;

    printf("Lutfen bir karakter dizisi giriniz:\n>>> ");
    gets(can);

    for(pointer=can;*pointer;pointer++);

    printf("Dizimiz %s",can);
    printf(" %d karakterden olusur.",pointer-can);

    return 0;
}
