#include "lab1.h"
#include <stdio.h>

// PROTOTYPES void printEmployees(Employees [NUM_EMP], int c); // FUNC 1

// FUNCTION 1
void printEmployees(Employees allEmployees[NUM_EMP], int c){
    for(int count = 0; count < c; count++){
        printf("First Name: %s\nLast Name: %s\nID: %d\nDependants: %s, %s, %s\n", 
            allEmployees[count].fname, 
            allEmployees[count].lname,
            allEmployees[count].id,
            allEmployees[count].dependents[0],
            allEmployees[count].dependents[1],
            allEmployees[count].dependents[2]);
    }
}

// FUNCTION 2
void saveEmployees(Employees allEmployees[NUM_EMP], int c, char fName[SIZE]){
    FILE *fileHandler;
    fileHandler = fopen(fName,"read");
    
    for(int count = 0; count < c; count++){
        fprintf(fileHandler,"\nFirst name: %s\nLast name: %s\nID: %d\nDependents: %s, %s, %s",
            allEmployees[count].fname, 
            allEmployees[count].lname, 
            allEmployees[count].id, 
            allEmployees[0].dependents[0], 
            allEmployees[1].dependents[1], 
            allEmployees[2].dependents[2]);
    }
    fclose(fileHandler);
}

/*
// function 3
int loadEmployees(Employees allEmployees[], char fName[SIZE]){
    FILE *fileHandler;
    if(fileHandler == NULL){ 
        printf("File %s not found.", fName);
        return 0;
    }
}
*/

// COULDNT FIGURE OUT LAST