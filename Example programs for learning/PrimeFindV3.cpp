#include <iostream>
#include <math.h>

int primefind(long long number)
{
	long double temp,temp2;
	//values used in calculating primes. long double to handle large values
	long long c=2, primestop=(number/2)+1;
	//values used in displaying primes.
	int test=1;
	//test value used to show if tested value is a prime
	while(c<primestop && test==1)
	{
		temp=(float)number/(float)c;
		//divides tested value by the count
		temp2=trunc(temp);
		//truncates that value
		
		//checks to see if the rounded value and the tested value are the same. If they are, then the tested number is divisible by the count value, if not the tested value is not divisible by the count value.
		if(temp2!=temp)
		{
		test=0;
		}
		else
		{
			test=1;
		}
		//checks to see if the tested value has been disproven to be prime. Stops the loop if the tested value has been disproven.
		if(c!=2)
		{
			c=c+2;
		}
		else
		{
			c=3;
		}
		
	}

	return test;
		
}



using namespace std;
int main()
{
	long long start, stop, check=1;
	//values used in counting up to primes.
	int output;
	//values used in transmitting state.
	
	
	cout << "Enter a start number greater to or equal to 1.\n";
	cin >>start;
	cout << "Enter an end value.\n";
	cin>> stop;
	//gets stop and start values
	if(start>=1)
	{
		double long b=start/2;
		double long c=round(b);
		if(c==b)
		{
			start=start+1;
			check=start;
		}
		else
		{
			check=start;
		}
	}
	else
	{
		cout<< "The start value is not grater than 1!";
		return 0;
	}
	
	while(stop>check)//while stop is greater than check...
	{
		
		output=primefind(check);
		if(output==0)
		{
			cout<< "";
	
		
		}
		else if(output==1)
		{
			cout<< check<< " ";
			
		}
		else
		{
			cout<< " !ERROR! ";
		}
		check=check+2;
	}
	return 0;
	
}