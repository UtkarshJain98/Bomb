#include <unistd.h>
#include <malloc.h>

int main()
{
    fork();
    while(fork())
        void *boom = malloc(65536);
    return 0;
}
