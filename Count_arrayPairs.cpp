// c++ code to count the total pairs in an array of integers satisfying the given condition in the if block of the code 
// running for various test cases inputted by the user 


#include<iostream>
using namespace std ;

int main() 
   {
       int t ; 
       cin>>t;
       int counter=0;
       while(t--)
           {
                 int n ; 
                  cin>>n ; 
                  int a[n];
                   counter=0; 
                  
                     for(int m=0 ; m<=n-1;m++)
                           {
                               cin>>a[m]; 
                            }
                            
                        
                        for(int i=0 ;i<=n-1;i++)
                            {
                                 for(int j=i ; j<=n-1 ; j++)
                                       {
                                             if(i*a[i] > j*a[j])
                                                   {
                                                       counter++;                   
                                                    }
                                          
                                        }
                         }
            
                 cout<<counter<<endl;
                 
           }
           
        return 0 ;
           
   }
