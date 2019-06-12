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
void print(list*);