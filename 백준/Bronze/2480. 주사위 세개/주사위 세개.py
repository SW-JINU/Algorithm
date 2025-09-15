T = list(map(int, input().split()))

x = sorted(T)

result = 0
if x[0] == x[1] == x[2]:
    result = 10000 + x[0] * 1000
elif x[0] == x[1] or x[1] == x[2]:
    result = 1000 + x[1] * 100
else:
    result = x[2] * 100

print(result)
