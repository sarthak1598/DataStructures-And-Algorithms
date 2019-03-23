
// program in cpp to return the macimum element of the array wrt various test cases 



#include<iostream>
using namespace std; 

int main()
 {
      int t=0 ;
      int i=0 ;
      int count ; 
       
       cin>> t;
          while(t--)
             { 
                i=0;
                int n ;
                 cin>>n;
                 
                int ar[n];
                int max = ar[0];
                 for(i=0;i<=n;i++)
                       {
                            cin>>ar[i];
                            
                           
                        }
                     i=0;                  
                 for(i=0 ; i<=n;i++)
                       {
                              i=0 ; 
                              max=ar[0];
                              for(i=0 ; i<n;i++)
                                     {
                                        // count++;
                                         
                                         if(ar[i] > max)
                                             {
                                                  max=ar[i];
                                                  // count++;
                                             }
                                            
                                       }
                              
                                       
                       }
            
                    cout<<max<<endl; 
             }
                   
             return 0 ; 
     
 } 
