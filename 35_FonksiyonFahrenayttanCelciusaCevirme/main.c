#include <stdio.h>
#include <stdlib.h>

float FdenCye(float f)
{
    return (0.5555)*(f-32);
}

float CdenFye(float c)
{
    return (1.8*c)+32;
}

int main()
{
    float f,c,secim;
    printf("1 Fahrenyt => Celcius\n");
    printf("2 Celcius  => Fahrenayt\n>>> ");
    scanf("%f",&secim);
    if(secim==1)
    {
        printf("\nLutfen Fahrenayt degerini giriniz:\n>>> ");
        scanf("%f",&f);
        printf("\n%f F = %f C dur\n",f,FdenCye(f));
    }
    else if(secim==2)
    {
        printf("\nLutfen Celcius degerini giriniz:\n>>> ");
        scanf("%f",&c);
        printf("\n%f C = %f F dir\n",c,CdenFye(c));
    }
    else
    {
        printf("
               Yanlis secim yaptiniz");
    }
    return 0;
}
