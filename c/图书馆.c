#include <stdio.h>
struct Data
{
	int year;
	int month;
	int day;
};

struct Book 
{
	char name[100];
	char zuozhe[50];
	struct Data data;
	float price;
};

void Input(struct Book *book)
{
   printf("name :");
   scanf("%s",book->name);
   printf("zuozhe :");
   scanf("%s",book->zuozhe);
   printf("data :");
   scanf("%d-%d-%d",&book->data.year,&book->data.month,&book->data.day);
   printf("price:");
   scanf("%f",&book->price);
   
}

void BookPrintf(struct Book *book)
{
	printf(" %s\n",book->name);

    printf(" %s\n",book->zuozhe);

    printf(" %d-%d-%d\n",book->data.year,book->data.month,book->data.day);

    printf(" %f\n",book->price);
}
int main()
{
	struct Book b1,b2;
	Input(&b1);
	Input(&b2);
    BookPrintf(&b1);
	BookPrintf(&b2);
}
