num = input()
names = []
mini = 1000
dic = {}
for i in range(num):
    ip = raw_input()
    names.append(ip)
    if mini > len(ip):
        mini = len(ip)
upto = -1
for i in range(mini):
    re = 1
    for j in range(1,len(names)):
        if names[j][i] != names[0][i]:
            re = 0
            break
    if not(re):
        break
    upto = i
    
print names[0][:upto+1];
