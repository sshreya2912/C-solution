#include<iostream>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
int main()
{
    //assuming the pattern has to be printed in continuation as given in the question
   int n=7;
   int x;
    for(ll i=1;i<=2*n-1;i++)
    {
       
      x=(i>n?(n-(i%n)):i);
     
        for(ll j=x;j<=n;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
       
    }

}
