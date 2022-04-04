# Exp No. 3
import numpy as np

#Q1) Create an array with values in range of 0-100 divided into 20 equal parts. Convert the array to a 2-D array and display.
arr =np.linspace(0,100,20)
arr = arr.reshape(5,4)
print(arr)

#Q2) Create an 2-D array A of size 5X5 consisting of all even numbers up to 50. Later create another array B by adding 1 in each value of array A. Perform addition and multiplication between 2 arrays.
A = np.arange(0,50,2).reshape(5,5)
# print(A)
B = A+1
# print(B)
print(A*B)
print(A+B)

#Q3) Create a matrix of size 3X3 and perform following operations on it, Find maximum value, minimum value, sum of all values and mean. Finally sort the matrix row-wise and display.
arr1 = np.random.rand(3,3)
print(arr1)
max = np.amax(arr1)
min = np.amin(arr1)
sum = np.sum(arr1)
mean = np.average(arr1)
print(f"max: {max}, min: {min}, sum: {sum}, mean: {mean}")
print(np.sort(arr1))

