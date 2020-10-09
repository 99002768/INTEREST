#include<function.h>

double FindSimple(double principle,double rate,double time)
{
	
	double si=principle*rate*time;
	
	si=si/100;
	
	return si;
}

double FindCompound(double P, double R, double T) 
{
   double CI= P*(pow(1+(R/100), T));
   
   return CI;
}
