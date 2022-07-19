#include <stdio.h>
/*#include <stdlib.h>
#include <string.h>

#define NAME_SIZE 20
#define COMMENT_SIZE 100
#define NO_OF_NAMES 6


struct user{                            //to hold name and comment for each user
    char name[NAME_SIZE];
    char comment[COMMENT_SIZE];
};
typedef struct user user;

struct commentChar{                         //to hold each char of each comment
    char charachter;
    struct comment * next;
};
typedef struct commentChar commentChar;

commentChar * head = NULL;

commentChar * stringToChar(char c)               //to put each char in linked list
{
    commentChar * newChar = (commentChar*) malloc (sizeof(commentChar));
    newChar->charachter = c;
    newChar->next = NULL;

    if(head==NULL)
    {
        head = newChar;
    }
    else
    {
        commentChar * prev = head;
        while(prev->next!=NULL)
        {
            prev = prev->next;
        }
        prev->next = newChar;
    }
    return head;
}

/*void display ()
{
     comment * current = head;
     while (current != NULL)
     {
         printf("%c",current->charachter);
         current = current->next;
     }
}*/

/*void capitalLetter (comment)
{

}*/
/*
int main()
{
    int i,j;                                //counters
    FILE *fptrOld, *fptrNew;                //2 ptr : one to read from it (input), and the other to write in (output)
    fptrOld = fopen("Input.txt","r");
    fptrNew = fopen("Output.txt","w");
    user user[NO_OF_NAMES];             //declare array of struct (each element holds one user)
    commentChar * commentChar[NO_OF_NAMES];

    if(fptrOld)                             //to check if the input file was exist
    {
        for(i=0; i<NO_OF_NAMES; i++)        //scan text file and put the data in the array
        {
            fgets(&user[i].name, COMMENT_SIZE, fptrOld);
            fgets(&user[i].comment, COMMENT_SIZE, fptrOld);
        }
        fclose(fptrOld);

        for(i=0; i<NO_OF_NAMES; i++)
        {
            j=0;
            do
            {
                commentChar[i]=stringToChar(user[i].comment[j]);
                j++;
            }
            while(user[i].comment[j] != '\0');

        }

        /*for(i=0; i<NO_OF_NAMES; i++)
        {
            capitalLetter(user[i].comment);
        }*/
        /*commentChar * current = commentChar[0];
        while(current!=NULL)
        {
            printf("%c",comment[0]->charachter);
            current current->next;
        }*/


        /*for(i=0; i<NO_OF_NAMES; i++)         //copy the new text to another text file
        {
            printf("%s%s",user[i].name,user[i].comment);
            fprintf(fptrNew,"%s%s",user[i].name,user[i].comment);
        }*/
       /* fclose(fptrNew);
    }
    else
    {
        printf("Error");
    }
    return 0;
}
*/

int main()
{
    char name[50];
    printf("enter\n");
    gets(name);
    printf("%s",name);
    return 0;
}
