#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, posts, cmds, devs;
    scanf("%d %d %d", &posts, &cmds, &devs);
    int *cmdsArr = malloc(sizeof(int)*cmds);
    int currentpos = 1;
    int countFinal = 0;
    if(devs == 1){
        countFinal++;
    }
    for(i=0;i<cmds;i++){
        scanf("%d", &cmdsArr[i]);
        if(cmdsArr[i] == 1){
            if(currentpos == posts){
                currentpos = 1;
            }else{
                currentpos++;
            }
        }else{
            if(currentpos == 1){
                currentpos = posts;
            }else{
                currentpos--;
            }
        }
        if(currentpos == devs){
            countFinal++;
        }
    }
    printf("%d\n", countFinal);
    return 0;
}
