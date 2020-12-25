#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    do
    {
        printf("Lutfen pozitif bir sayi giriniz: ");
        scanf("%f",&x);
        if(x<0)
        {
            printf("Pozitif sayi giriniz\n\n");
        }
        if(x<0)continue;
        printf("Sayimizin karekoku = %f\n\n",sqrt(x));
    }
    while(x);
}
