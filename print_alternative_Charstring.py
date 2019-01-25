

# python program to print the string formed by the alternate position characters in the origional string 

def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        mystr=(input())
        stringJumper(mystr)
        print()
        testcases-=1
        
if __name__=='__main__':
    main()
}


def stringJumper(str):
    p="" #  declaring the string varible
    for i in range(len(str)):
        if i%2 is 0:
            p=p+str[i]
    print(p, end=" ") 
