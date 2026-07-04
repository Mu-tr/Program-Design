from math import ceil

def findFalseCoin(coins):
    #查找范围：从idxStart下标开始的iLength个硬币
    idxStart, iLength = 0,len(coins)
    while True:
        if iLength == 1:
            return idxStart

        n = ceil(iLength/3)
        wPart1 = sum(coins[idxStart:idxStart+n])
        wPart2 = sum(coins[idxStart+n:idxStart+n*2])
        wPart3 = sum(coins[idxStart+n*2:idxStart+iLength])
        if wPart1 < wPart2:
            idxStart, iLength = idxStart, n
        elif wPart1 > wPart2:
            idxStart, iLength = idxStart+n,n
        else:
            idxStart, iLength = idxStart+n*2,iLength-n*2
    
if __name__ == '__main__':
    coins  = [100]*11

    for i in range(len(coins)):
        coinsCopy = coins[:]
        coinsCopy[i] = 99
        r = findFalseCoin(coinsCopy)
        print(f'False coin idx:{r}, weight:{coinsCopy[r]}')