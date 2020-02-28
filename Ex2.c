#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int r1, r2, x1, x2, y1, y2;
    int atual;
    FILE *fs = fopen("output.txt", "w");
    while(scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF){
        double dist = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
        if(dist > r1){
            printf("MORTO\n");
        }else if(dist + r2 > r1){
            printf("MORTO\n");
        }else{
            printf("RICO\n");
        }
    }
    return 0;
}
