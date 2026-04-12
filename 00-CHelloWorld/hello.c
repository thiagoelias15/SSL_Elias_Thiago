#include <stdio.h>
#include <string.h>

int main() {
    
    FILE *f;
    char* hola = "Hello World!\n";

    if(f = fopen("output.txt", "a")) {

        
        fwrite(hola, sizeof(char), strlen(hola), f);
        fclose(f);
    }
    else {

        printf("ERROR! No se pudo abrir el archivo.\n");
    }
    
    return 0;
}