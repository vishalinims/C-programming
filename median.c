#include <stdio.h>

int main(void) 
{

	int n,i,temp,j;

	scanf("%d",&n);

	int a[n];
	int m;
	m=n/2;

	for(i=0;i<n;i++)

	{

		scanf("%d",&a[i]);

	}

	for(i=0;i<n;i++)

	{

		for(j=i+1;j<n;j++)

		{

			if(a[j]<a[i])

			{

				temp=a[i];

				a[i]=a[j];

				a[j]=temp;

			}

		}
	
	}
printf("%d",a[m]);
	
	return 0;

}
