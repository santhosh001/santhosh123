#include<studio.h>
#include<math.h>
int main()
{
int count_word=0,i;
int count_char=0;
char str[20];
printf("enter the string:  ");
gets(str);
for(i=0;str[i]!=NULL ;i++)
{
count_char++;
if(str[i]==' ')
count_words++;
}
printf("numbner of the character in string :%d",count_char);
printf("number of the character in string :%d",count_words);
getch();
return=0;
}
}
