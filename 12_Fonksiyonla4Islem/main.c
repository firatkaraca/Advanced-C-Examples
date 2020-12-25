#include <stdio.h>
#include <stdlib.h>

float dortislem(float a,float b,char isl)
{

    if(isl == '+')
        return a+b;
    else if (isl == '-')
        return a-b;
    else if (isl == '*')
        return a*b;
    else if (isl == '/')
        return a/b;
    else
        printf("Yanlis operator girdiniz");

/*
    switch(isl)
    {
    case '+':
        return a+b;
        break;
    case '-':
        return a-b;
        break;
    case '*':
        return a*b;
        break;
    case '/':
        return a/b;
        break;
    default:
        printf("Yanlis operator girdiniz");
        break;
    }
    */
}


int main()
{
    int sayi1,sayi2;
    char islem;

    printf("Lutfen bir operator giriniz:\n");
    scanf("%c",&islem);
    printf("Lutfen iki tane sayi giriniz:\n");
    scanf("%d%d",&sayi1,&sayi2);

    printf("%.2f",dortislem(sayi1,sayi2,islem));
    return 0;
}
