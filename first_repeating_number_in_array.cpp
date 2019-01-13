

// program to return a first repeating element in an integer array

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n;
	  
	 cin>>n;   
	int arr[n];
	int f=0;
	while(t--)
	   {
	       
	      
	       f=0;
	         for(int i=0 ; i<=n-1;i++)
	            {
	                 cin>>arr[i];
	                 
	            }
	            
	            for(int j=0 ; j<=n-1;j++)
	                {
	                     for(int m=j+1;m<=n-1;m++)
	                         {
	                               if(arr[j]=arr[m])
	                                  {
	                                      f=1;
	                                      cout<<j<<endl;
	                                      break;
	                                  }
	                         }
	                }
	       if(f==0)
	          {
	              cout<<"-1"; 
	          }
	                
	   } 
	return 0;
}
