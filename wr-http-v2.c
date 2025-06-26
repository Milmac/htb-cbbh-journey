#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("//Making HTTP request...//\n\n");
    
    system("curl -s 94.237.54.192:36896/download.php");

    printf("\n\n//Request completed!// \n");

    return 0;
}
