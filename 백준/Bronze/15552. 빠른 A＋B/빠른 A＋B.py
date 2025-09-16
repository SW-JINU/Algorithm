import sys
input = sys.stdin.readline   # 빠른 입력

T = int(input())
for _ in range(T):
    a, b = map(int, input().split())
    sys.stdout.write(f"{a + b}\n")   # 빠른 출력
