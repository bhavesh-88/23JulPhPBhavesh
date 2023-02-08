#default argument
def test(a=11,b=12,c=13,d=14):
    print("A : ",a,",B : ",b,",C : ",c,",D : ",d)
test(1,2,3,4)    
test(1,2,3)
test(1,2)
test(1)
test()
