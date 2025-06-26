#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    char cookies[] = "'PHPSESSID=a16pdr88af8push3motr4ij1vj'";
    char url[] = "94.237.120.186:37862/search.php";
    char payload[] = "{\"search\":\"flag\"}";
    
    char command[256];

    sprintf(command, "curl -s -X POST --data-raw '%s' -H 'Content-Type: application/json' -b %s %s", payload, cookies, url);
    printf("[~] Executing Payload [%s]\n", command);

    printf("[~] Making cURL request...\n\n"); 
    
    system(command);

    printf("\n[::] Request completed!\n");

    return 0;
}
