#include <stdio.h>

int main() {
  int a,b,c;
    printf("enter the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    printf("enter the number c:");
    scanf("%d",&c);
    if (a>=b){
        if(a>=c){
            printf("The largest number is:- %d\n",a);
        }
        else{
            printf("The largest number is:-%d\n",c);
        }
    else{
        if(b>=c){
            printf("The largest number is:-%d\n",b);
        }
        else{
             printf("The largest number id :-%d\n",c);
        }
  return 0;
}
