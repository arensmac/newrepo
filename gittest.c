#include<stdio.h>
int x,y,z,k;
k=5;
int main(){
    for(x=0; x<5; x++){
        for(z=k;z>0;z--){
            printf(" ");
        }
        for(y=x;y>0;y--){
            printf("* ");
        }
        printf("\n");
        k--;
    }
    return 0;

}