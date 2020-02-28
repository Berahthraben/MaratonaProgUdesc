#include <stdio.h>
#include <stdlib.h>

int main(void){
    int reads, caps, entered, left, current = 0, i, br = 0;
    scanf("%d %d", &reads, &caps);
    getchar();
    for(i = 0;i < reads; i++ ){
        scanf("%d %d", &left, &entered);
        current -= left;
        current += entered;
        if(current > caps){
            br = 1;
        }
    }
    if(br != 1){
        printf("N\n");
    }else{
        printf("S\n");
    }
    return 0;
}
