#include <stdio.h>
#include <stdlib.h>
#include<time.h>

//question3
// Fonction pour calculer la taille d'une chaîne de caractères
size_t tailleChaine(const char *chaine) {
    const char *ptr = chaine;

    // Parcourir la chaîne jusqu'à atteindre le caractère nul ('\0')
    while (*ptr != '\0') {
        ptr++;
    }


    return ptr - chaine;
}
int main(){
//Ecrire une fonction qui calcule la taille d'une chaine de caractères en utilisant les pointeurs, Attention, vous ne pouvez pas utiliser string.h



    // Exemple d'utilisation de la fonction
    const char *test = "Ramadan karim!";
    size_t taille = tailleChaine(test);


    printf("La taille de la chaine est : %d\n", taille);



    return 0;}


    printf("---------------------------------------------------------------------------------------------------------\n");
int main()
{// question1:
    int T[8];
srand(time(NULL));
for (int i=0; i<8;i++){


T[i]=rand()%9+1;
}
printf("\n");
 for (int i = 0; i <  7; i++) {
        int indiceMin = i;
        for (int j = i + 1; j < 8; j++) {
            if (T[j] <T[indiceMin]) {
                indiceMin= j;
            }
        }

        // Échanger l'élément courant avec le minimum trouvé
        int temp = T[i];
        T[i] = T[indiceMin];
        T[indiceMin] = temp;
}

for(int i=0;i<8;i++){
    printf("%d |",T[i]);

}








printf("---------------------------------------------------------------------------------------------------------");
// Créer un tableau de 10 entiers, le remplir aléatoirement, supprimer les nombres pairs et afficher juste les nombres impairs.

int tab[10];
srand(time(NULL));
for (int i=0; i<10;i++){


tab[i]=rand()%100;
}

for(int i=0;i<10;i++){
    printf("%d |",tab[i]);

}printf("\n");
int n=0;
for (int i=0; i<10;i++){


         if (tab[i] % 2 != 0) {
            tab[n] = tab[i];
            n++;



    }}


    for(int i = 0; i < n ; i++){
        printf("%4d", tab[i]);}


}








 printf("---------------------------------------------------------------------------------------------------------");

void toUpperCase(char *chaine) {
    while (*chaine != '\0') {

        if (*chaine >= 'a' && *chaine <= 'z') {
            *chaine = *chaine - 32;
        }
        chaine++;
    }
}

int main() {
    char str[100];

    printf("\n Entrez la chaîne à convertir en majuscule: ");
    fgets(str, sizeof(str), stdin);

    toUpperCase(str);

    printf("\n La chaîne en majuscule = %s", str);

    return 0;
}







































