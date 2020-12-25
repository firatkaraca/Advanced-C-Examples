#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *gun[7]={"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"};
    int i;


    int n;
    printf("       ____________________\n      |\n");
    for(n=0;n<7;n++)
    {
        printf("      | %d.gun = %s\n",n+1,gun[n]);
    }
    printf("      |____________________\n\n");


    do
    {
        printf("Lutfen 1-7 arasinda bir sayi giriniz:\n>>> ");
        scanf("%d",&i);
    }
    while(i<1 || i>7);

    printf("\n<<< %3d numarali gun %s'dir   >>>\n\n",i,gun[i-1]);



    return 0;
}
