#include<stdio.h> 
int x,y;
int main()
{
	scanf("%d%d",&x,&y);
	int count=x;
	while(x>y)
	{
		count+=(x/y);
		x=x/y+x%y;
	}
	printf("%d",count);
    return 0;  
}
