import random
queue  = []
f= open("/Users/yonib/Desktop/queueTestin.txt","w")
for i in range(0,1000):
	n=random.randint(0,100)
	queue.append(n)
	f.write(str(n)+"\n")

f.close()
f= open("/Users/yonib/Desktop/queueTestout.txt","w")
for i in range(0,1000):
	x= queue.pop(0)
	f.write(str(x)+"\n")

f.close()

