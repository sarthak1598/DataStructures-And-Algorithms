// c++ program to count the pairs in an sngle dim array matching the given condition and displaying the count of the possible combinations\

#include<iostream>
using namespace std; 

int main()
{ 
    
    int t=0 ;
    cin>>t;
      int counter=0; 
      
         while(t--)
               {
                  counter =0 ;
                  int n ; 
                  cin>>n;
                  int arr[n];
                  
                 for(int i=0;i<=n-1;i++)
                    {
                         cin>>arr[i];
                    }
                 
                 for(int i=0 ; i<=n-1;i++)
                     {
                           for(int j=i;j<=n-1;j++)
                               {  
                                     if(i*arr[i] > j*arr[j])  
                                        {
                                            counter++;
                                        }
                                       
                               }
                            
                     }
                     
         cout<<counter;              
                 
             }
             
      return 0 ;
      
 }
             
