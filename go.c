stack=[]
st=[]
list=[]
new_list=[]
new_list2=[]
list3=[]
for x in range(1,100):
	c=0
	for y in range(2,x):
		if x%y==0:
			c=1
	if (c==0) and (x!=1) and (x!=2):
		stack.append(x)
for x in stack:
	sum=0
  	while x>0:
  		temp=x%10
  		sum=sum+temp
  		x=x/10
  	st.append(sum)
for x in st:
	d=0
	for y in range(2,x):
		if x%y==0:
			d=1
	if (d==0) and (x!=2):
		list.append(x)
for i in list:
    if i not in new_list:
        new_list.append(i)
    else:
    	new_list2.append(i)
for i in new_list2:
	if i not in list3:
		list3.append(i)
print "It is the all prime number which is the sum of digit of the prime numbers below 100"
print (new_list)
print "Repeated prime numbers:"
print(list3)
}
