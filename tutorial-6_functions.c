#include<stdio.h>
#include "headers/tutorial-6_header.h"

int haha = 16; //Creating haha variable

int main(){
    add_five(&haha); //Adding five with functions
    printf("%d \n",haha); //Testing
    getchar();
}