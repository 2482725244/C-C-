#include<stdio.h>
main()
{
	int a;
	printf("请输入一个整数\n"); 
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("星期1\n");
			break;
		case 2:
			printf("星期2\n");
			break;
		case 3:
			printf("星期3\n");
			break;
		case 4:
			printf("星期4\n");
			break;
		case 5:
			printf("星期5\n");
			break;
		case 6:
			printf("星期6\n");
			break;
		case 7:
			printf("星期日\n");
			break;
		default:
			printf("输入错误");
	 } 
 } 
