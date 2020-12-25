#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[150];
    int i=0;
    int kucukharf[26]={0};
    int encok=0;
    char harf;

    printf("Lutfen bir cumle giriniz:\n");
    gets(cumle);

    while(cumle[i])
    {
        if(cumle[i]>='a' && cumle[i]<='z')
        {
            kucukharf[cumle[i]-'a']++;
        }
        i++;
    }
    encok=kucukharf[0];

    for(i=1;i<26;i++)
    {
        if(kucukharf[i]!=0)
        {
            if(kucukharf[i]>encok)
            {
                encok=kucukharf[i];
                harf=i+'a';
            }
        }
    }
    if(harf==0)
    {
        printf("En cok kullanilan harf = a");
    }
    else
    {
        printf("Cumlede en cok tekrar edilen harf = %c",harf);
    }

}
