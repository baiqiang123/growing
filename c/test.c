#include<stdio.h>


//习题一 铺地毯
// struct Tan{
// 	int a;
// 	int b;
// 	int g;
// 	int k;
// 	int c;
// 	int d;
// };  
// int IN_tan(struct Tan* tan,int x,int y)
// {
// 	int t=0;
// 	if(x<=tan->c&&x>=tan->a)
// 		t++;
// 	if(y<=tan->d&&y>=tan->b)
// 		t++;
// 	if(t==2)
// 		return 1;
// 	else
// 		return 0;
	
// }
// int main()
// {
// 	int n;
// 	scanf("%d",&n);
// 	struct Tan tan[10000];
// 	for(int i=0;i<n;i++)
// 	{
// 		scanf("%d %d %d %d",&tan[i].a,&tan[i].b,&tan[i].g,&tan[i].k);
// 		tan[i].c = tan[i].a+tan[i].g;
// 		tan[i].d = tan[i].b+tan[i].k;
// 	}
// 	int x,y;
// 	scanf("%d %d",&x,&y);
// 	int t=0;
// 	for(int i = n-1;i>=0;i--){
// 		if(IN_tan(&tan[i],x,y))
// 		{
// 			printf("%d\n",i+1);
// 			t=1;
// 			break;
// 		}
// 	}
// 	if(t==0)
// 		printf("-1");
		
// }

//二 判断大小端字节序
// int main()
// {
// 	int a =1;
// 	if(*(char*)&a)
// 		printf("小端");
// 	else
// 		printf("大端");

// }

//三 