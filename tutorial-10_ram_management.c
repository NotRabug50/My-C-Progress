#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    char* muhaha = (char*) malloc(100*sizeof(char)); //Making dynamic array with malloc all array variables is random
    float* a = (float*) calloc(1000, sizeof(float)); //With calloc all variables set to 0

    realloc(muhaha,150); //With realloc() we add array e.g 150 more space in ram
    memset(muhaha, 0, 250 * sizeof(char));

    free(a);

    if (muhaha != NULL){
        puts("yup");
        free(muhaha);
    }

    getchar();
}