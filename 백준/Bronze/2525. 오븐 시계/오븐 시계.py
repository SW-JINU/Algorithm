H, M = map(int, input().split())
time = int(input())

x = (M + time) // 60
y = (M + time) % 60
if x > 0 and (H + x) < 24:
    print(f"{H + x} {y}")
elif x > 0 and (H + x) >= 24:
    print(f"{H + x - 24} {y}")
elif x <= 0:
    print(f"{H} {y}")
