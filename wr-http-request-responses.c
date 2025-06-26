#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("---------------Making HTTP request...--------------\n\n");
    
    system("curl -v 94.237.121.185:54309");

    printf("---------------\n\nRequest completed!--------------\n");

    return 0;
}
