#include<stdio.h>

//A size calculator based of a formula
int main(){

    int your_fathers_size = 180;
    int your_moms_size = 167;

    int are_you_a_boy = 13; //For boys 13, For girls -13

    int total = your_fathers_size+your_moms_size+are_you_a_boy; //Gets total of variables
    total = total/2; //Gets half of the total

    printf("Your size is: %dcm\n", total); //Writes to console

    return 0;
}