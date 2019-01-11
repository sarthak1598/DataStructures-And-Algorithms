

// This is a array based program 

{
#include<iostream>
using namespace std;

int transitionPoint(int arr[],int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<transitionPoint(a,n)<<endl;
	}
	return 0;
}
}

//defining the function to return the transition point of the given array as described the problem statement.
int transitionPoint(int arr[],int n)
{
     int index;
     int i;
     while(arr[i]< 1)
        {
            i++;
            
            if(arr[i]==0)
          {
               index=i+1;
          }
        }
     
     return index;
     
}
