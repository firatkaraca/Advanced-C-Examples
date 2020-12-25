#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch;
   int sira;
   printf("Bir harf giriniz:");
   scanf("%c",&ch);
   if(ch>='A' && ch<='Z')
   {
       sira=(int)ch-(int)'A'+1;
       printf("%c : %d.harftir",ch,sira);
   }
   else if(ch>='a' && ch<='z')
   {
       sira=(int)ch-(int)'a'+1;
       printf("%c : %d.harftir",ch,sira);
   }
   else
   {
       printf("Girilen deger bir harf degil");
   }
}
