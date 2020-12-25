#include <stdio.h>
#include <stdlib.h>

int can(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}

int man(int n)
{
    if(n%3==0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Bir sayi giriniz:");
    scanf("%d",&n);
    if(can(n)==1)
    {
        printf("Sayimiz cift sayidir.\n");
    }
    else
        printf("Sayimiz tek sayidir.\n");
    if(man(n)==1)
    {
        printf("Sayimiz 3 ile tam bolunur.\n");
    }
    if(can(n)==1 && man(n)==1)
    {
        printf("Sayimiz 6 ile tam bolunur.\n");
    }

    return 0;
}
