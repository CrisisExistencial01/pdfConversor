#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Lista de opciones:
const char* opt[] = {"-S", "-h", "--help", "-ct-mobi", "--convert-to-mobi"};

int optCount = sizeof(opt) / sizeof(opt[0]);
bool find(const char* option) {
    for (int i = 0; i < optCount; i++) {
        if (strcmp(option, opt[i]) == 0) {
            return true;
        }
    }
    return false;
}

void ShowHelp() {
    printf("options:\n"
           "\t-h, --help            show this help message and exit\n"
           "\t-S                    Muestra un saludo amigable\n");
}
void exec(const char* option) {
    if (strcmp(option, "-S") == 0) {
        printf("¡Hola! :D\n");
    } else if (strcmp(option, "-h") == 0 || strcmp(option, "--help") == 0) {
        ShowHelp();
    }else if (strcmp(option, "-ct-mobi") == 0 || strcmp(option, "--convert-to-mobi") == 0){
        // llamar a la funcion para convertir el pdf
    }
    } else {
        printf("No se ha encontrado la opción: '%s', 'pdfconversor -h' o 'pdfconversor --help' para mas información \n", option);
    }
}

int main(int argc, char* argv[]) {
/*
    int v;
    if (system(NULL)) {
        puts("[Ok]\n");
    } else {
        exit(EXIT_FAILURE);
    }
*/

    exec(argv[1]);
    return 0;
}

