// code

interviewbit solution for problem ; 

double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    
     // median of 2 merged sorted arrays // 
       // using the merge sort algo as a application ; 
        int m = A.size() ; 
           int n = B.size() ; 
            vector<int > v ;
              int f = 0; 
              
           if(m==0){
               return (B[n/2]) ; 
          }
          
          if(n==0){
              return (A[m/2]) ; 
          }
       
       
        double ans = 0 ; 
          int i = 0 ; int j = 0 ; // vector<int > v ; 
         while(i <= m || j <= n ){
              if(A[i] < B[j] ){
                   v.push_back(A[i]) ;
                     i++ ; 
                    
              }
             if(A[i] > B[j]){
                  v.push_back(B[i]) ;
                   j++ ; 
             }
             
             if(A[i] == B[j]){
                 v.push_back(A[i]) ; 
                   i++ ; 
                      j-- ; 
             }
             
             
         }  
         if(i != m ){
           while(i < m){
               v.push_back(A[i]) ; 
             }
         }
         
         if(j != n ){
             while(j != n ){
                 v.push_back(B[j]) ; 
             }
         }
         
         
         
   int len = v.size() ;            
       if(v.size()%2 == 0 ){
             ans = ( v[len/2] + v[len/2 + 1 ] )  / 2 ; 
       }
       else{
           return v[len/2]  ; 
       }
       
    
    return ans ; 
}
