import itertools
import math
def ruleAscLen(n, l):
    a = [0 for i in range(n + 1)]
    k = 1
    a[0] = 0
    a[1] = n
    while k > 0:
        x = a[k - 1] + 1
        y = a[k] - 1
        k -= 1
        while x <= y and k < l - 1:
            a[k] = x
            y -= x
            k += 1
        a[k] = x + y
        if( k< (l-1)):
            break;
        yield a[:k + 1]

n,k = raw_input().split()
n,k = [int(n),int(k)]
pointList =[]
for a0 in range(n):
    x_i,w_i = raw_input().split(' ')
    x_i,w_i = [int(x_i),int(w_i)]
    pointList.append((x_i,w_i))

mincost = 99999999999999999999999

for expression in ruleAscLen(n,k):
    for setList in itertools.permutations(expression):
        i = 0
        indice =0
        cost = 0
        offset = 0
        for size  in setList:
            (xIndice,yIndice) = pointList[indice]
            while i < size + offset :
                (x,w) = pointList[i]
                cost = cost + w * (x - xIndice)
                i = i + 1
            indice = i
            offset = offset + size
        mincost = min(mincost,cost)
if mincost == 99999999999999999999999 :
    mincost = 0
print (mincost)