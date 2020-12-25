#include <stdio.h>
#include <stdlib.h>
#define TAM 150

int main()
{
    int no,boy,fark,minno,minboy;

    printf("Ogrenci no:");
    scanf("%d",&no);
    printf("Ogrenci boy:");
    scanf("%d",&boy);
    printf("_______________\n\n");

    minno=no;
    minboy=boy;
    fark=abs(boy-TAM);

    while(no>0)
    {
        printf("Ogrenci no:");
        scanf("%d",&no);
        printf("Ogrenci boy:");
        scanf("%d",&boy);
        printf("_______________\n\n");
        if(abs(boy-TAM)<fark)
        {
            fark=abs(boy-TAM);
            minno=no;
            minboy=boy;
        }
    }
    printf("______________________________________________________\n\n");
    printf("%d numarali ogrenci %d cm boyuyla %d cm ye en yakindir\n",minno,minboy,TAM);
    printf("______________________________________________________\n");
}
