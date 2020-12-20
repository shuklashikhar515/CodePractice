#include<stdio.h>
#include<string.h>
int main(){
    char S[100];
    scanf("%s",&S);
    func(S);
    return 0;
}
void func(char *S) {
    int i,count1,count=0;
    int flg=0,temp;
    char rev[100];
   count=strlen(S);
    count1=count;
    temp=count;
    for(int j=count-1,k=0;j>=0;j--,k++) {
        rev[k]=S[j];
    }
    for(int t=0; t<count1;t++) {
        if(rev[t] == S[t]) {
            flg++;
        }
        else {
            flg--;
        }
    }
    if(flg==temp) {
        printf("\nYES");
    }
    else
        printf("\nNO");
}
