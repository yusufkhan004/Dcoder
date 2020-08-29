```python
T = int(input())

for i in range(T):
    N , F = input().rsplit(" ")
    if F in N:
        print("Yes")
    else:
        print("No")
```
