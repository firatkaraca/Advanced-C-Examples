#include <stdio.h>
#include <stdlib.h>

int main()
{
    char can[100]="canan";
    char *p1;

    p1=can;

    printf("%c",*(p1+0));
    printf("%c",*(p1+1));
    printf("%c",*(p1+2));
    printf("%c",*(p1+3));
    printf("%c",*(p1+4));



    return 0;
}
