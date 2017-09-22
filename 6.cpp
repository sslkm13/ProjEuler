#include<iostream>
#include<time.h>
using namespace std;
int main()
{
                long n=100,a=0,b=0;
                int i;
               
                for(i=1;i<=n;i++)
                                a=a+i;
                a=a*a;

                for(i=1;i<=n;i++)
                                b=b+(i*i);

                cout<<"Answer = "<<(a-b);
                cout<<"\nEXEC:"<<clock()/(float)CLK_TCK;
				return 0;
}
