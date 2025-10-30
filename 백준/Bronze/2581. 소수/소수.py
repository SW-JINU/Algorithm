M = int(input())
N = int(input())

# 0~N까지 소수 여부 True로 초기화
is_prime = [True] * (N + 1)
is_prime[0] = is_prime[1] = False  # 0과 1은 소수가 아님

# 에라토스테네스의 체
for i in range(2, int(N ** 0.5) + 1):
    if is_prime[i]:
        for j in range(i * i, N + 1, i):
            is_prime[j] = False  # i의 배수는 소수가 아님

# M~N 사이 소수만 추출
primes = [i for i in range(M, N + 1) if is_prime[i]]

# 결과 출력
if primes:
    print(sum(primes))   # 소수 합
    print(primes[0])     # 최소 소수
else:
    print(-1)            # 소수가 없는 경우
