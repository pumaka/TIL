import math

def length(x1,y1,c1,c2,r):
    len_ = 0
    len_ = math.sqrt((c1-x1)**2 + (c2-y1)**2)
    if(len_ >= r):
        return 0;
    else:
        return 1;

count = 0
T = int(input())
for i in range(T):
    x1, y1, x2, y2 = map(int, input().split())
    N = int(input())
    for l in range(N):
        c1, c2, r = map(int, input().split())
        if (length(x1,y1,c1,c2,r) and (length(x2,y2,c1,c2,r) == 0)) or ((length(x1,y1,c1,c2,r) == 0) and length(x2,y2,c1,c2,r)):
            count += 1
        else:
            continue
    print(count)
    count = 0
