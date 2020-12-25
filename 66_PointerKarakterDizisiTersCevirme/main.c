#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[5][50];
    char *ilk,*ikinci;
    int i;
    char gecici;

    printf("\nLutfen 5 tane kelime giriniz:\n");
    printf("_____________________________\n\n");

    for(i=0;i<5;i++)
    {
        printf(" %d.kelime : ",i+1);
        scanf("%s",&dizi[i]);
    }

    for(i=0;i<5;i++)
    {
        ilk=ikinci=dizi+i;


        while(*ikinci)
        {
            ikinci++;
        }
        ikinci--;

        while(ilk<ikinci)
        {
            gecici=*ilk;
            *ilk=*ikinci;
            *ikinci=gecici;
            ilk++;
            ikinci--;
        }
    }

    printf("\n-----------------------------\n\n");

    for(i=0;i<5;i++)
    {
        printf(" %d.kelimenin tersi : %s\n",i+1,dizi[i]);
    }

    printf("\n_____________________________\n\n");

    return 0;
}
