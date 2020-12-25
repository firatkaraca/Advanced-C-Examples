#include <stdio.h>
#include <stdlib.h>

void sayiiste()
{
    int sayi;

    while(1)
    {
        printf("Lutfen bir sayi giriniz:\n>>> ");
        scanf("%d",&sayi);

        if(sayi<0)
        {
            printf("\nNegatif bir sayi girdiniz...\n");
            break;
        }
    }
}

int main()
{
    sayiiste();
}
