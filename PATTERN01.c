/*

* *
*
*
*
* * * *
*
*
*
*
*
*
* * * * * *

*/

#include <stdio.h>
int main(){
    int i,j,k,m=3;

    for(i=1; i<=3; i++){
        for(j=0; j<i; j++){
            printf("* * ");
        }
        printf("\n");
        for(k=0;( k<m && m<7); k++){
           printf("* \n");
        }
        m=m+3;
    
    }
}
