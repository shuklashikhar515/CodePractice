#include <stdio.h>
#include<string.h>

int main()
{
    static int x=0,y=0;
    int i;
    char S[200];
    scanf("%s",&S);
    for(i=0;S[i]!='\0';i++) {
        if(S[i]=='L') {
            x--;
        }
        else if(S[i]=='R') {
            x++;
        }
        else if(S[i]=='D') {
            y--;
        }
        else if(S[i]=='U') {
            y++;
        }
    }
    printf("%d %d",x,y);
    return 0;
}
