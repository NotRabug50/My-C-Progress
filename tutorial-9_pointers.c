#include<stdio.h>
#include<unistd.h>

#include "headers/tutorial-6_header.c"


int main(){
    int* pointer1;
    float* pointer2;
    char* pointer3;
    
    pointer1 = 0; //For Security Reasons
    pointer2 = NULL; //same

    printf("pointer1: %p \t pointer2: %p \t (not set to anything)pointer3: %p \n", pointer1, pointer2, pointer3);
    printf("\033[0;32mIf you want to use pointers later you need set it to 0 or null if you dont it will like pointer3\033[0;00m \n");

    puts("");
    sleep(2);

    int x = 53;
    float y = 43.2;
    char z = 'a';

    pointer1 = &x;
    pointer2 = &y;
    pointer3 = &z;

    printf("pointer1's new target: %d\n", *pointer1);
    printf("pointer2's new target: %f\n", *pointer2);
    printf("pointer3's new target: %c\n", *pointer3);
    
    puts("");
    sleep(2);

    printf("x's address: %p pointer1's value: %p\n", &x, pointer1);
    printf("y's address: %p pointer2's value: %p\n", &y, pointer2);
    printf("z's address: %p pointer3's value: %p\n", &z, pointer3);
    
    puts("");
    sleep(2);

    char hello[] = "hello";
    char* ptr = hello;
    printf("%c", *ptr);
    for (int i = 0; i <= 4; i++){
        printf("%c", *(++ptr));     
    }
    printf("\n\033[4;31mwrited with pointers\033[0;00m");
    getchar();
} 