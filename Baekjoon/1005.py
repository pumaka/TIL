import math

## 1번은 무조건 지어야 한다
T = int(input())
for l in range(T):
    N, K = map(int, input().split())
    time = list(map(int, input().split()))
    series = [0]*(N-1)
    series_i = [0] * N
    for i in range(K):
        order = list(map(int, input().split()))
        if series[order[0]-1] < time[order[1]-1]:
            series[order[0]-1] = time[order[1]-1]
            series_i[order[0]-1] = order[1]
    target = int(input())
    count = 0
    answer = time[0]
    while series_i[count] != target:
        answer += time[series_i[count]-1]
        count = series_i[count] - 1
    answer += time[series_i[count]-1]
    ##print("Series: "+str(series))
    ##print("Series Index: "+str(series_i))
    print(answer)