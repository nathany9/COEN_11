#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contact{
    char name[20];
    char number[12];
    struct contact *next;
} CONTACT;

//prototpye functions
void insert(void);
void delete(void);
void show(void);
void showLetter(void);

CONTACT arr[3];
CONTACT *head = NULL;

int main()
{
    
}