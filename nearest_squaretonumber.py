

## python code to return the square of intergers less than the number inputted by the user 

def main():
    
    # Testcase input
    testcases = int(input())
    
    
    while(testcases > 0):
        x = int(input())
        
        printIncreasingPower(x);
        print ()
        
        
        testcases -= 1
 
if __name__ == '__main__':

    main()
}


def printIncreasingPower(x):
    n=0
    p=0
    # loop jumping with the powers of 2 
    while(n < x):
        n=n+1
        p = n*n
        if p <= x:
            print (p, end = " ")
        
        
