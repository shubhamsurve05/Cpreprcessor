#include<stdio.h>
#define FLAG
int main(void)
{
     int a=20,b=4;
     #ifdef FLAG
     printf("FlAG IS DEFINED\n");
     a++;
     b--;
   #endif
   printf("a=%d,b=%d\n",a,b);
   printf("program completed\n");
   return 0;   
}
