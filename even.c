#include<stdio.h>
int main()
{
int n,m,i;
scanf("%d %d",&n,&m);
for(i=n+1;i<m;i++)
{
if(i%2==0)
printf("\n%d\n",i);
}
return 0;
}
