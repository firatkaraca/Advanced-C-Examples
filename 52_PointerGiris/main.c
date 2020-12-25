#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int can=10;
    int *p;

    p=&can;

    printf("%d\n",*p);
    printf("%d\n",p);
    printf("%d\n",can);
    printf("%d\n",&can);
    */


    /*
    int *sayi;
    int n;
    n=20;

    sayi=&n;
    printf("%d\n",*sayi);
    printf("%d\n",sayi);
    printf("%d\n",n);
    printf("%d\n\n",&n);

    *sayi=30;

    printf("%d\n",*sayi);
    printf("%d\n",sayi);
     */

    int *ad1,*ad2,*ad;
    int n=10,p=20;

    ad1=&n;
    ad2=&p;

    printf("Atamami yapmadan once ad1 degeri = %d\n",*ad1);
    printf("%d\n",ad1);
    *ad1=*ad2+2;
    printf("Atamami yaptiktan sonra ad1 degeri = %d\n",*ad1);
    printf("%d",ad1);


    return 0;
}
