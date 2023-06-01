# 각 행마다 가장 작은 수를 찾은 뒤에 그 수 중에서 가장 큰 수를 찾는 것

# min() 험수 이용
n, m = map(int,input().split())
result  = 0 

for i in range(n): # 한 줄 씩 입력 받아 확인
    data = list(map(int, input().split()))
    min_value = min(data) # 현재 줄에서 가장 작은 수 찾기
    result = max(result, min_value) # 가장 작은 수 중에서 가장 큰 수 찾기

print(result)

# 이중 for문
# n, m = map(int,input().split())
# result  = 0 

# for i in range(n) : # 한 줄 씩 입력 받아 확인
#     data = list(map(int, input().split()))

#     min_value = 10001 # 현재 줄에서 가장 작은 수 찾기
#     for a in data :
#         min_value = min(min_value, a)

#     result = max(result, min_value) # 가장 작은 수 중에서 가장 큰 수 찾기

# print(result)