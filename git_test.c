#include<stdio.h>
#include<stdlib.h>
#define TRUE  1
#define FALSE 0
void main()
{
    int start_num,end_num,sum_num;
	int i;
	int Flag = FALSE;
    printf("Please input\nstart_num= ");
    scanf_s("%d",&start_num);
	printf("end_num  = ");
	scanf_s("%d",&end_num);
	sum_num = 0;
	if ((end_num - start_num) > 10)
		{
		Flag = TRUE;
		}
    for(i=start_num;i<end_num;i++)
		{		
		sum_num = sum_num + i;
		if (!Flag)
			{
			printf("%d+", i);				
			}		
		} 
	sum_num = sum_num + end_num;
	if (Flag)
		{
		printf("%d+%d+...+%d+%d=%d\n", start_num, start_num+1,end_num-1, end_num,sum_num);
		}
	else
		{
		printf("%d=%d\n", end_num, sum_num);
		}   
	system("pause");
}