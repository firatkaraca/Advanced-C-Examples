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


//adres ile göndermiþ olsaydým bu adresin göndermiþ olduðu deðer ile yolluyacaktým
