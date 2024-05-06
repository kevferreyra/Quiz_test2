#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para generar una pregunta y validar la respuesta
int generarPregunta(char *pregunta, char *respuestaCorrecta) {
    int opcion;
    // Generar un número aleatorio para seleccionar una pregunta
    opcion = rand() % 3;

    // Definir las preguntas y respuestas
    switch (opcion) {
        case 0:
            strcpy(pregunta, "Cual es el segundo nombre de Mat.exe?");

            strcpy(respuestaCorrecta, "ezequiel");
            printf("- Ezequiel\n- Enrique\n- Pedro");
            break;
        case 1:
            strcpy(pregunta, "Orientacion sexual de todos los integrantes de BBS?");
            strcpy(respuestaCorrecta, "homosexuales");
            printf("- Bisexualesn\n- metrosexuales\n- Homosexuales\n");
            break;
        case 2:
            strcpy(pregunta, "Qué es blanco y espeso?");
            strcpy(respuestaCorrecta, "mi leche");
            printf("- Mi leche\n- Hueso\n- mi leche otra vez\n");
            break;
        default:
            return 0; // No debería llegar aquí, pero por si acaso
    }

    // Mostrar la pregunta al usuario
    printf("%s\n", pregunta);
    return 1;
}




int main() {
    //menu();
    int puntaje = 0;
    char pregunta[100], respuestaCorrecta[100];
    srand(time(NULL)); // Semilla para la generación de números aleatorios

    // Bucle para generar 5 preguntas
    for(int i = 0; i < 5; i++) {
        if(generarPregunta(pregunta, respuestaCorrecta)) {
            char respuestaUsuario[100];
            printf("Tu respuesta: ");
            scanf("%s", respuestaUsuario);

            // Verificar si la respuesta es correcta
            if(strcmp(respuestaUsuario, respuestaCorrecta) == 0) {
                printf("__________________________¡Correcto!__________________________\n\n");
                puntaje++;
            } else {
                printf("__________________________Incorrecto. La respuesta correcta era: %s__________________________\n\n", respuestaCorrecta);
            }
        }
    }

    // Mostrar el puntaje final
    printf("Tu puntaje final es: %d/5\n", puntaje);

    return 0;
}
