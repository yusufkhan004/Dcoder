```python
import math

n = int(input())                            #Input of "n" numbers
A = list(map(int,input().split()))          #making of list of integer out of strings

sum = 0                                     #initializing sum = 0

for i in A:                                 #Looping throughout the list 
    sum = sum + i                           #And summing all the list integers

remainder = sum % max(A)                    #Dividing sum and largest number in list to get the remainder
print(remainder)                            # output = 0
   ``` 
