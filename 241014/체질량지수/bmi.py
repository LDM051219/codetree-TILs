h,w = map(int,input().split())
b = (10000*w) / (h*h)

if(b >= 25):
    print('%d' %b)
    print("Obesity")
else:
    print('%d' %b)