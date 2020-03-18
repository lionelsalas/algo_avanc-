#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int**  create_tab(int ligne, int colonne) {
	int k,h,l;
	printf("Nombre de lignes: %d \nNombre de colonne: %d \n", ligne,colonne);
    int** tab;
    tab = malloc(ligne*sizeof(int*)); 
    for(k=0;k<ligne;k++){
        tab[k] = malloc(colonne*sizeof(int));
    }
    for (h=0; h<ligne; h++){
		for (l=0; l<colonne; l++){
			tab[h][l]=(rand())%10;
		}
	}
	return tab ;
  }



void affichage(int** tab, int ligne, int colonne){ // varibale qui contient l'adresse d'un entier (pointeur)
    int h,l;
    for (h=0; h<ligne; h++){
		for (l=0; l<colonne; l++){
			printf("%d ", tab[h][l]);
		}
		printf("\n");	
	}
}

void libre(int ligne,int** a){
	int i;
	for (i=0;i<ligne;i++){
		free(a[i]);
	}
	free(a);
}

void aditionner(int** matrice1, int** matrice2, int ligne, int colonne){
	int i,j;
	for (i=0;i<ligne;i++){
		for (j=0;j<colonne;j++){
}
int main() {
	
	int** matrice;
	int ligne, colonne;
	printf(" Entrez le nombre de lignes: ");
	scanf("%d", &ligne);
	printf(" Entrez le nombre de colonnes: ");
	scanf("%d", &colonne);
	matrice = create_tab(ligne,colonne);
	affichage(matrice,ligne,colonne);
	matrice1 = create_tab(ligne,colonne);
	//matrice2 = create_tab(ligne,colonne);
	affichage(matrice1,ligne,colonne);
	//affichage(matrice2,ligne,colonne);
	libre(ligne,matrice);
	
}
