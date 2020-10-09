#include<function.h>

int main()
{
	
double principle,rate,time,simple_intrest;

printf("enter principle");
printf("\n");

scanf("%lf",&principle);

printf("enter rate of intrest");
printf("\n");

scanf("%lf",&rate);

printf("enter time in months");
printf("\n");

scanf("%lf",&time);

//principle value greater than zero

if(principle<=0)
{
	printf("enter enter the value greater than zero");
	
	exit(0);
}

//rate value greater than zero

if(rate<=0)
{
	printf("enter enter the value greater than zero");
	
	exit(0);
}

//time value greater than zero

if(time<=0)
{
	printf("enter enter the value greater than zero");
	
	exit(0);
}

printf("enter 1 for simple intrest");

printf("\n");

printf("enter 2 for compound intrest");

printf("\n");

int enter;

scanf("%d",&enter);

if(enter==1)
{
	
	double SI=FindSimple(principle,rate,time);
	
	printf("%lf",SI);
	
}

if(enter==2)
{

double CI=FindCompound(principle,rate,time);
	
	printf("%lf",CI);
}

if(enter>2)
{
	printf("please choose the correct value try again");
	
	exit(0);
	
}
return 0;
}
