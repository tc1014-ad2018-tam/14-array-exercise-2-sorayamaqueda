/*
This program helps the user to compute different calculations to the numbers that they introduce inside an array.
It offers them a menu so that they can choose the option.

 Author: Soraya Maqueda
 Date: 15.10.2018
 Contact: soraya_maqueda@hotmail.com
 */
#include <stdio.h>

//Function to clear the input buffer.
void clear (void) {
    while ( getchar() != '\n' );
}

//Menu for the user to select the option.
void menu(){
    printf("\n");
    printf("Press 'A' to compute the sum of the numbers.\n");
    printf("Press 'B' to compute the average of the numbers.\n");
    printf("Press 'C' to display the minimum value of the numbers.\n");
    printf("Press 'D' to display the maximum value of the numbers.\n");
    printf("Press 'E' to Exit the program.\n");
    printf("Option: \t\n ");
}

//Function for the sum of the array's elements.
double sum(int num[], int i) {
    double suma = 0.0;

    for(int k = 0; k < i; k++) {
        suma += num[k];
    }
    return suma;
}

//Function for the average of the array's elements.
double average(int i, int num[]) {
    double suma = 0.0;

    for(int k = 0; k < i; k++) {
        suma += num[k];
    }

    return suma / i;
}

void maximum(int num[], int i){
    int maximum;
    int cell = 1;

    maximum = num[0];

    for(int k = 1; k < i; k++){
        if (num[k] > maximum){
            maximum = num[k];
            cell = k + 1;
        }
    }
    printf("The maximum value is %i, and is located at cell %i", maximum, cell);
}

void minimum(int num[], int i){
    int minimum;
    int cell = 1;

    minimum = num[0];

    for (int k = 1; k < i; k++){
        if (num[k] < minimum){
            minimum = num[k];
            cell = k + 1;
        }
    }
    printf("The minimum value is %i, and is located at the cell %i", minimum, cell);
}

int main() {
    char option;
    int i;

    //Here I ask the user for the size of the array.
    printf("How many numbers are you going to introduce?");
    scanf("%i", &i);

    int num[i];

    //Here I store the values of the array.
    for(int k = 0; k < i; k++){
        printf("Give me a number: \n");
        scanf("%i", &num[k]);

    }



    do{
        menu();
        clear();
        scanf("%c", &option);

            switch (option){
                case 'A':
                    printf("The sum of the numbers is %lf", sum(num,i));
                    break;
                case 'B':
                    printf("The average of the numbers is %lf", average(i, num));
                    break;
                case 'C':
                    minimum(num, i);
                    break;
                case 'D':
                    maximum(num, i);
                    break;
                case 'E':
                    printf("Goodbye.");
                    break;
                default:
                    printf("Please introduce an option.");
            }

        }while (option != 'E');

    return 0;
}