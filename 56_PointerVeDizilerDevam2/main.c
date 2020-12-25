#include <stdio.h>
#include <stdlib.h>

int main()
{
    char isim[20]={'b','o','n','j','o','u','r','\0'};
    char *can;

    can=isim;
    //printf("%c",*can);

    for(can=isim;can<isim+7;can++)
    {
        printf("%d - %c\n",can,
               *can);
    }

    return 0;
}
