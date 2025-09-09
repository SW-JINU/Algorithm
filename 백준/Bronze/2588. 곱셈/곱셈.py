first = int(input())
second = input()

for i in range(len(second) - 1, -1, -1):
    third = first * int(second[i])

    print(third)

print(first * int(second))