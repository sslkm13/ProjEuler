#include<iostream>
#include<time.h>
using namespace std;
int main()
{
long sum=0;
for(int i=0;i<1000;i++)
{
               if(i%3==0||i%5==0)
               {
                 sum+=i;
                 cout<<i<<"\t";
               }
}
cout<<"\n"<<sum;
cout<<"\nExec:"<<clock()/(float)CLK_TCK;
return 0;
}
