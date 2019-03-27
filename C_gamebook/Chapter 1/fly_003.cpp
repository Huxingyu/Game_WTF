#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int x=0,y=5;
    int top=0,button=10;
    int left=0,right=20;
    int velocity_x=1,velocity_y=1;
    while(1){
        x = x+velocity_x;
        y = y+velocity_y;
        system("cls");
        for(int i=0;i<x;i++){
            printf("\n");
        }
        for(int j=0;j<y;j++){
            printf(" ");
        }
        printf("o");
        printf("\n");
        Sleep(500);
        if(x==top||x==button){
            velocity_x=-velocity_x;
        }
        if(y==left||y==right){
            velocity_y=-velocity_y;
        }
    }
    return 0;
}