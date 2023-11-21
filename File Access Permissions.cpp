#include <stdio.h>
#include <unistd.h>

int main() 
{
    const char *filename = "example.txt";

    if (access(filename, R_OK) == 0) {
        printf("Read permission is granted for the file.\n");
    } else {
        perror("Read permission is not granted for the file");
    }

    if (access(filename, W_OK) == 0) {
        printf("Write permission is granted for the file.\n");
    } else {
        perror("Write permission is not granted for the file");
    }

    return 0;
}
