```python
T = int(input())

for i in range(T):
    Year = int(input())
    if Year % 400 == 0 or (Year % 4 == 0 and Year % 100 != 0):
        print("Yes")
    else:
        print("No")
 ```       
