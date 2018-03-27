#include <stdio.h>
void main()
{
    int i,j,k;
    i = 10;
    k = 0;
    j = 100;
    printf("Please input a=%d and b=%d\n");
    scanf("a=%d",&i);
    scanf("b=%d",&j);
    for(i=1;i<j;i++);
    {
    printf("%d+",i);
    k = k + i;
    } 
    k = k + j;    
    printf("%d=%d",j,k);    
    printf("%d+...%d=%d\n",i,j,k);
}