#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<time.h>

void TestOperations();
void RandomInt();


int main(){

    TestOperations();
    RandomInt();
    return 0;
}

void RandomInt(){
    int random;
    FILE* file;
    
    file = fopen("Random_Integer.txt", "w");

    if(file == NULL){
        puts("File cant open :(");
    }
    else{
        for (int i = 0; i<=300 && !feof(file); i++){
            fprintf(file, "%d\n", i);
        }
    }
    fclose(file);
}

void TestOperations(){
    char* test = "Hello World"; //Creating a test variable
    FILE* file; //Creating a file variable for making file operations

    file = fopen("HelloWorld.lol", "w"); //Opening/Creating "HelloWorld.lol" file

    //Checking if its null or not
    if(file == NULL){
        puts("File cant open :(");
    }
    else{
        fprintf(file, "%s\n", test); //Writing "Hello World" to file
    }
    fclose(file); //Closing the file
}