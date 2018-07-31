#include<stdio.h>
int main()
{
int n,m,i,j;
scanf("%d %d",&n,&m);
for(i=n+1;i<m;i++)
{
	int count=0;
	for(j=2;j<i;j++)
	{
	if(i%j==0)
	count++;
	}
	if(count==0)
	printf("\n%d\n",i);
}
return 0;
}



