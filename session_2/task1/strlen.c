#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char test[] = "baha";
    int u = 0;
    for (char *ch=test; *ch!='\0'; ++ch){

        u += 1;
    }
    printf("%i\n", u);
}