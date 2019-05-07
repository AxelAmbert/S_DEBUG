#ifndef structures
#define structures

typedef struct my_struct_s
{
    int i;
    int x;
    char *str;
    struct my_struct_s *next;
}my_struct_t;

#endif