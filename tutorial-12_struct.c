#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char* name;
    float imdb;
    int year;
} Movie;

void printMovie(Movie*);

int main(){
    Movie* upside_down = (Movie*) calloc(1,sizeof(Movie));
    Movie up;
    up.name = "Up";
    up.year = 2009;
    up.imdb = 9.2;
    upside_down->name ="Inside Out";
    upside_down->year = 2015;
    upside_down->imdb = 8.1;
    printMovie(upside_down); //This is a struct pointer
    printMovie(&up); //This is a not pointer
}

//This is pass by reference method its best way to make functions like this
void printMovie(Movie* movie){
    printf("Name: %s\t IMDB: %3.1lf\t Year:%d\n",movie->name, movie->imdb, movie->year); //In short it reads the movie's address in ram and writes it directly
}
//This is pass by value method and its worst way to make functions like this
void printMovieBad(Movie movie){
    printf("Name: %s\t IMDB: %3.1lf\t Year:%d\n",movie.name, movie.imdb, movie.year); //In short it reads movie's value and creates an temporary copy of movie and prints it
}
