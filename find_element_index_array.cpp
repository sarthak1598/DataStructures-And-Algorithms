
// c++ program to find the 
#include<iostream>
using namespace std;

int main()
   { 
       int t;
       cin>>t;
      while(t--)
           {
               int n,j;
               cin>>n;
               int d;
               cin>>d;
               
               int final=0;
               int a[n];
               
               for(int i=0;i<=n-1;i++)
                 {
                     cin>>a[i];
                     
                 }
                 
                 for(j=0;j<=n-1;j++)
                    {
                        final=0;
                        if(a[j]==d)
                          {
                               final=j;
                               break;
                         //      cout<<final;
                          }
                         
                    }               
                    
                if(final==d)
                  {
                       cout<<final;
                  }
                  else
                   {
                       cout<<"-1";
                   }
            }
           
      return 0;
         
   }
