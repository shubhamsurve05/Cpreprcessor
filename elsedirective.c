#include<stdio.h>
#define FLAG 8
int main(void)
{
  int a=20,b=4;
  #if FLAG>=3
           printf("Values of FLAG is grater then or equal to 3\n");
	   a=a+b;
           b=a+b;
  #else
           printf("Values of FLAG is less then 3\n");
           a=a-b;                                                                                                                                                                  b=a/b;	   
  #endif
  printf("a=%d","b=%d",a,b);
  printf("program completed\n");
  return 0;  

}


