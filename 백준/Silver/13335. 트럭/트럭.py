from collections import deque

N, W, L = map(int, input().split())
trucks = deque(map(int, input().split()))

q = deque()

for _ in range(W):
    q.append(0)

time = 0

while trucks:
    time += 1
    q.popleft()
    
    if sum(q) + trucks[0] <= L:
        q.append(trucks.popleft())
    else:
        q.append(0)
while q:
    time += 1
    q.popleft()

print(time)