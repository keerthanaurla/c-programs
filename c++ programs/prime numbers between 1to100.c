/*c programe to print prime numbers between 1to100 using for loop*/
#include<stdio.h>
int main()
{
	int i,number,count;
	printf("prime number from 1to100 are:\n");
	for(number=1;number<=100;number++)
	{
		count=0;
		for(i=2;i<=number/2;i++)
		{
			if (number% i==0)
			{
				count++;
				break;
			}
	}
	if (count==0&& number!=1)
	{
		printf("%d \n",number);
	}
}
return 0;
}
