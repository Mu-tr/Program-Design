
def costCompute(iStart,iEnd):
    iConsume=iEnd-iStart
    return iConsume*0.85

fElecFee1=costCompute(1201,1786)
fElecFee2=costCompute(1322,1423)
print("Electric Power Cost of Mr Zhang:",fElecFee1)
print("Electric Power Cost of Mr Lee:",fElecFee2)