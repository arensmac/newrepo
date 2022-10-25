#include<stdio.h>
int x,y,z,k;

int main(){
    printf("enter height:");
    scanf("%d",&k);
    for(x=0; x<k; x++){
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