#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
      int a[10];
      int b[10]={0};
      for(int i=1;i<7;i++)
      {
           cin>>a[i];
           b[a[i]]++;
      }
      for(int i=1;i<10;i++)
      {
           sort(b,b+10);
           if(b[9]>=4)
           {
              b[9]=b[9]-4;
             if(b[9]==0 || b[9]==1)
           {
                           sort(b,b+10);
                            if(b[8]==b[9])
                            {
                                cout<<"Bear";
                                break;
                            }
                           else 
                           {
                                cout<<"Elephant";
                                break;
                           }
                         
                    
           }
           else if(b[9]==2)
               {
                     cout<<"Elephant";
                     break;

                }
           }
           else
           {
                cout<<"Alien";
               break;
     
           }
      }

}


