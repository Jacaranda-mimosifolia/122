#include<stdio.h>
int x,count=0;
int a[100];
int main()
{
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		scanf("%d",a+i);
	}
	for(int i=0;i<x;i++)
	{
		for(int j=i+1;j<x;j++)
		{
			if(a[i]>a[j]) count++;
		}
	}
	printf("%d\n",count);
    return 0;
}

