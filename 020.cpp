#include<stdio.h>
int x;
int main()
{
	scanf("%d",&x);
	for(int i=10000-x;i<=10000;i++)
	{
		if(x==1) {printf("%d",10000);break;}
		else if(x==10000) {printf("%d",10000);break;}
		else if(i%x==0) {printf("%d",i);break;}
	}
	return 0;
}

