/*
 * Participantes:
 * - Hector Junior Morales Veloz - A00114842
 * - Luis Ricardo Legreaux Medina - A00114843
 * - Joshua Alberto Martinez Fernandez - A00115333
 * - Steven Paulino - A00115455
 * - John De la cruz - A00114885
 * - ...
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <cstdlib>

#define NUM_CANDIDATOS 6
#define NUM_RECINTOS 6

char *CANDIDATOS[NUM_CANDIDATOS] = {"FOKE", "FARRU", "BULIN", "ALFA", "ROCHY", "LUIMMY"};

int system(const char *command);

int main()
{
    int votos[NUM_RECINTOS][NUM_CANDIDATOS] = {0};
    int total_votos[NUM_CANDIDATOS] = {0};
    int total_recintos[NUM_RECINTOS] = {0};

    // Ingreso de votos por recinto
    for (int recinto = 0; recinto < NUM_RECINTOS; recinto++)
    {
        printf("\nRecinto %d:\n", recinto + 1);
        for (int i = 0; i < NUM_CANDIDATOS; i++)
        {
            // int random_vote = rand() % 10000; // genera un voto random del 0 al 9999

            printf("Ingrese votos para el candidato %s: ", CANDIDATOS[i]);
            scanf("%d", &votos[recinto][i]);

            // printf("Votos generados aleatoriamente para el candidato %s: %d\n", CANDIDATOS[i], random_vote);
            // votos[recinto][i] = random_vote;

            total_votos[i] += votos[recinto][i];
            total_recintos[recinto] += votos[recinto][i];
        }
    }

    // Calcula el nombre mas largo
    int max_width = {0};
    for (int i = 0; i < NUM_CANDIDATOS; i++)
    {
        int width = strlen(CANDIDATOS[i]);

        if (width > max_width)
            max_width = width;
    }

    // Calcula el voto mas grande
    int max_vote_width = 0;
    for (int recinto = 0; recinto < NUM_RECINTOS; recinto++)
    {
        for (int i = 0; i < NUM_CANDIDATOS; i++)
        {
            char buffer[50];
            sprintf(buffer, "%d", votos[recinto][i]);
            int len = strlen(buffer);
            if (len > max_vote_width)
                max_vote_width = len;
        }
    }

    if (max_vote_width > max_width)
        max_width = max_vote_width;

    // Mostrar votos en forma de tabla
    printf("\nVotos por recinto:\n");
    printf("Recinto | ");
    for (int i = 0; i < NUM_CANDIDATOS; i++)
    {
        printf("%-*s | ", max_width, CANDIDATOS[i]);
    }
    printf("%-*s\n", max_width, "Total");

    for (int recinto = 0; recinto < NUM_RECINTOS; recinto++)
    {
        printf("%7d | ", recinto + 1);
        for (int i = 0; i < NUM_CANDIDATOS; i++)
        {
            printf("%-*d | ", max_width, votos[recinto][i]);
        }
        printf("%-*d\n", max_width, total_recintos[recinto]);
    }

    // Mostrar total de votos por grupo
    printf("\nTotal de votos por candidato:\n");
    for (int i = 0; i < NUM_CANDIDATOS; i++)
    {
        printf("Grupo %s: %d votos\n", CANDIDATOS[i], total_votos[i]);
    }

    // Determinar ganador
    int max_votos = 0;
    char *candidato_ganador = "";
    for (int i = 0; i < NUM_CANDIDATOS; i++)
    {
        if (total_votos[i] > max_votos)
        {
            max_votos = total_votos[i];
            candidato_ganador = CANDIDATOS[i];
        }
    }
    printf("\nEl ganador es el candidato %s con %d votos.\n", candidato_ganador, max_votos);
    system("pause");

    return 0;
}
