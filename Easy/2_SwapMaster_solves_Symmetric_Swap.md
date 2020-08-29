```python
import numpy as np

N = input()                    #No of element
A = np.array(input().split())  #input of elements of the array
arr = np.array([])             #second array to store reversed array 
arr = reversed(A)              #numbers are reversed
print(*arr)
```
