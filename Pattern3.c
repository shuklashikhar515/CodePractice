
/*

A                                                                                                                                                        
AB                                                                                                                                                       
ABC                                                                                                                                                      
ABCD                                                                                                                                                     
ABCDE   

*/
#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        int c = 65;
        for(j=1;j<=i;j++){
            printf("%c", c);
			c++;
        }
        printf("\n");
    }
    return 0;
}
