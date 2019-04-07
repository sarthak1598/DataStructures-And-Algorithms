// cpp program function reciving argumnets as array , array size and the constant k which is to be returned by the code as
// the frequency of the digit in the all of array elements 

// driver code is not written here 

// the working num() function which returns the number 

int num(int a[], int n, int k)
{
     int counter = 0 ; // to store the number of times the value is repeated 
     for(int i=0; i<=n-1;i++)
           { 
                  if(a[i]==k)          
                         {  
                             
                              counter++ ;
                         }
                         
                         
                    else
                        {
                             // loop to check the frequency of the constant k in the elements of the array being 1,2,3...etc digits ..
                            while(a[i]!=0)
                               {
                                   int rem ; 
                                   rem=a[i]%10;
                                if(rem==k)
                                       counter++;
                                       a[i]=a[i]/10;
                                }
                         }
           }
           
    return counter ; 
    
}
