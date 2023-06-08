#include<stdio.h>
//hello, this is my first acm contest! work hard for hdu acm.
//3 0 3 2 2 2 0 4 3 0 1 2 3 1 4 0 0 4 4 4 1 0 1 0 1 0
int main()
{
	static int s[26],ch;
	while((ch=getchar())!='\n' && ch!=EOF)
		if(ch>='a' && ch<='z')
			s[(int)ch-97]++;
	for(int i=0;i<26;i++) 
		printf("%d ",s[i]);
	return 0;
}
