#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y=10;
    for(x=1;x<10;x++){
        system("cls");  //清屏函数
        for(int i=0;i<x;i++){
            printf("\n");
        }
        for(int j=0;j<y;j++){
            printf(" ");
        }
        printf("o");
        printf("\n");   //这个好像没什么作用啊
    }
    return 0;
}