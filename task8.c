#include<stdio.h>
main()
{
	int num,i;
	printf("ENTER NUMBER:\t");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}

}
