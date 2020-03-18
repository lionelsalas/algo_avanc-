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

int** aditionner(int** matrice1, int** matrice2, int ligne, int colonne){
	int** resultatmatrice;
	int i,j;
	resultatmatrice = create_tab(ligne,colonne);
	for (i=0;i<ligne;i++){
		for (j=0;j<colonne;j++){
			resultatmatrice[i][j]= matrice1[i][j]+matrice2[i][j];
		 }
	 }
	return resultatmatrice;
}

int main() {
	int** matricetest;
	int** matrice1;
	int** matrice2;
	int** resultatmatrice;
	int ligne, colonne;
	printf(" Entrez le nombre de lignes: ");
	scanf("%d", &ligne);
	printf(" Entrez le nombre de colonnes: ");
	scanf("%d", &colonne);
	matricetest = create_tab(ligne,colonne);
	affichage(matricetest,ligne,colonne);
	matrice1 = create_tab(ligne,colonne);
	printf("première matrice : \n"); 
	affichage(matrice1,ligne,colonne);
	matrice2 = create_tab(ligne,colonne);
	printf("deuxième matrice : \n");
	affichage(matrice2,ligne,colonne);
	resultatmatrice = aditionner(matrice1,matrice2,ligne,colonne);
	printf("résultat de matrice1+matrice2 :\n"); 
	affichage(resultatmatrice,ligne,colonne);
	libre(ligne,matricetest);
	libre(ligne,matrice1);
	libre(ligne,matrice2);
	libre(ligne,resultatmatrice);
}
