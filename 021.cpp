#include<stdio.h>
int a,b[10],c,l,count=0;
int main()
{
	scanf("%d",&a);
	for(int i=0;i<10;i++)
	{
		scanf("%d",b+i);
		if(getchar()=='\n') 
		{
			l=i;
			break;
		}
	}
	scanf("%d",&c);
	for(int i=0;i<=l;i++)
	{
		if(b[i]==c) count++;
	}
	printf("%d",count);
	return 0;
}
