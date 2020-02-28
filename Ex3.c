#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, i, stock = 0;
    scanf("%d", &n);
    getchar();
    int *div = malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d", &div[i]);
        stock += div[i] - 1;
    }
    printf("%d\n", stock);
    return 0;
}
