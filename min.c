#include<stdio.h>

int main(void)

{

	int n,i,min;

	scanf("%d\n",&n);

	int a[n];

	for(i=0;i<n;i++)

	{

		scanf("\t%d",&a[i]);

	}

		min=a[0];

	for(i=1;i<n;i++)

	{

	if(min>a[i])

	{

		min=a[i];

	}

	}

	printf("%d",min);	
}
