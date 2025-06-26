#include <stdio.h>
#include <curl/curl.h>

size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    size_t realsize = size * nmemb;
    printf("%.*s", (int)realsize, (char*)contents);
    return realsize;
}

int main(void)
{
    CURL *curl;
    CURLcode res;

    curl = curl_easy_init();
    if(curl)
    {
	curl_easy_setopt(curl, CURLOPT_URL, "94.237.54.192:36896/download.php");
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);

	res = curl_easy_perform(curl);

	if(res != CURLE_OK)
	    fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));

	/*always cleanup*/
	curl_easy_cleanup(curl);
    }
    return 0;
}
