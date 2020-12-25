#include <stdio.h>
#include <stdlib.h>

union hesapla{
int cevre;
int alan;
};


int main()
{
    union hesapla bul;

    int yaricap;
    printf("Lutfen yaricapi giriniz : ");
    scanf("%d",&yaricap);

    bul.cevre=2*3*yaricap;
    printf("Cevresi : %d\n",bul.cevre);

    bul.alan=3*yaricap*yaricap;
    printf("Alani : %d\n",bul.alan);

    return 0;
}
