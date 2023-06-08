#include<stdio.h>
int main()
{
	int a,b,sum;
	scanf("%d",&a);
	sum=a;
	do
	{
		b=a/3;
		sum+=b;
		a=a%3+b;
	}while(b!=0);
	printf("%d",sum);
	return 0; 
}
