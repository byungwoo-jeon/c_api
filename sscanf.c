#include <stdio.h>
#include <string.h>

int main()
{
    char *test="3,DISCONNECTED,XCMP";

    int num;
    char conn[256];
    char reason[256];

    sscanf(test, "%d,%[^','],%[^' ']", &num, conn, reason);

    printf("%d, %s, %s\n", num, conn, reason);

    return 0;
}
