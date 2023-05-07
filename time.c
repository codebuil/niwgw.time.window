#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Uso: %s <programa> [argumentos]\n", argv[0]);
        return 1;
    }
    char *program = argv[1];
    char arguments[1024];
    strcpy(arguments," ");
    if (argc >= 3) {
        strcat(arguments,argv[2]);
    
    for (int i = 3; i < argc; i++) {
        strcat(arguments, " ");
        strcat(arguments, argv[i]);
    }
    }
    time_t start, end;
    time(&start);
    system(strcat(program, arguments));
    time(&end);
    double elapsed = difftime(end, start);
    printf("Tempo decorrido: %.2f segundos\n", elapsed);
    return 0;
}
