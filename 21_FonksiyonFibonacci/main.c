#include <stdio.h>
#include <stdlib.h>

/*
void fibonacci(sayi)
{
    int i=1;
    int ilk=1;
    int son=1;

    printf("%d\n",ilk);

    while(i<sayi)
    {
        printf("%d\n",son);
        son=son+ilk;
        ilk=son-ilk;
        i++;
    }
}

int main()
{
    int sayi;
    printf("Lutfen sayi giriniz:");
    scanf("%d",&sayi);
    fibonacci(sayi);

    return 0;
}
*/












void fibonacci(int n)
{
    int ilk=0;
    int ikinci=1;
    int sonraki;
    int i;

    printf("Uretilecek fibonacci sayilari:\n");

    for(i=0;i<n;i++)
    {
        if(i<=1)
        {
            sonraki=i;
        }
        else
        {
            sonraki=ilk+ikinci;
            ilk=ikinci;
            ikinci=sonraki;
        }
        printf("%d\n",sonraki);
    }
}



int main()
{
    int sayi;

    printf("Kac adet fibonacci sayisi uretilecek:\n>>> ");
    scanf("%d",&sayi);
    fibonacci(sayi);
}
