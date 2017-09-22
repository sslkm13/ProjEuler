#include<iostream>
#include<time.h>
using namespace std;
int main()
{
                long a=1,b=2,c=0,sum=0;
                while(1)
                {
                                c=a+b;
                                if(c>4000000)
                                                break;

                                cout<<c<<endl;
                                if(c%2==0)
                                                sum+=c;
                                a=b;
                                b=c;
                }
                cout<<"Sum:"<<sum+2;
                cout<<"\nEXEC:"<<clock()/(float)CLK_TCK;
return 0;
}
