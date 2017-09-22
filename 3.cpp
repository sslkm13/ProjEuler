#include<iostream>
#include<math.h>
#include<time.h>
using namespace std;
int pf(long);
int main()
{
                long i;
                for(i=(long)sqrt(600851475143);i>=2;i--)
                {
                                if(pf(i)&&(600851475143%i==0))
                                {
                                                cout<<i;
                                                break;
                                }
                }
                cout<<"\nEXEC:"<<clock()/(float)CLK_TCK;
                return 0;
}

int pf(long n)
{
                long i;
                for(i=2;i<=(long)sqrt(n);i++)
                                if(n%i==0)
                                                return 0;
                return 1;

}
