#include <stdio.h>
#include <stdlib.h>

/* //Ornek
int main()
{
    int yas;
    int ugurlu_sayi;
    printf("Lutfen yasinizi girin:");
    scanf("%d",&yas);
    printf("Lutfen ugurlu sayinizi giriniz:");
    scanf("%d",&ugurlu_sayi);

    if(((yas>30) && (yas<60)) || ugurlu_sayi==29)
       {
           printf("BRAVO");
       }
}
*/
//------------------------------------------Ornek
/*
int main()
{
    int a=3;

    if(a==5)
    {
        printf("A degeri 5'tir");
    }
    else if(a==7)
    {
        printf("A degeri 7'dir");
    }
    else if(a==3)
    {
        printf("A degeri 3'tur");
    }
    else
    {
        printf("A degeri yoktur");
    }
}
*/
//-------------------------------------OrnekTekCiftKontrolu

/*
int main()
{
    int a,b;

    printf("Lutfen birinci sayiyi giriniz:");
    scanf("%d",&a);
    printf("Lutfen ikinci sayiyi giriniz:");
    scanf("%d",&b);

    if(a%2==1)
    {
        if(b%2==1)
        {
            printf("Iki sayimda tektir");
        }
        else
        {
            printf("Ilk sayim tek ikinci sayim cifttir");
        }
    }
    else
    {
        if(b%2==1)
        {
            printf("Ilk sayim cift ikinci sayim tektir");
        }
        else
        {
            printf("Iki sayimda cifttir");
        }
    }
}
*/
/*
int main()
{
    int a=4;
    while(a<50)
    {
        printf("%d\n",a);
        a=a+5;
    }
}
*/
/*
//While elma örneði
int main()
{
    int elma=10;
    while(elma>0)
    {
        printf("Cebimde %d tane elma var\n",elma);
        elma=elma-1;
    }
    printf("Cebimde elma melma yok");
}
*/
/*
int main()
{
    int portakal=20;

    do
    {
        printf("%d tane portakalim kaldi\n",portakal);
        portakal=portakal-1;
    }
    while(portakal>0);
    printf("Hic portakalim kalmadi");
}
*/
/*
int main()
{
    int kivi=0;

    do
    {
        printf("Bugun %d tane kivi yedim\n",kivi);
        kivi=kivi+1;
    }
    while(kivi<=15);
}
*/
/*
//For Dongusu----------------------------------------
int main()
{
    int i;
    for(i=1;i<10;i++)
    {
        printf("%d\n",i);
    }
}
*/
/*
int main()
{
    int i=0;
    while(i<10)
    {
        printf("%d\n",i);
        i=i+1;
    }
}
*/
/*
int main()
{
    int i=0;
    do
    {
        printf("%d\n",i);
        i=i+1;
    }
    while(i<10);
}
*/

/*
//1 den 5e kadar olan sayıların çarpımı
int main()
{
    int i;
    int carpim=1;

    for(i=1;i<5;i++)
    {
        carpim=carpim*i;
    }
    printf("1 den %d ye kadar olan sayilarin carpimi=%d",i,carpim);
}
*/
/*
int main()
{
    printf("%d\t%d\t%d\t",'a','b','c');

}
*/
/*
//Alfabeyi bastırma
int main()
{
    int i;

    for(i='a';i<='z';i++)
    {
        printf("%c",i);
    }
}
*/
/*
//Alfabeyi tersten bastırma
int main()
{
    int i;

    for(i='z';i>='a';i--)
    {
        printf("%c",i);
    }
}
*/

/*
//Girilen harfin ASCII tablosundaki karsiliği
int main()
{
    char harf;
    printf("Lutfen bir harf giriniz:");
    scanf("%c",&harf);
    printf("%c harfinin ASCII tablosundaki karsiligi=%d",harf,harf);
}
*/

/*
//Break kullanimi
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        if(i==5)
        {
            break;
        }
        printf("%d\n",i);
    }
}
*/
/*
//Contiune Kullanimi
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        if(i==3 || i==5 ||i==7)
        {
            printf("\n");
            continue;
        }
        printf("%d\n",i);
    }
}
*/


//Switchcase yapisi
/*
int main()
{
    int day;
    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&day);

    switch(day)
    {
        case 1:printf("Pazartesi");
        break;
        case 2:printf("Sali");
        break;
        case 3:printf("Carbamba");
        break;
        case 4:printf("Persembe");
        break;
        case 5:printf("Cuma");
        break;
        case 6:printf("Cumartesi");
        break;
        case 7:printf("Pazar");
        break;
        default:printf("Gecersiz Gun");
        break;
    }
}
*/

//Günler sorusu if elseif else ile
/*
int main()
{
    int day;
    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&day);

    if(day==1)
    {
        printf("Pazartesi");
    }
    else if(day==2)
    {
        printf("Sali");
    }
    else if(day==3)
    {
        printf("Carsamba");
    }
    else if(day==4)
    {
        printf("Persembe");
    }
    else if(day==5)
    {
        printf("Cuma");
    }
    else if(day==6)
    {
        printf("Cumartesi");
    }
    else if(day==7)
    {
        printf("Pazar");
    }
    else
    {
        printf("Boyle bir gun yok!");
    }
}
*/

/*
//SwitchCase HesapMakinesi
int main()
{
    char op;
    float a,b;
    printf("Lutfen bir operator giriniz:");
    scanf("%c",&op);
    printf("Lutfen iki tane sayi giriniz:\n");
    scanf("%f%f",&a,&b);

    switch(op)
    {
        case '+':printf("%.2f+%.2f=%.2f",a,b,a+b);
        break;
        case '-':printf("%.2f-%.2f=%.2f",a,b,a-b);
        break;
        case '*':printf("%.2f*%.2f=%.2f",a,b,a*b);
        break;
        case '/':printf("%.2f/%.2f=%.2f",a,b,a/b);
        break;
        default:printf("Hatali veri girisi");
        break;
    }
}
*/

/*
//Diziye ekleme yapma
int main()
{
    int can[10];

    for(int i=0;i<10;i++)
    {
        can[i]=i*2;
        printf("%d\n",can[i]);
    }
}
*/

/*
int main()
{
    int dizi[4];
    int i;
    int toplam;
    i=0;
    while(i<4)
    {
        printf("Lutfen bir tamsayi giriniz:");
        scanf("%d",&dizi[i]);
        i++;
    }
    printf("\n");
    toplam=0;
    for(i=0;i<4;i++)
    {
        toplam=toplam+dizi[i];
    }
    printf("Dizi toplam degerim=%d\n",toplam);
}
*/
