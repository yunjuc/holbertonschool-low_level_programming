#include <stdio.h>

int main(void)
{
   int a[5];
   int *p;
   int *p2;

   *a = 98;
   *(a + 1) = 198;
   *(a + 2) = 298;
   a[3] = 398;
   *(a + 4) = 498;
   p = a + 1;
   printf("%p\n", p);
   printf("%d\n", *p);
   *p = 98;  
   p2 = a + 3;
   printf("%d\n", *p2);
   *p2 = *p + 1337;
   printf("%d\n", *p2);

   char s[5] = "holb";
   s + 'e';
   printf("%s\n", s);   

   return (0);
}
