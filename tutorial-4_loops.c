#include<stdio.h>


int main(){
    int a,b; //Creating a and b value
    int input; //Creating input value
    puts("Select a operation"); //Writing to console
    puts("1.Addition"); //Writing to console
    puts("2.Subtraction"); //Writing to console
    puts("3.Multiplication"); //Writing to console
    puts("4.Dividing"); //Writing to console
    printf("> "); //Writing to console
    scanf("%d", &input); //Gets an input from console
    while (input != -1){
        printf("Enter 2 numbers: "); //Writing to console
        scanf("%d %d", &a,&b); //Gets 2 input a and b
        switch (input)
        {
            case 1:
                printf("Result: %d\n",a+b);
                break;
            case 2:
                printf("Result: %d\n",a-b);
                break;
            case 3:
                printf("Result: %d\n",a*b);
                break;
            case 4:
                printf("Result: %d\n",a/b);
                break;

            default:
                printf("wrong operation\n");
                break;
        }
    }
}