N = int(input())

x = N // 4

if N % 4 == 0:
    y = ""
    for i in range(1, x + 1):
        y += "long "

    print(f"{y}int")