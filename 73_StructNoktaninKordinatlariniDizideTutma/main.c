#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char isim[10];
    int x_ekseni;
    int y_ekseni;
}nokta;


void ekranayazdir(nokta p[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s = ( %d , %d )\n",p[i].isim,p[i].x_ekseni,p[i].y_ekseni);
    }
}

int main()
{
    nokta can[5]={{"Canan",1,2},{"Hakan",3,4},{"Osman",5,6},{"Deniz",7,8},{"Merve",9,0}};

    ekranayazdir(can,5);
}
