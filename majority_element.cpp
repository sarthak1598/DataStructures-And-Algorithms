

// The following program is written in c++ and it finds the majority element in the array which have frequency of greater than the value 
// n/2 , where n is the size of the taken array 


#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int counter;
	int maxCount=0;
	int index;
	int major;
	int arr[n];
	
	for(int i=0 ; i<=n-1 ;i++)
	  {
	     cin>>arr[i];       
	  } 
	  
	  for(int i = 0 ; i<=n-1 ; i++)
	     {
	         for(int j = 0 ; j<=n-1;j++)
	             {
	                 if(arr[i] == arr[j])
	                   {
                          // major = arr[i];	                        
	                        counter++;
	                   }
	        
	             }           
	             
	                   if(counter > maxCount) 
                                                { 
                        maxCount = counter; 
                            index = i; 
                   } 
	                   
	           
	     }
	     
	  if(counter > n/2)
	      {
               cout<<arr[index]<<endl;	          
	      }
	   else
	      {
	           cout<<"-1"<<endl;          
	      }
	      return 0 ; 
        
}
