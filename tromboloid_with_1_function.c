//Write a program to find the volume of a tromboloid using one function

#include <stdio.h>

int main()
{
	
	float h,d,b,volume;
	printf("enter h : ");
	scanf("%f",&h);
	printf("enter d : ");
	scanf("%f",&d);
	printf("enter b : ");
	scanf("%f",&b);
   
	volume=((h*d*b)+(d/b))/3;
	printf("VOC: %f\n",volume);
	return 0;
}
