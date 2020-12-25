#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[1000];
    int i=0,j=0;
    printf("Cumle giriniz:");
    gets(cumle);

    while(i<=strlen(cumle))
    {
        j=0;
        while(j<i)
        {
            printf("%c ",cumle[j]);
            j++;
        }
        printf("\n");

        i++;
    }

}
