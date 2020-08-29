```python
import string 

N = int(input())                            #Integer input     i/p:5
s = input()               		    #String input      i/p:Hello

result = []				    #List

for i in range(N):
    char_3 = s[i]*3			    #Trippling each character of string
    result.append(char_3)		    #And append it to List

output_str = "".join(map(str,result))	    #join or concatenate list character into string	
print(output_str)			    # o/p = HHHeeellllllooo

```
