#include<stdio.h>
int x,y,z;
int main()
{
	scanf("%d%d",&x,&y);
	z=x+y;
	printf("%d,%d,%d\n",x,y,z);
	for(x;x<z;x++)//注意：题目中的经过n天，是要算上出发那一天； 
	{
		if((x+1)%7==0 || x%7==0) y--;// 以7为一个周期所以周六表示为 (x+1)%7==0； 
	}
	printf("y=%d\n",y);
	printf("%d\n",y*250);
	return 0;
}
