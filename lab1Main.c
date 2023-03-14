#include "lab1.h"
#include <string.h>

Employees workers[3];

int main(int argc, char const *argv[]){
    //worker 1
    strcpy(workers[0].fname, "Evan");
    strcpy(workers[0].lname, "Piatkowski");
    workers[0].id = 2897;
    strcpy(workers[0].dependents[0], "Lillian");
    strcpy(workers[0].dependents[1], "Dariusz");
    strcpy(workers[0].dependents[2], "Amelia");

    //worker 2
    strcpy(workers[1].fname, "Gianluca");
    strcpy(workers[1].lname, "Ferro");
    workers[1].id = 1055;
    strcpy(workers[1].dependents[0], "Tarik");
    strcpy(workers[1].dependents[1], "Matt");
    strcpy(workers[1].dependents[2], "Giancarlo");
    
    //worker 3
    strcpy(workers[2].fname, "Christian");
    strcpy(workers[2].lname, "Romas");
    workers[2].id = 2638;
    strcpy(workers[2].dependents[0], "Daniel");
    strcpy(workers[2].dependents[1], "Nuno");
    strcpy(workers[2].dependents[2], "Josh");

    printEmployees(workers, NUM_EMP);
    saveEmployees(workers, NUM_EMP, argv[1]);
    //loadEmployees(workers, SIZE);
}