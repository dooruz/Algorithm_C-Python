# TIL
Today I learned

# Greedy
현재 상황에서 지금 당장 가장 좋은 것을 고르는 알고리즘

-> 거스름 돈 (동전의 최소 갯수 구하기 = 가장 큰 화폐 단위)

    n = 1260
    count =0
    list = [500, 100, 50, 10]

    for coin in list :
        count += n //coin
        n %= coin
    
    print(count)

대부분의 그리디는 최소한의 아이디어를 떠올리고 정당한지 검토가 가능해야 한다.
------------------------
