# Q1) Write a program to solve tower of Hanoi
def toh(n,source,auxiliary,destination):
    if n>0:
        toh(n-1,source,destination,auxiliary)
        print(f"Move a disk from {source} to {destination}")
        toh(n-1,auxiliary,source,destination)
        
toh(3,'A','B','C')

# Q2) Write a program to convert a decimal number to binary using recursion
def d2b(n):
    if n>0:
        d2b(n//2)
        print(n%2,end='')
        
d2b(11)

# Q3) Write a program to multiply two matrices
# Q4) Write a program to check whether a number is a prime number or not using recursion
def isPrime(n,k=2):
    if n<=2:
        return True if n==2 else False
    if n%k==0:
        return False
    if k>n/2:
        return True
    
    return isPrime(n,k+1)
    
print(isPrime(17))
