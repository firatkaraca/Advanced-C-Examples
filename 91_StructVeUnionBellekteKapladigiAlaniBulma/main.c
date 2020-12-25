#include <stdio.h>
#include <stdlib.h>

/*Asagida verilen struct ve union un bellekte ne kadar yer kapladigini bulan programi yaziniz*/

struct kontrol1{
int x;
char y;
long z;
};

union kontrol2{
int a;
char b;
long c;
};

int main()
{
    printf("Structimiz bellekte %d byte yer tutar\n",sizeof(struct kontrol1));
    printf("\nUnionimiz bellekte %d byte yer tutar\n",sizeof(union kontrol2));


    return 0;
}
