#include <stdio.h>
#include <stdlib.h>

struct karmasiksayi
{
    float a,b;
};

int main()
{
    struct karmasiksayi sayi1,sayi2,sonuc;

    char oper;
    printf("Lutfen yapmak istediginiz islemi giriniz ( + , - ) : ");
    scanf("%c",&oper);

    printf("Birinci karmasik sayi :\n");
    scanf("%f%f",&sayi1.a,&sayi1.b);

    printf("Ikinci karmasik sayi :\n");
    scanf("%f%f",&sayi2.a,&sayi2.b);

    if(oper=='+')
    {
        sonuc.a=sayi1.a+sayi2.a;
        sonuc.b=sayi1.b+sayi2.b;
    }
    else if(oper=='-')
    {
        sonuc.a=sayi1.a-sayi2.a;
        sonuc.b=sayi1.b-sayi2.b;
    }
    else
    {
        printf("Lutfen dogru durust bir operator giriniz");
    }
    printf("Sonuc : ");

    printf("%.2f",sonuc.a);

    if(sonuc.b>=0)
    {
        printf("+%.2f i",sonuc.b);
    }
    else
    {
        printf("%.2f i",sonuc.b);
    }

    return 0;
}
