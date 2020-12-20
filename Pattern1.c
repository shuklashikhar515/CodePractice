/*

EDCBA                                                                                                                                                    
DCBA                                                                                                                                                     
CBA                                                                                                                                                      
BA                                                                                                                                                       
A   
                                                                                                                                                     
*/
#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        int c = 70;
        c -=i;
        for(j=5;j>=i;j--){
            printf("%c", c);
			c--;
        }
        printf("\n");
    }
    return 0;
}
