#include <stdio.h>
#include <stdlib.h>

void bolunebilirlik(int *n)
{
    if(*n%2==0)
        printf("Sayimiz cift sayidir\n");
    else
        printf("Sayimiz tek sayidir\n");
    if(*n%3==0)
        printf("Sayi 3 ile tam bolunur\n");
    if((*n%2==0)&&(*n%3==0))
        printf("Sayi 6 ile tam bolunur\n");
}

int main()
{
    int sayi;
    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&sayi);
    bolunebilirlik(&sayi);
    return 0;
}
