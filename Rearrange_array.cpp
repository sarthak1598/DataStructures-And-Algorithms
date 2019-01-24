// comment :: 


#include<iostream>
using namespace std; 

int main()
     {
         int t;
         cin>>t;
        // int a[n];
         
            while(t--)
            {
                 int n ; 
                 cin>>n;
                 int arr[n];
                 
                    for(int m=0;m<=n;m++)
                         {
                              cin>>arr[m];
                         }
                         
                          for (int i=0; i < n; i++) {
                               arr[i] += (arr[arr[i]]%n)*n; 
                          }

                                       for (int i=0; i<n; i++){ 
                                                            arr[i] /= n; 
                                                 }
    
                                                    for (int i = 0; i < n; i++) {
                                                               cout << arr[i] << " "; 
          // cout << endl; 
                                                                  }
    
                                   cout<<endl;
                  
                           }    
    return 0 ; 
    
   }
   
