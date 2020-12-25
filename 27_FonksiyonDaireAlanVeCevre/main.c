#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

void hesapla(float yaricap)
{
    float alan,cevre;
    alan=PI*yaricap*yaricap;
    cevre=2*PI*yaricap;
    printf("Dairenin alani = %.4f\n",alan);
    printf("Dairenin cevresi = %.2f",cevre);
}

int main()
{
    float yaricap;
    printf("Lutfen yaricap degerini giriniz:\n>>> ");
    scanf("%f",&yaricap);
    hesapla(yaricap);
    return 0;
}
