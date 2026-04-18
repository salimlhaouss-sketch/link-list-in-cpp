#include <stdio.h>

#define MAX_NOTES 100

int main() {
    int a, i;
    int notes[MAX_NOTES];

    printf("Ecrire le nombre de notes (max %d): ", MAX_NOTES);
    scanf("%d", &a);

    if (a > 0 && a <= MAX_NOTES) {
        for (i = 0; i < a; i++) {
            printf("Ecrire la note %d: ", i + 1);
            scanf("%d", &notes[i]);
        }

        printf("\nLes notes avec incrémentation:\n");
        for (i = 0; i < a; i++) {
            notes[i]++;  // 
            printf("Note %d = %d\n", i + 1, notes[i]);
        }
    } else {
        printf("Nombre de notes invalide.\n");
    }

    return 0;
}