#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int string_control_functions(){
    char c1 = 'b';
    int c1_int = c1;

    char number = '5';
    printf("is digit '%c': %d\n",number,isdigit(number));

    char h = 'd';
    printf("is alpha: '%c': %d\n",h,isalpha(h));

    char p = '-';
    printf("is punct: '%c': %d\n",p, ispunct(p));
}

int main_string_functions(){
    const char test[] = "  103.45344sdd";
    char *pointer;

    double var;
    var = strtod(test, &pointer);
    printf("Number:%f, pointer:%s\n", var,pointer);
}

int main(){
    string_control_functions();
    main_string_functions();
}