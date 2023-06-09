#include"tutorial-6_header.h"
#include <stdlib.h>

int is_prime(int number){
    //Checking is number lower than 2
    if (number < 2){
        return 0;
    }
    //Checking number is 2
    else if (number == 2){
        return 1;
    }
    //Calculating
    else{
        for(int i=2; i<number; i++){
            //Checking is number can be divided by i
            if(number%i == 0){
                return 0;
                break;
            }
            //Checking number is greater than i
            if (i>=number-1){
                return 1;
                break;
            }
        }
    }
}

int get_square(int number){
    number *= number;
    return number;
}

//Test getting the reference value and set it for real
int add_five(int *number){
    (*number) += 5; //Adding 5 to reference
    return *number; //Writing to the ram
}





//From 9st tutorial
void change_place(int* first, int* second){
    int temp = *first;
    *first = *second;
    *second = temp;
}

void bubbleSort(int array[], size_t size){
    unsigned int i,j;
    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            if (array[i] > array[i+1]){
                change_place(&(array[i]), &(array[i+1]));
            }
        }
    }
}