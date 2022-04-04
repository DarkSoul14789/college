'''

                            Online Python Debugger.
                Code, Run and Debug Python program online.
Write your code in this editor and press "Debug" button to debug program.

'''

#Q1) Create a Triangle from * sign of length 10 --> INCORRECT
n=40
k=40
for i in range(10):
    for j in range(i+1):
        print(" "*k,end="")
        print('*'*i)
        n=-1
    for j in range(i+1):
        print(" "*k,end="")
        print('*'*i)
        k=+1
    print(end="\n")
    
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