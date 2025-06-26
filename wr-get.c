#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    char creds[] = "admin:admin";
    char url[] = "94.237.59.174:59916/search.php";
    char paramValue[] = "flag";
    
    char command[128];

    sprintf(command, "curl -s -u %s %s?search=%s", creds, url, paramValue);
    printf("[~] Executing Payload [%s]\n", command);

    printf("[~] Making cURL request...\n\n"); 
    
    system(command);

    printf("\n[::] Request completed!\n");

    return 0;
}
