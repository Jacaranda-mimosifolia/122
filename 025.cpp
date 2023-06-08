#include<stdio.h>
int l;
char a[100];
int main()
{
	for(int i=0;i<100;i++)
	{
		a[i]=getchar();
		if(a[i]=='\n')
		{
			l=i;
			break;
		}
	}
	printf("%d\n",l);
	for(int i=0;i<l;i++)
	{
		printf("%c\n",a[i]);
	}
	for(int i=0;i<l;i++)
	{
		if(a[i])
	}
	return 0;
}
