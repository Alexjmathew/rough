#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main() {
    char buffer[100];
    struct dirent *dptr;
    DIR *dirp;

    printf("\nEnter directory name: ");
    scanf("%99s", buffer);

    dirp = opendir(buffer);
    if (dirp == NULL) {
        printf("The given directory does not exist");
        exit(1);
    }

    while ((dptr = readdir(dirp)) != NULL) {
        printf("%s\n", dptr->d_name);
    }

    closedir(dirp);
    return 0;
}
