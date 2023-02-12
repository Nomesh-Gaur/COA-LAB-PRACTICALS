//n-combination

#include <iostream>

using namespace std;

int fact(int n)
{
    long f = 1;
    for(int a =1 ; a<=n; a++)
    {
       f = f*a;
    }
    return f;
   
}



int main()
{
    int n ,r,ans;
   cout<<"Enter the value of n " ;
   cin>>n;
   cout<<"Enter the value of r " ;
   cin>>r;
   
   ans = fact(n)/(fact(r)*fact(n-r));
   
   cout<<" Answer  -> "<<ans;
   

    return 0;
}
