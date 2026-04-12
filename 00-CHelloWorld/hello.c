#include <stdio.h>

int main() {
    
    printf("Hello World!\n");
    return 0;
}

/*

    Redireccionamiento del mensaje en la terminal:

    $ make hello
    $ ./hello.exe > output.txt

    Verificación del redireccionamiento:

    $ cat output.txt
    Hello World!

*/