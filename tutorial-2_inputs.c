#include<stdio.h>
#include<unistd.h>

//A size calculator based of a formula
int main(){

    unsigned int your_fathers_size; //Unsigned because it dont need negative number length
    unsigned int your_moms_size; //Unsigned because it dont need negative number length

    short are_you_a_boy = 13; //Not unsigned because it needs negative number length

    printf("Enter your fathers size (only numbers): "); //Writing console to ask question
    fflush(stdout); //idk what is this
    scanf("%d\n", &your_fathers_size); //Waits and input and sets is input value to your fathers size

    printf("Enter your mothers size (only numbers): "); //Writing console to ask question
    fflush(stdout); //idk what is this
    scanf("%d\n", &your_moms_size); //Waits and input and sets is input value to your mothers size

    printf("Are you a boy? (13 for yes, -13 for no): "); //Writing console to ask question
    fflush(stdout); //idk what is this
    scanf("%d\n", &are_you_a_boy); //Waits and input and sets is input value to are you a boy

    int total = your_fathers_size+your_moms_size+are_you_a_boy; //Getting total of your moms and dads size
    total = total/2; //Getting half of total

    printf("Your size is: %dcm\n", total); //Writes to console
    sleep(3); // Waiting 3 seconds to close

    return 0;
}