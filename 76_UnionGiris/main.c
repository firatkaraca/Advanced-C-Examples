#include <stdio.h>
#include <stdlib.h>

union test
{
    int x,y;
};

int main()
{
    union test t;
    t.x=2;
    printf("X : %d\n",t.x);

    t.y=10;
    printf("Y : %d\n",t.y);

    printf("Unionumuz bellekte %d byte yer tutar\n\n",sizeof(t));
    return 0;
}
