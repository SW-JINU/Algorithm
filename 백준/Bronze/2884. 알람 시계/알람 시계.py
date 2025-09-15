H, M = map(int, input().split())

if H != 0 and M -45 < 0:
    print(f"{H - 1} {M + 15}")
elif M - 45 >= 0:
    print(f"{H} {M - 45}")
elif H == 0 and M - 45 < 0:
    print(f"{23} {M + 15}")