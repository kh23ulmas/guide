#include <stdio.h>
double func(double a, double b)
{
	double s;
	s=a/((a+b)*(a+b));
	return s;	
}
void main()
{
	double a, b;
	printf("Task: a/((a+b)^2)\n");
	printf("Type a: ");
	scanf("%lf", &a);
	printf("Type b: ");
	scanf("%lf", &b);
	if(a+b==0) 	//proverka na null
		{
			printf("a+b can't be null\n");
			main();
		}
	else
		printf("Answer: %f\n", func(a, b));

}
