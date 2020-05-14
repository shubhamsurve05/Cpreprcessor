#include<stdio.h>
int main(void)
{
    printf("Cin depth\n");
    printf("%d %s\n",__LINE__,__FILE__);
    #line 25 "myprog.c"
    printf("%d %s\n",__LINE__,__FILE__);
    return 0;    
}
