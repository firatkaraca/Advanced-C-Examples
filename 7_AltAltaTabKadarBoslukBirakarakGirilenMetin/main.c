#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[300];
    int i,j,sayac=0;

    printf("Cumle gir:");
    gets(cumle);

    for(i=0;cumle[i];i++)
    {
        printf("%c",cumle[i]);

        if(cumle[i]==32)
        {
            printf("\n");

            sayac++;
            for(j=0;j<sayac;j++)
            {
                printf("\t");
            }
        }
    }
}
