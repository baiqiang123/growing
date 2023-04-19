#include<stdio.h>
int main(void)
{
	int a[1001];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int* start = a;
	int* end = a+n-1;
	while(start!= a+n-1)
	{
		while(start != end)
		{
			if(*start == *end)
				*end = 0;
			end--;
		} 
		start++;
	}
	for(int i=0;i<n;i++)
	{
		if(a[i] != 0)
			printf("%d ",a[i]);
	}
}
