#include<stdio.h>
#include<string.h>
struct Student
{
	char name[30];
	int terma_grade;
	int class_grade;
	char ganbu;
	char west;
	int thesis_num;
}st[1000];

int main()
{
	int n,i;
	int max = 0;
	int total=0;
	char best[30];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int sum = 0;
		scanf("%s %d %d %c %c %d",st[i].name,&st[i].terma_grade,&st[i].class_grade,&st[i].ganbu,&st[i].west,&st[i].thesis_num);
		if(st[i].terma_grade>80 && st[i].thesis_num>=1)
			sum += 8000;
		if(st[i].terma_grade>85 && st[i].class_grade>80)
			sum += 4000;
		if(st[i].terma_grade>90)
			sum += 2000;
		if(st[i].terma_grade>85 && st[i].west=='Y')
			sum += 1000;
		if(st[i].terma_grade>80 &&st[i].ganbu=='Y')
			sum += 850;
		total += sum;
		
		if(sum>max)
		{
			max = sum;
			memcpy(best,st[i].name,strlen(st[i].name));
		}
	}
	printf("%s\n%d\n%d\n",best,max,total);
	
}
