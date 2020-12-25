#include <stdio.h>
#include <stdlib.h>

typedef struct{
float x_ekseni;
float y_ekseni;
}nokta;

int main()
{
    nokta can;
    can.x_ekseni=12.34;
    can.y_ekseni=56.78;

    printf("X ekseni : %.2f\nY ekseni : %.2f ",can.x_ekseni,can.y_ekseni);
    return 0;
}
