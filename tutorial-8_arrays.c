#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STUNDENTS 700

int main(){
    int student_id[STUNDENTS]; //Creates an student id array count of 700
    srand(time(NULL)); //changes rand seed from time because c cant completely make random numbers
    //sets into random values
    for (int i = 0; i <= STUNDENTS; i++){
        student_id[i] = rand()%STUNDENTS;
    }
    //Loops 700 times
    for (int i = 0; i <= STUNDENTS; i++){
        printf("student_id[%d]: %d \n",i, student_id[i]); //Writes to console
    }
    getchar();
}