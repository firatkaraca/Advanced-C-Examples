#include <stdio.h>
#include <stdlib.h>

/*
//Ucgen Sorusu
int main()
{
    int aci1,aci2,aci3;
    printf("3 tane aci giriniz:\n");
    scanf("%d%d%d",&aci1,&aci2,&aci3);

    if(aci1+aci2+aci3==180)
    {
        if(aci1==60 && aci2==60 && aci3==60)
        {
            printf("Bu bir eskenar ucgendir");
        }
        else if(aci1==aci2 || aci1==aci3 || aci2==aci3)
        {
            printf("Bu bir ikizkenar ucgendir");
        }
        else
        {
            printf("Bu bir cesitkenar ucgendir");
        }
    }
    else
    {
        printf("Acilar ucgen olusturmaz");
    }
}
*/


/*
//Telefon Sorusu
int main()
{
    float sure,ucret;
    printf("Telefon konusma suresi:");
    scanf("%f",&sure);
    if(sure<=3)
    {
        ucret=0.25;
    }
    else
    {
        ucret=0.25+(sure-3)*0.08;
    }
    printf("Ucret:%.2f",ucret);


    return 0;
}
*/



/*
//KESIRLERDE TOPLAMA CIKARMA SORUSU
int main()
{
    int no1,no2;
    char op;
    printf("Isleminizi seciniz (+,-):");
    scanf("%c",&op);
    printf("Iki tamsayi giriniz:\n");
    scanf("%d%d",&no1,&no2);
    if(no1==0 || no2==0)
    {
        printf("Islem yapilamaz");
    }
    else
    {
        switch(op)
        {
        case '+':
            {
                printf("1/%d %c 1/%d = ",no1,op,no2);
                printf("%d/%d",no1+no2,no1*no2);
            }
            break;
        case '-':
            {
                printf("1/%d %c 1/%d = ",no1,op,no2);
                printf("%d/%d",no1-no2,no1*no2);
            }
            break;
        default:
            {
                printf("Gecersiz operator girdiniz");
            }
        }
    }
}
*/



/*
//Girilen harf alfabede kacinci sirada
int main()
{
    char ch;
    int i;
    printf("Bir harf giriniz:");
    scanf("%c",&ch);
    if(91>ch)
    {
        for(i='A';i<=ch;i++)
        {

        }
        printf("%c: %d.harftir",ch,i-65);
    }
    else
    {
        for(i='a';i<=ch;i++)
        {

        }
        printf("%c: %d.harftir",ch,i-97);
    }


}
*/
