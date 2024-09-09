#include <stdio.h>
#include <stdlib.h>

#include "readWrite.h"

extern FILE *fptr;



char *fileRead(const char *txt) {
    // Open a file in read mode
fptr = fopen(txt, "r");

// Store the content of the file
char myString[1000];

// If the file exist
if(fptr != NULL) {

  // Read the content and print it
  while(fgets(myString, sizeof myString, fptr)) {
    printf("%s", myString);
  }

// If the file does not exist
} else {
  printf("Not able to open the file.");
}

// Close the file
fclose(fptr);

}


char *fileWrite(const char *txt, const char *words) {
    fptr = fopen(txt, "a");

    

    fclose(fptr);
}

void wordCheck(char *word, char *txt) {
    
    fptr = fopen(txt, "r");
    char line[1000];

    if(fptr != NULL) {
        while(fgets(line, sizeof line, fptr) != NULL) {
            // line[strcspn(line, "\n")] = 0;
            if(strcmp(line, word) == 0) {
                printf("its there! \n");
            }

        }
    }
    

}

