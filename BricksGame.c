#include<stdio.h>
void Bricks(int N);
int main() {
    int N;
    scanf("%d",&N);
    Bricks(N);
    return 0;
}
void Bricks(int N) {
    int i,M,P,temp=N;
    for(i=1;i<=N;i++) {
        while (temp>=0) {
            P=i;
            M=i*2;
            temp = temp-(P+M);
            printf("%d + %d = %d\n",P,M,temp);
        }
    }
}
