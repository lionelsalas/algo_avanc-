#include <stdio.h>
#include <stdlib.h> 

int**  create_tab(int M, int N) {
	int k;
	printf("Nombre de lignes: %d \nNombre de colonne: %d \n", N,M);
    int** tab;
    tab = malloc(M*sizeof(int*)); 
    for(k=0;k<N;k++){
        tab[k] = malloc(N*sizeof(int));
    }
	return tab ;
  }



void affichage(int ** tab, int M, int N){ // varibale qui contient l'adresse d'un entier (pointeur)
    int h,l;
    for (h=0; h<N; h++){
		for (l=0; l<M; l++){
			printf("%d", tab[h][l]=0);
		}
		printf("\n");	
	}
}



int main() {
	int** matrice;
	int N, M;
	printf(" Entrez le nombre de lignes: ");
	scanf("%d", &N);
	printf(" Entrez le nombre de colonnes: ");
	scanf("%d", &M);
	matrice = create_tab(M,N);
	affichage(matrice,M,N);
	
}
