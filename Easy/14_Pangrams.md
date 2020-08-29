<h1> Python </h1>

```python
string = set(input().lower())

alpha = [ch for ch in string if ord(ch) in range(ord('a'),ord('z')+1)]

if len(alpha) == 26:
    print('YES')
else:
    print("NO")
```
