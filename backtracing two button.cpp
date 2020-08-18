#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
     if(a>=b)
     {
          cout<<a-b<<endl;
     }
     else
     {
          int c=0;
          while(b>a)
          {
               
               if(b%2==0)
                 {  
                    b/=2;
                    c++;
                 }
               else
               {
                     b+=1;
                     c++;
               }
          }
          cout<<c+(a-b)<<endl;
     }
}
