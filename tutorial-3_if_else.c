#include<stdio.h>
#include<unistd.h>


int main(){
    
    int n1 = 5; //Number 1
    int n2 = 12; //Number 2
    int right_answer = n1 * n2; //Calculating the right answer

    int your_answer; //Creating your answer value

    printf("What is 5 x 12?: "); //Writing console question
    fflush(stdout); //still dont know what is this
    scanf("%d", &your_answer); //Getting input from keyboard

    /* Normal Way
    //Checking your answer is equals to right answer
    if (your_answer == right_answer){
        puts("yup yu made it");
        sleep(3);
    }
    //Checking if you are making an not funny joke
    else if (your_answer == 31 || your_answer == 69){
        puts("Not funny.");
        sleep(3);
    }
    //Checking is your answer is not correct
    else{
        puts("uhh sorry dude :(");
        sleep(3);
    }
    */

    // Better way
    switch (your_answer)
    {
        case 60:
            puts("yup right answer");
            break;
        case 69:
            puts("Not funny.");
            break;
        case 31:
            puts("Not funny");
            break;
        default:
            puts("pls give me an right answer");
            break;
    }
}