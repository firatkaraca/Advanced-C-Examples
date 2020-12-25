#include <stdio.h>
#include <stdlib.h>

/*
//Dikdörtgenler Prizmasý
int main()
{
    int a,b,h;
    printf("Lutfen a b ve h degerlerini giriniz:\n");
    scanf("%d%d%d",&a,&b,&h);
    printf("Dikdortgen prizmanin:\n");
    int taban_alani,yanal_alan,toplam_alan,hacim;
    taban_alani=a*b;
    yanal_alan=2*a*h+2*b*h;
    toplam_alan=2*a*b+2*a*h+2*b*h;
    hacim=a*b*h;
    printf("\tTaban alani=%d\n",taban_alani);
    printf("\tYanal alanlar toplami=%d\n",yanal_alan);
    printf("\tToplam alani=%d\n",toplam_alan);
    printf("\tHacmi=%d\n",hacim);
}
*/






/*
//Maximum Minimum sayiyi ekrana basma
int main()
{
    int a,b,c;
    int max,min;
    printf("Lutfen 3 tane sayi giriniz:\n");
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    printf("Maximum degerimiz=%d\n",max);

    min=a;
    if(b<min)
    {
        min=b;
    }
    if(c<min)
    {
        min=c;
    }
    printf("Minimum degerimiz=%d\n",min);
}
*/







/*
//Ýki sayýyý karþýlaþtýrma
int main()
{
    int a,b;
    printf("Lutfen iki tane sayi giriniz:\n");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("Iki sayi birbirine esittir\n");
    }
    if(a!=b)
    {
        printf("Iki sayi birbirine esit degildir\n");
    }
    if(a<b)
    {
        printf("a degerim b den kucuktur\n");
    }
    if(a>b)
    {
        printf("a degerim b den buyuktur\n");
    }
    if(a%b==0)
    {
        printf("a b nin katidir\n");
    }
    else
    {
        printf("a b nin kati degildir\n");
    }
}
*/






/*
//While ile kullanýcýnýn girdiði sayýya kadar olan sayýlarý ekrana listele
int main()
{
    int i;
    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&i);
    while(i!=0)
    {
        printf("%d ",i);
        i--;
    }
}
*/







/*
//1 den girdiðimiz sayiya kadar olan sayilarin toplami
int main()
{
    int a,i,toplam;
    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&a);

    toplam=0;
    i=1;
    while(i<=a)
    {
        if(i==a)
        {
            printf("%d = ",a);
        }
        else
        {
            printf("%d + ",i);
        }
        toplam=toplam+i;
        i++;
    }
    printf("%d",toplam);
}
*/







/*
//Formüle göre iþlem
int main()
{
    float x,sonuc;
    printf("Lutfen bir reel sayi giriniz:");
    scanf("%f",&x);

    sonuc=x*x*x+13*(x*x)+47*x+5;
    printf(">> f(%.3f) = %.3f",x,sonuc);
}
*/







/*
//sayýlarý çarpmadan iþaret bulan program
int main()
{
    int a,b;
    printf("Lutfen iki tane sayi giriniz:\n");
    scanf("%d%d",&a,&b);
    if((a>0 && b>0) || (a<0 && b<0))
    {
        printf(">> sign(%d*%d) = +1",a,b);
    }
    else if(a==0 || b==0)
    {
        printf(">> sign(%d*%d) = 0",a,b);
    }
    else //iki sayidan biri sýfýrsa
    {
        printf(">> sign(%d*%d) = -1",a,b);
    }
}
*/








/*
//Kullanýcýnýn girdiði limit degerine göre 17ye bölünen sayilari listeleyen program
int main()
{
    int limit,i,satir;
    printf("Lutfen bir limit degeri giriniz:\n>>>");
    scanf("%d",&limit);

    satir=0;
    i=0;

    while(i<=limit)
    {
        if(i%17==0)
        {
            printf("%5d",i);
            satir++;
            if(satir%10==0)
            {
                printf("\n");
            }
        }
        i++;
    }
    printf("\n");
    return 0;
}
*/









/*
//Karenin alani
int main()
{
    int x,alan;
    printf("Lutfen karenin kenar uzunlugunu giriniz:");
    scanf("%d",&x);
    alan=x*x;
    printf("Karenin alani=%d",alan);
}
*/










/*
//Sayinin birler basamagi ve onlar basamagini bulma
int main()
{
    int sayi;
    int birler_bas,onlar_bas;
    printf("Lutfen bir sayi giriniz:\n>>>");
    scanf("%d",&sayi);
    birler_bas=sayi%10;
    onlar_bas=sayi%100/10;
    printf("Birler basamagimiz=%d\n",birler_bas);
    printf("Onlar basamagimiz=%d\n",onlar_bas);
}
*/






/*
//Sayi yer degistirme
int main()
{
    int a,b,c;
    printf("Lutfen A degerini giriniz:\n>>>");
    scanf("%d",&a);
    printf("Lutfen B degerini giriniz:\n>>>");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Yeni A degeri = %d\n",a);
    printf("Yeni B degeri = %d",b);

    return 0;
}
*/










