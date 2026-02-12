#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if (x>=100 && x<=999){
        printf("three-digit number");
    }
    else{
        printf("Not three-digit number");
    }
    return 0;
}