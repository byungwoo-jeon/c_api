#include <stdio.h>
#include <string.h>

int main()
{

    int ret = 0;
    char *tmp = "DADA2";

    ret = strncasecmp(tmp, "DADA2A", strlen(tmp));

    printf("%d\n", ret);

    return 0;
}   
