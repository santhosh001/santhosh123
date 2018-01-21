#include <stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
    return (*(char*)b)-(*(char*)a);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    char str[2*n];
    int j=n;
    for(i=0;i<n;i++){
        str[i]='B';
        str[j++]='W';
    }
    str[n*2]='\0';
    qsort(str,2*n,sizeof(char),cmp);
    printf("%s",str);
    return 0;
}
}
