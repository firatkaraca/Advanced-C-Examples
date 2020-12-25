#include <stdio.h>
#include <stdlib.h>

struct ogrenciTip{
int no;
char cevap[10];
};

struct sonucTip{
int no;
int not;
};

int main()
{
    struct ogrenciTip ogrenci[30];
    struct sonucTip sonuc[30];
    char anahtar[10],satir;
    int i,j;
    int dogru,yanlis;

    printf("Lutfen cevap anahtarini giriniz:\n");

    for(i=0;i<10;i++)
    {
        printf("%d.soru : ",i+1);
        scanf("%s",&anahtar[i]);
    }

    printf("________________________________\n\n");
    printf("Ogrenci bilgilerini giriniz:\n");

    for(j=0;j<30;j++)
    {
        printf("\n---------------");
        printf("\nOgrenci no:");
        scanf("%d",&ogrenci[j].no);
        printf("---------------\n");
        printf("Ogrenci cevabi:\n");

        dogru=yanlis=0;
        scanf("%c",&satir);

        for(i=0;i<10;i++)
        {
            printf("> ");
            scanf("%s",&ogrenci[j].cevap[i]);
            if(anahtar[i]==ogrenci[j].cevap[i])
            {
                dogru++;
            }
            else if(ogrenci[j].cevap[i]!= ' ')
            {
                yanlis++;
            }
        }

        sonuc[j].no=ogrenci[j].no;

        printf("\n\nDogru : %d Yanlis : %d\n",dogru,yanlis);
        sonuc[j].not=dogru-(yanlis/4);
    }

    for(j=0;j<30;j++)
    {
        printf("\n\nOgrenci no:%d   Notu:%d",sonuc[j].no,sonuc[j].not);
    }



    return 0;
}
