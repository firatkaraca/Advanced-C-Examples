#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumlem[100];
    char *p1,*p2;
    int kontrol;

    printf("Lutfen en fazla 100  karakterli bir cümle giriniz:\n>>> ");
    gets(cumlem);

    for(p2=cumlem;*p2;p2++);
    p2--;

    kontrol=1;
    for(p1=cumlem;kontrol && p1<p2;p1++,p2--)
    {
        if(*p1!=*p2)
        {
            kontrol=0;
        }
    }

    if(kontrol)
    {
        printf("<< %s >> bir palendromdur",cumlem);
    }
    else
    {
        printf("<< %s >> palendrom degildir",cumlem);
    }
    return 0;
}
