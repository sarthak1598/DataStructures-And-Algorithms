// the cpp program returns true /yes if number entered is power of 2 and no if entered number is not power of 2 .
// the code is written considering all the Test cases provided by the user as  a  input to the code 

#include <iostream>
#include<math.h>
using namespace std;

int main() {
	
	int f=0;
	int t;
	cin>>t;
	
	while(t--)
	   {  
	       int n; //number supplied by the user 
	        cin>>n;
	          f=0;
	            
	            for(int i=0;i<=n;i=i+1)
	                {
	                       if(pow(2,i)==n)
	                          {
	                               f=1;
	                               break;
	                          }
	                }
	   
	   	    if(f==1) 
	           cout<<"YES"<<endl;
	          
	        else
	           cout<<"NO"<<endl;
	   }
	return 0;
}
