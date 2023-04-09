# 나의 답
# n, k = map(int, input().split())
# count = 0

# while n != 1 :
#     while n%k == 0 :
#         n /= k
#         count += 1

#     n -= 1
#     count += 1

# print(count)

n, k = map(int, input().split())
result = 0

# n >= k 나누기
while n>= k :
    while n%k != 0 : #안나누어 떨어지면 n-1
        n -= 1
        result += 1
    n // k
    result += 1

while n > k : # 마지막 남은 수 -1
    n-= 1
    result += 1

print(result)

# 예시
# n, k = map(int, input().split())
# result = 0

# while True : # n == k 로 나눠 떨어질 때 까지 -1
#     target = (n // k) * k
#     result += (n - target)
#     n= target

#     if n < k : # n이 k보다 작을 때 반복문 탈출
#         break

#     result += 1 # k로 나누기
#     n //= k

# result += (n-1) # 마지막 남은 수에 대해 -1
# print(result)