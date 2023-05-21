#include<stdio.h>
#include<stdlib.h>

double add(const double, const double);
double subtract(const double, const double);
double multiply(const double, const double);
double divide(const double, const double);

void gui();



int main(){

    double (*calculate[4])(const double const, const double const) = {add, subtract, multiply, divide};

    size_t input;

    gui();
    scanf("%u", &input);
    while (input != -1 && input >= 1 && input <= 4)
    {
        double n1,n2,result;
        printf("Write 2 numbers between space: ");
        scanf("%lf %lf", &n1, &n2);
        result = (*calculate[input-1])(n1, n2);
        printf("result: %3.2lf \n", result);
        gui();
        scanf("%u", &input);
    }
    
}

double add(const double a, const double b){
    return a+b;
}
double subtract(const double a, const double b){
    return a-b;
}
double multiply(const double a, const double b){
    return a * b;
}
double divide(const double a, const double b){
    return a/b;
}

void gui(){
    puts("\e[0;35mCalculator\e[0;00m");
    puts("1.Add");
    puts("2.Subtract");
    puts("3.Multiply");
    puts("4.Divide");
    puts("-1 To Exit");
}