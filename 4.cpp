#include<iostream>
#include<math.h>
#include<time.h>
using namespace std;

int palindrome(long);

int main()
{
                int i,j,x,y;
                long max=0;
               
                for(i=100;i<=999;i++)
                                for(j=100;j<=999;j++)
                                {
                                                if(palindrome(i*j))
                                                                if((i*j)>max)
                                                                {
                                                                                max=i*j;
                                                                                x=i;
                                                                                y=j;
                                                                }
                                }
               

                cout<<(x,y,(max));
                cout<<"\nEXEC:"<<clock()/(float)CLK_TCK;
                return 0;

}

int palindrome(long n)
{
                long rev=0,num;
                num=n;
                while(n)
                {
                                rev=(rev*10)+(n%10);
                                n/=10;
                }

                if(rev==num)
                                return 1;
                return 0;
}
