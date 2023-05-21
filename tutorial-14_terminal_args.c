#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main(int argc, char* argv[]){
    if(argc == 2){
        for(int i=2; i<atoi(argv[1]); i++){
            printf("Checking %d\n", i); //Giving a report to console
            //Checking is argv[1] can be divided by i
            if(atoi(argv[1])%i == 0){
                printf("its not prime\n");
                printf("Checked %d number\n", i);
                sleep(3);
                break;
            }
            //Checking argv[1] is greater than i
            if (i>=atoi(argv[1])-1){
                printf("its prime\n");
                sleep(3);
                break;
            }
        }
    }
    else if (argc <= 1){
        printf("too few arguments");
    }
    else{
        printf("too many arguments");    
    }
}