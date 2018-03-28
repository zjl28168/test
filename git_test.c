#include <stdio.h>
# include<stdlib.h>
void main()
{
    int i,j,k;
	k = 0;
    printf("Please input\na= ");
    scanf_s("%d",&i);
	//getchar();
	printf("b= ");
	scanf_s("%d",&j);
	//printf("\n");
    for(i=i;i<j;i++)
		{
		printf("%d+",i);
		k = k + i;
		if ((i % 10) == 0)
			{
			printf("\n");
			}
		} 
    k = k + j;    
    printf("%d=%d\n",j,k);    
    //printf("%d+...%d=%d\n",i,j,k);
	system("pause");
}