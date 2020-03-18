#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int**  create_tab(int N, int M) {
	int k;
	//printf("Nombre de lignes: %d \nNombre de colonne: %d \n", N,M);
    int** tab;
    tab = malloc(N*sizeof(int*)); 
    for(k=0;k<N;k++){
        tab[k] = malloc(M*sizeof(int));
    }
	return tab ;
  }



void affichage(int ** tab, int N, int M){ // varibale qui contient l'adresse d'un entier (pointeur)
    int h,l;
    for (h=0; h<N; h++){
		for (l=0; l<M; l++){
			tab[h][l] = (rand()%10);
			printf("%d", tab[h][l]);
		}
		printf("\n");	
	}
}

void freetab(int N, int** a){
	for (int l=0; l<N; l++){
		free(a[N]);
	}	
	free(a);
}

int main() {
	int** matrice;
	int** matrice2;
	int N, M;
	int P, O;
	srand(time(NULL));
	printf(" Entrez le nombre de lignes (matrice1): ");
	scanf("%d", &N);
	printf(" Entrez le nombre de colonnes (matrice1): ");
	scanf("%d", &M);
		printf(" Entrez le nombre de lignes (matrice2): ");
	scanf("%d", &P);
	printf(" Entrez le nombre de colonnes (matrice2): ");
	scanf("%d", &O);
	matrice = create_tab(N,M);
	matrice2 = create_tab(N,M);
	affichage(matrice,N,M);
	affichage(matrice2,N,M);
	freetab(N,matrice);
	freetab(N,matrice2);
	
}
