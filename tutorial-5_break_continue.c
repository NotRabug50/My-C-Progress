#include<stdio.h>
#include<unistd.h>

int main(){
    int number; //Creating number variable
    int i; //Creating i variable
    printf("Enter a number: "); //Writing "Enter a number: " to console
    scanf("%d", &number); //Getting input from console and setting it to number

    //Calculation
    for(i=2; i<number; i++){
        printf("Checking %d\n", i); //Giving a report to console
        //Checking is number can be divided by i
        if(number%i == 0){
            printf("its not prime\n");
            printf("Checked %d number\n", i);
            sleep(3);
            break;
        }
        //Checking number is greater than i
        if (i>=number-1){
            printf("its prime\n");
            sleep(3);
            break;
        }
    }
}