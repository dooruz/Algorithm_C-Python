# 2072 홀수만 더하기
# t = int(input())
# answers = []
# sum = 0
# for i in range(t):
#     a = (input().split())
#     for j in a:
#         if int(j)%2 != 0:
#             sum += int(j)
#         else:
#             continue
#     a.clear()
#     answers.append(sum)
#     sum = 0

# for i in range(t):
#     # f를 붙이는 이유는 문자열로 포매팅 하는 것 ex(f'문자열{변수} 문자열')
#     print(f'#{(i+1)} {answers[i]}')

# 2071 평균값 구하기
# t = int(input())
# answers = []
# sum = 0

# for i in range(t) :
#     a = (input().split())
#     for j in a :
#         sum += j
#         sum /= 10
#     a.clear()
#     answers.append(sum)
#     sum = 0

# for i in range(t):
#     print(f'#{(i+1)} {answers[i]}')

#2070 큰놈 작은놈 같은놈
# t = int(input())
# answers = []
# for i in range(t) :
#     a = list(map(int,input().split()))
#     # for j in a :
#     #     if a[j] > a[j+1] :
#     #         answer = '>'
#     #     elif a[j] < a[j+1] :
#     #         answer = '<'
#     #     else :
#     #         answer = '='
#     if a[0] > a[1] :
#         answer = '>'
#     elif a[0] < a[1] :
#         answer = '<'
#     else :
#         answer = '='

#     a.clear()
#     answers.append(answer)
#     answer = 0

# for i in range (t) :
#     print(f'#{(i+1)} {answers[i]}')
#     #print('#'+(i+1), answers[i])

# 최대수 구하기
# 중간값 찾기
# 자릿수 더하기
# 연월일 달력
# 알파벳을 숫자로 변환
# 신문 헤드라인
# 스탬프 찍기

#소문자 대문자 변경
# a = input()
# answer = a.upper()
# print(answer)

# 아주 간단한 계산기
# a, b = map(int,input().split())
# sum = 0
# sub = 0
# mul = 0
# div =0
# sum = a+b
# sub = a-b
# mul = a*b
# div = a//b
# print(sum, sub, mul, div, sep="\n")

# 스탬프 찍기
# n = int(input())
# for i in range(n) :
#     print('#', end='')

# 주어진 숫자만큼 덧셈
# n = int(input())
# sum = 0
# for i in range (1, n+1, 1) :
#     sum += i

# print(sum)

# 비밀번호 찾기
# p, k = map(int,input().split())
# answer = 0
# answer = p-k+1
# print(answer)

# 자릿수 더하기
# n = int(input())
# a = 0

# a = n // 1000
# n %= 1000
# a += n//100
# n %= 100
# a += n//10
# n %= 10
# a += n

# print(a)

# 가위 바위 보
# a ,b = map(int,input().split())
# if a-b == -2 :
#     print('A')
# elif a-b == 1 :
#     print('A')
# elif a-b == 2 :
#     print('B')
# elif a-b == -1 :
#     print('B')

# 대각선 출력하기
# for i in range(5) :
#     for j in range(5) :
#         if i == j :
#             print('#',end='')
#         else :
#             print('+',end='')
#     print(sep='\n')

# 최대수 구하기
# t = int(input())
# answers = []

# for i in range (t) :
#     a = list(map(int,input().split()))

#     answer = max(a)
#     answers.append(answer)
#     a.clear()

# for i in range(t) :
#     print(f'#{(i+1)} {answers[i]}')

# 간단한 N의 약수
# n = int(input())
# a = []

# for i in range (1, n+1) :
#     if n % i == 0 :
#         a.append(i)
# a.sort()
# print(a)
