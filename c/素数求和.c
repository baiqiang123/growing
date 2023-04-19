#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double a[n];
	double max=0,min=0,sum=0;
	int t=0;
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
		if(a[i]>max)
		{
			max = a[i];
			t=i; 
		}
	}
	min = a[0];
	int f = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min = a[i];
			f = i;
		}
	}
	double cha;
	for(int i=0;i<n;i++)
	{
		a[t]=0;
		a[f]=0;
		sum += a[i];
	}
	double aver = sum*1.0/(n-2);
	double abs[n-2];
	int j=0;
	for(int i=0;i<n;i++)	
	{
		if(i!=t&&i!=f){
		if((a[i]-aver)<0)
			abs[j] = -(a[i]-aver);
	 else
			abs[j] = a[i]-aver;
        j++;
		}
	}
	double Max=abs[0];

	for(int i=1;i<n-2;i++){
		if(abs[i]>Max)
			Max=abs[i];
		}		
    printf("%.2f %.2f",aver,Max);

}
 
 
