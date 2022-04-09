
#Q1) Create a Triangle from * sign of length 10
# rows = int(input("Enter number of rows: "))
rows = 10
k = 0

for i in range(1, rows+1):
    for space in range(1, (rows-i)+1):
        print(end="  ")
   
    while k!=(2*i-1):
        print("* ", end="")
        k += 1
   
    k = 0
    print()
    
#Q2) Write a python program to generate Fibonacci number series 
def fib(n):
    arr = [0,1]
    for i in range(n-2):
        arr.append(arr[i]+arr[i+1])
    return arr
f = fib(10)
print(f)

#Q3) Write a python program to print prime numbers upto a given number
def isPrime(n):
    for i in range(n):
        if i==0 or i==1:
            continue
        elif n%i==0:
            return False
    return True
def prime(n):
    arr = list()
    for i in range(n):
        if i==0 or i==1:
            continue
        elif isPrime(i):
            arr.append(i)
    return arr
    
print(prime(15))
