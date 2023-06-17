#include<stdio.h>
#include<limits.h>
void biggestUsingIfElse(int a,int b){
    if(a>b){
        printf("The biggest of %d and %d is :%d\n",a,b,a);
    }
    else if(a==b){
        printf("The two numbers are equal\n");
    }
    else{
        printf("The biggest of %d and %d is :%d\n",a,b,b);
    }
}
void biggestUsingTernaryOperator(int a,int b){
    int max=INT_MIN;
    if(a==b){
        printf("The two numbers are equal\n");
    }
    else{
            max=(a>b)? a:b;
            printf("The biggest of two numbers is :%d",max);
    }
}
int main(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    int option;
    printf("Enter 1 to use if else and enter 2 to use ternary\n");
    scanf("%d",&option);
    switch(option){
        case 1:biggestUsingIfElse(a,b);
               break;
        case 2:biggestUsingTernaryOperator(a,b);
               break;
        default:printf("Enter correct option\n");

    }
    return 0;

}
