#include<stdio.h>


void move(int a[],int num)
{
	int left = 0;
	int right = num-1;
	while(left<right)
	{
	
		while((left<right)&&(a[left]%2==1))
		{
			left++;
		}
		while((left<right)&&(a[right]%2==0))
		{
			right--;
		}
		if(left<right)
		{
			int t = a[left];
			a[left] = a[right];
			a[right] = t;
		}
	}
}
int main()
{
	int a[10]={0};
	int num = sizeof(a)/sizeof(a[0]);
	for(int i;i<num;i++)
	{
		scanf("%d",a+i);
	}
	
	move(a,num);
	
	for(int i;i<num;i++)
	{
		printf("%d ",a[i]);
	}

}
