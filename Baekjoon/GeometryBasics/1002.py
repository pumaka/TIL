import math

case = int(input())

for i in range(case):
    x1, y1, r1, x2, y2, r2 = list(map(float, input().split()))
    length = math.sqrt(((x2-x1)**2)+((y2-y1)**2))
    if (x1==x2) and (y1==y2) and (r1==r2):
        cross = -1
    elif (length < (r2+r1)) and (length > abs(r2-r1)) :
        cross = 2
    elif (length == (r2+r1)) or (length == abs(r2-r1)) :
        cross = 1
    else :
        cross = 0
    print(cross)