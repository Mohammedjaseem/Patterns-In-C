/*

* * * * * * * * * *
*
* * * * * * * *
*
*
* * * * * *
*
*
*
* * * *
*
*
*
*
* *
*
*
*
*
*

*/

#include <stdio.h>
    int main(){
        int i,j,k,m;{
            m=10;
            for(i=1; i<=5; i++){
                for(j=m; j>=1; j--){
                    printf("* ");
                }
                  m=m-2;
                printf("\n");
                for(k=1; k<=i; k++){
                    printf("* \n");  
                }               
            }
        }
    }