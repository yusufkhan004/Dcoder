```python
import string

N = int(input())                               #sample input is 2
result = []                                    #making of list
for i in range(N):
    char = string.ascii_lowercase[i]           #fetching characters in lowercase
    result.append(char)                        #append to the list 

result.reverse()                               #reverse the list
happy_string = "".join(map(str,result))        #join the reversed list into string 
print(happy_string)                            #output -> ba

```
