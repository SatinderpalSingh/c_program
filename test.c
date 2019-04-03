#include<stdio.h>
void swap(int ,int);
	void main()
{
	int a=3;
	int b=5;
	printf("a=%d,b=%d before swap\n",a,b);
	swap(a,b);
	printf("a=%d,b=%d after swap\n",a,b);
	return 0;
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
