/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: mark
 *
 * Created on 06 January 2016, 13:51
 *
 * Seb's homework, 6th Jan 2016
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/*
 * Print the times tables, up to 13 x 13
 * Uses nested loops
 *
 */

void printTimesTables() {

    int i, j;
    i = 1;
    while (i <= 13) {
        j = 1;
        while (j <= 13) {
            printf("%2d x %2d = %3d\n", i, j, i*j);
            j = j + 1;
        }
        i = i + 1;
        printf("\n\n");
    }
    return;
}





/*
 * Helper function to print the value of a boolean variable
 */
void printBoolean(bool aBool) {
    if (aBool == true)
        printf("true");
    else
        printf("false");
}


/*
 * printing a truth table for AND and OR
 * We rely on the fact that 0 is false an 1 is true
 * to have two loops that iterate from 0 to 1
 */

void printTruthTables() {


    printf("The truth table for AND:\n\n");

    int i = 0;

    while (i <= 1) {
        int j = 0;
        while (j <= 1) {
            printBoolean(i);
            printf ("\tAND ");
            printBoolean(j);
            printf ("\tis ");
            printBoolean(i && j);
            printf ("\n");
            j++;
        }
        i++;
    }


    printf ("\n\nThe truth table for OR:\n\n");

    i = 0;

    while (i <= 1) {
        int j = 0;
        while (j <= 1) {
            printBoolean(i);
            printf ("\tOR ");
            printBoolean(j);
            printf ("\tis ");
            printBoolean(i || j);
            printf ("\n");
            j++;
        }
        i++;

    }


}



int main(int argc, char** argv) {


    printTruthTables();
    // printTimesTables();
    return (EXIT_SUCCESS);
}

