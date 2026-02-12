#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    if(a>=0&&a<=100) {
       b= a*3;
      printf(" Bill amount = Rs.%d",b);  
    }
   else if(a>=101&&a<=500){
       c=a*5;
       printf("Bill amount = Rs.%d",c);
   }
   
   
    return 0;
}