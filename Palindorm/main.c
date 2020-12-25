#include <stdio.h>
#include <stdlib.h>
#define MAX 40

void cumleyi_oku(char cumle[MAX])
{
    int i=0;
    scanf("%c",&cumle[i]);
    while((cumle[i]!='\n')&&i<MAX)
    {
        i++;
        scanf("%c",&cumle[i]);
    }
    cumle[i]='\0';
}


void boslugu_kaldir(char bosluk[MAX])
{
    int i,j=0;
    for(i=0;bosluk[i]!='\0';i++)
    {
        if(bosluk[i]!=' ')
        {
            bosluk[j]=bosluk[i];
            j++;
        }
    }
    bosluk[j]='\0';

    printf("\n\nBoslugu kaldirdiktan sonra dizimiz:\n>>> ");

    for(j=0;bosluk[j]!='\0';j++)
    {
        printf("%c",bosluk[j]);
    }
}


int dizinin_boyu(char cumle[MAX])
{
    int i;
    for(i=0;cumle[i]!='\0';i++);
    return i;
}

void tersine_cevir(char cumle[MAX],char ters[MAX])
{
    int i;
    int j=dizinin_boyu(cumle)-1;
    for(i=0;cumle[i]!='\0';i++)
    {
        ters[i]=cumle[j];
        j--;
    }
    ters[i]='\0';

    printf("\n\nDizinin tersine cevrilmis hali:\n>>> ");
    for(i=0;i<dizinin_boyu(ters);i++)
    {
        printf("%c",ters[i]);
    }
}

int palindrome(char cumle[MAX])
{
    int i;
    int L;


    boslugu_kaldir(cumle);
    L=dizinin_boyu(cumle);

    printf("\n\nDizimizin boyu:\n>>> %d",L);

    char ters[MAX];
    tersine_cevir(cumle,ters);

    for(i=0;i<L;i++)
    {
        if(ters[i]!=cumle[i])
            return 0;
        else
            return 1;
    }


}

int main()
{
    char cumle[MAX];

    printf("Lutfen bir cumle veya kelime girin:\n>>> ");
    cumleyi_oku(cumle);

    int a;
    a=palindrome(cumle);

    if(a==0)
        printf("\n\n>>> Bu bir palendrom degildir\n\n");
    if(a==1)
        printf("\n\n>>> Bu bir palendromdur\n\n");

    return 0;
}
