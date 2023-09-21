#include <stdio.h>
#include <mcheck.h>

int main ()
{
    mtrace();
    char* a = (char*)new(sizeof(char) * 5);
    a = "asfew";
    printf(a);
    return 0;
}
