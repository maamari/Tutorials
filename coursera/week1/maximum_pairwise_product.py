def maxPPslow(vals):
    maxProd = 0
    for val1 in vals:
        for val2 in vals:
            if val1 != val2:
                maxProd = max(maxProd,val1*val2)
    print(maxProd)

def maxPPfast(vals):
    sortedVals = vals.sort()
    print(vals[-1]*vals[-2])

numVals = int(input())
vals = [int(val) for val in input().split()]
maxPPfast(vals)
