# Python

```python
N = int(input())

char = input().split(" ")

char.sort(key= str.lower)             #Sorting character based on lowercased equivalents
alpha = " ".join(char)
print(alpha)
```
