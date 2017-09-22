#include<iostream>
#include<time.h>
#include<math.h>
#include<iomanip>
using namespace std;

int prime(long);
int main()
{
	            long i;
                double sum=0;
                for (i = 2; i < 2000000; i++)
                {
                                if(prime(i))
                                                sum+=i;
                }
                cout<<setprecision(15)<<sum;
				cout<<"\nEXEC:"<<clock()/(float)CLK_TCK;
				return 0;
}

int prime(long n)
{
	long i;
	for(i=2;i<=sqrt(n);i++)
			   if(n%i==0)
			            return 0;
	return 1;
}
