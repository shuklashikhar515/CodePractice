#include<stdio.h>
#include<string.h>
int main() {
    int i = 0;
    char ch[10];
    do{
        scanf("%s",ch);
        char rc1,rc2;
       /* printf("rc1: ");
        scanf("%c",&rc1);
        printf("rc2: ");
        scanf("%c",&rc2);*/
        rc1 = 'a'; rc2 = 'z';
        for(int i =0; i<strlen(ch);i++) {
            if(rc1 == ch[i]) {
                ch[i] = rc2;
            }
            printf("%c  ",ch[i]);
        }
        printf("\n%s\n",ch);
        printf("Enter -1 to exit. ");
        scanf("%d",&i);
    }while(i != -1);
    
    return 0;
}