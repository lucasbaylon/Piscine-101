#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
char* read_line(int fd)
{
    if (fd < 0)
    {
        return NULL;
    }
   
    int i=0;
    char *line;
    char courant;
    int res;

    line = (char *)malloc(sizeof(char*));
    res = read(fd, &courant, 1);
    if (res == 1)
    {
        while(courant!='\n' && res == 1)
        {
            line[i] = courant;
            i++;
            line = (char *)malloc(sizeof(char*));
            res = read(fd, &courant, 1);
        } 
    }
    line[i] = '\0';
    return line;
}
int main()
{
    int f = open("dictionary.txt",O_RDONLY, 0644);
    char *retour = read_line(f);
    if (retour != NULL)
    {
        printf("%s\n", retour);
        free(retour);
    }
    return 0;
}