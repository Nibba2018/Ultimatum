#include<stdio.h>
#include<stdlib.h>
typedef enum {INT, FLOAT}type;
typedef struct
{
    type tag;
    union
    {
        int i;
        float f;
        char c;
    }value;
}list;

void print(list l[])
{
    int size = sizeof(l)/sizeof(l[0]);
    
    printf("[ ");
    for (int i = 0; i < size-1; i++)
    {
        switch (l[i].tag)
        {
        case INT:
        {
            printf("%d, ");
        }
        
        default:
            break;
        }
    }
    printf("\b]");
}