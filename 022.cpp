#include<stdio.h>
int x,y,z;
int main()
{
	scanf("%d%d",&x,&y);
	z=x+y;
	printf("%d,%d,%d\n",x,y,z);
	for(x;x<z;x++)//ע�⣺��Ŀ�еľ���n�죬��Ҫ���ϳ�����һ�죻 
	{
		if((x+1)%7==0 || x%7==0) y--;// ��7Ϊһ����������������ʾΪ (x+1)%7==0�� 
	}
	printf("y=%d\n",y);
	printf("%d\n",y*250);
	return 0;
}
