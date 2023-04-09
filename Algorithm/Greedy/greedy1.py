n, m, k = map(int,input().split()) 
data = list(map(int,input().split()))

data.sort() # 입력받은 수 오름차순으로 정렬
first = data[n-1] # 제일 큰 수
second = data[n-2] # 두 번째로 큰 수

result = 0

while True:
    for i in range(k): # 가장 큰 수 k번 더하기
        if m == 0 :
            break
        result += first
        m -= 1 # 더할 때 마다 m -1
    
    if m == 0 :
        break
    result += second # 두 번째로 큰 수 더하기
    m -= 1 # 더할 때 마다 m -1

print(result)
# 하지만 만약 m의 크기가 커지면 시간초과 판정 받음

# 예시
# n, m, k = map(int,input().split()) 
# data = list(map(int,input().split()))

# data.sort() # 입력받은 수 오름차순으로 정렬
# first = data[n-1] # 제일 큰 수
# second = data[n-2] # 두 번째로 큰 수

# # 가장 큰 수 더해지는 횟수 계산
# count = int(m / (k+1)) * k
# count += m % (k+1)

# result = 0
# result += (count) * first # 가장 큰 수 더하기
# result += (m-count) * second # 두 번째로 큰 수 더하기

# print(result)