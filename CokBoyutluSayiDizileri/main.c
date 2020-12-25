#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
    int mat[10][10];
    int i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i==j)
            {
                mat[i][j]=1;
            }
            else
            {
                mat[i][j]=0;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%4d",mat[i][j]);
        }
        printf("\n");
    }
}
*/

int main()
{
    int dizi1[4][5]={{9,8,7,6,5},{4,7,8,9,4},{1,6,3,2,4},{7,1,5,1,2}};
    int dizi2[4][5]={{7,6,4,6,6},{5,4,7,3,7},{4,5,8,7,9},{4,7,9,2,4}};
    int toplam[4][5];
    int i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            toplam[i][j]=dizi1[i][j]+dizi2[i][j];
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%4d",toplam[i][j]);
        }
        printf("\n");
    }
}
