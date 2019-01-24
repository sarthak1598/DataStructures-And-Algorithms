
// python program to find the revsrse of the number 

n=int(input("Enter the number: "))
rev=0 
while(n>0)
    digit=n%10
    rev=rev*10+digit
    
    n=n//10
    
print("Reverse of the entered number is :" , rev)
