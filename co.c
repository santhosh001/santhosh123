
#include<iostream>
using namespace std;
int main()
{
String str="hello world 123";
count(str);
return 0;
}
void count(string str)
{
int i,al, uppal,num,sp;
al=uppal=num=sp=0;
for(i=0;str[i]!=NULL;i++)
{
if(str[i]>='a' && str[i]<='z')
al++;
else if(str[i]='')
sp++;
else if(str[i]<='A' && str[i]='Z')
uppal++;
else
num++;
}
cout<<"number of numeric character are %d",num<<;
}
}
