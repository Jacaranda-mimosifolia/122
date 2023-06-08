#include<stdio.h>
int main()
{
	char data[10];
	for(int i=0;i<10;i++)
	{
		data[i]=getchar();
	}
	int a;
	int day=(data[8]-48)*10+(data[9]-48);
	int month=(data[5]-48)*10+(data[6]-48);
	int year=(data[0]-48)*1000+(data[1]-48)*100+(data[2]-48)*10+(data[3]-48);
	if(year%4==0)
	{
		a=29;
	}
	else
	{
		a=28;
	}
	int days[12]={31,a,31,30,31,30,31,31,30,31,30,31};
	int x=0;
	for(int i=0;i<month-1;i++)
	{
		x+=days[i]; 
	}
	x+=day;
	printf("%d",x);
	return 0;
}
