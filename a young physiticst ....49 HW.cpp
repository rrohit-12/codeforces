#include<iostream>
using namespace std;
int main()
{
     int n; cin>>n;
     int a[n],b[n],c[n];
     for(int i=0;i<n;i++)
     {
          cin>>a[i]>>b[i]>>c[i];
     }
     int sum=0,sum1=0,sum2=0;
     for(int i=0;i<n;i++)
     {
         sum=sum+a[i];
         
         sum1=sum1+b[i];
         
         sum2=sum2+c[i];
         
     }
     if(  (sum==0) &&  (sum1==0) && (sum2==0) )
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
     
}
