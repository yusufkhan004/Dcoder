<h1> Python </h1>

```python
import math

N,X = map(int,input().split())         #Fetching inputs into different variables   Input: 8,2

h = math.floor(N/2)                    #Half of the total index number

if X >= h:                             #If x is beyond or equal to the half then x-h
    print(math.floor(X-h))             
else:                                         # [0 1 2 3 | 4 5 6 7]  "0->4","1->5","2->6","3->7" 
    print(math.floor(X+h))             #Else x+h           Output: 6

    ```
