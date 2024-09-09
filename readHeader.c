#include <stdio.h>

#include "readHeader.h"
#include "readWrite.c"

struct userStruct {
    char user;
    int number;
};


int menu() {
    int choice;
    printf("***** Movie Recommendation System ***** \n");
    printf("1. Register User \n");
    printf("2. Display Movies \n");
    printf("3. Rate a Movie \n");
    printf("4. Get Movie Recommendations \n");
    printf("0. Exit \n");
    printf("Enter your choice :");
    int test = scanf("%d", &choice);
    
    if(test < 1) {
        //Error test
        char dummy;
        scanf("%c", &dummy);
    }
    
    switch(choice) {
        case 1: 

        printf("Enter username for registration: ");
        char username = scanf("%c", &username);

        


        menu();

        case 2: 
        printf("\n");
        menu();

        case 3:
        printf("\n");
        menu();
        printf("\n");
        case 4:
        menu();

        case 0:
        break;

        default:
        printf("Invalid input \n");
        printf("\n");
        menu();
    }
    

    return choice;
}

