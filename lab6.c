#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contact{
    char name[20];
    char number[12];
    struct contact *next;
    struct contact *prev;
} CONTACT;

//prototpye functions
void insert(void);
void delete(void);
void show(void);
void showLetter(void);

CONTACT arr[26];


int main()
{
    int i,input;
    for(i=0; i<26;i++)
    {
        CONTACT *head = NULL;
        CONTACT *tail = NULL;
    }

    for(;;)
    {
        printf("Please input a command\n
            (1) Insert a contact\n
            (2) Delete a contact\n
            (3) Show all contacts\n
            (4) Show contacts of a certain letter\n
            (5) Quit\n");
        scanf("%d",&input);
        
        swtich(input){
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                show();
                break;
            case 4:
                showLetter();
                break;
            case 5:
                exit(0);
            default:
                printf("Please enter a valid command\n");
                break;
        }

    }
}

void(insert)
{
    CONTACT *p = (CONTACT *) malloc(sizeof(CONTACT));
    if
}