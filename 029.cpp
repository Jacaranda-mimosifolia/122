#include<stdio.h>
int fun(int n);
int main()
{
	int n;
	scanf("%d",&n);
	fun(n);
	return 0;
}
int fun(int n)
{
	float a=2,b=1,c=0,sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a/b;
		c=a;
		a+=b;
		b=c;
	}
	printf("%f",sum);
}
