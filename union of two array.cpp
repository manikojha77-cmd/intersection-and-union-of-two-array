#include<stdio.h>
int main()
{
	int n,m,i,j,u,f;
	printf("Enter the first set size(number element  you want to enter):\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter first set:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Enter the second set size(number element  you want to enter) and shorter from first set:\n");
	scanf("%d",&m);
	int b[m];
	printf("Enter second set:\n");
	for(i=0;i<m;i++)
	{
	scanf("%d",&b[i]);
	}
	printf("Union of two array:");
	for(i=0;i<n;i++)
    	{
		printf("%d,",a[i]);
		}
		for(i=0;i<m;i++)
	{ f=0;
		for(j=0;j<n;j++)
		{
			if(b[i]==a[j])
			{   
			f=1;
			}
		}
		if(f==0)
		printf("%d,",b[i]);
	}
	return 0;
}
