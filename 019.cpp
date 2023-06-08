#include<stdio.h>
#define len 100
int array[len],count=0,l=0;
char q;
int main()
{
	getchar();
	for(int i=0;i<10;i++)
	{
		scanf("%d",array+i);
		if(getchar()==']')
		{
			l=i+1;
			break;
		}
	}
	int max=array[0],min=array[0];
	for(int i=0;i<l;i++)
	{
		max=(max>array[i])?max:array[i];
		min=(min<array[i])?min:array[i];
	}
	for(int i=0;i<l;i++)
	{
		if((array[i]==max) || (array[i]==min)) count++;
	}
	printf("%d",l-count);
	return 0;
}
