#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int x=5,y=10;
    int height=20,velocity=1;
    while(1){
        x = x+velocity;
        system("cls");
        for(int i=0;i<x;i++){
            printf("\n");
        }
        for(int j=0;j<y;j++){
            printf(" ");
        }
        printf("o");
        printf("\n");
        Sleep(50);
        if(x==height){
            velocity=-velocity;
        }
        if(x==0){
            velocity=-velocity;
        }
    }
    return 0;
}