#include<stdio.h>

int fib(x){
    if(x<0){
        return -1;
    }
    if(x==1 || x==0){
        return 1;
    }
    return fib(x-1) + fib(x-2);
}
int main(){
    int number;

    for(number = 0; number<30; number++){
        printf("%d \n", fib(number));
    }
}