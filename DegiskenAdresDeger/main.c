#include <stdio.h>
#include <stdlib.h>

void kare(int *firat,int *karaca)
{
    *karaca=*firat**firat;
}

int main()
{
    int x,sonucum;
    printf("Karesi alinacak sayiyi giriniz:\n>>>");
    scanf("%d",&x);

    kare(&x,&sonucum);
    printf("Girdiginiz sayinin karesi=%d\n",sonucum);
}


//adres ile g�ndermi� olsayd�m bu adresin g�ndermi� oldu�u de�er ile yolluyacakt�m
