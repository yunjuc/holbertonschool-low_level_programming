#include <stdio.h>
#include <string.h>

int main()
{
   const char haystack[20] = "TutorialsPoint Point";
   const char needle[10] = "oi";
   char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   return(0);
}
