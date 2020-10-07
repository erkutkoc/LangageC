#include <stdio.h>
#include <stdlib.h>

void produitEntier();
void produitReel();
void swapEntier();
void afficherASCII();
void exercice2E();
void division();
int main(int argc, char const *argv[])
{
	int choix;
	printf("Choissisez l'opération : \n");
	printf("Produit Entier -> 1 \n");
	printf("Produit Reel -> 2 \n");
	printf("Swap entier -> 3 \n");
	printf("Afficher ASCII -> 4 \n");
	printf("Exercice 2E -> 5 \n");
	printf("Division -> 6 \n");

	scanf("%d", &choix);
	switch(choix){
		case 1:
			produitEntier();
			break;
		case 2:
			produitReel();
			break;
		case 3:
			swapEntier();
			break;
		case 4:
			afficherASCII();
			break;
		case 5:
			exercice2E();
			break;
		case 6:
			division();
			break;
		default:
			printf("aucun choix existant");
	}

}

void produitEntier(){
	int entier1, entier2;
	printf("Saisit l'entier 1 : \n");
	scanf("%d", &entier1);
	printf("Saisit l'entier 2 : \n");
	scanf("%d", &entier2);
	printf("Le produit est : %d \n", (entier1*entier2));
}
void produitReel(){
	double entierReel1, entierReel2;
	printf("Saisit l'entier 1 : \n");
	scanf("%lf", &entierReel1);
	printf("Saisit l'entier 2 : \n");
	scanf("%lf", &entierReel2);
	printf("Le produit est : %lf \n", (entierReel1*entierReel2));
}
void swapEntier(){
	int entier1;
	int entier2;
	int temp;
	printf("Saisit l'entier 1 : \n");
	scanf("%d", &entier1);
	printf("Saisit l'entier 2 : \n");
	scanf("%d", &entier2);
	printf("\n");
	printf("AVANT [Entier 1 : %d, Entier 2 : %d] \n", entier1, entier2);
	temp = entier1;
	entier1 = entier2;
	entier2 = temp;
	printf("APRES [Entier 1 : %d, Entier 2 : %d] \n", entier1, entier2);
}
void afficherASCII(){
	char caractere = 'A';
	int i = 0;
	while(i < 26)
	{
		printf("Caractère = %c Code = %i Code Hexa = %x \n", caractere, caractere, caractere);
		caractere++;
		i++;
	}

	char caractere1 = '0';
	int j = 0;
	while(j < 10)
	{
		printf("Caractère = %c Code = %i Code Hexa = %x \n", caractere1, caractere1, caractere1);
		caractere1++;
		j++;
	}
}
void exercice2E(){
	int entierLu;

	printf("Saisit un entier : \n");
	scanf("%d", &entierLu);

	if(entierLu < 1){
		printf("L'entier doit être strictement positive.\n");
		exit(0);
	}else{
		printf("Diviseur [");
		for (int i = 1; i <= entierLu; ++i)
		{
			if(entierLu%i == 0){
				printf(" %d ",i);
			}
		}
		printf("]\n");
	}

}
void division(){
	int entier1;
	int entier2;

	printf("Saisit l'entier 1 : \n");
	scanf("%d", &entier1);
	printf("Saisit l'entier 2 : \n");
	scanf("%d", &entier2);

	if(entier1 > entier2){
		printf("%d / %d = %d \n", entier1, entier2, (entier1/entier2));
		printf("%d mod %d = %d \n", entier1, entier2, (entier1%entier2));

	}else{
		printf("%d / %d = %d \n", entier2, entier1, (entier2/entier1));
		printf("%d mod %d = %d \n", entier2, entier1, (entier2%entier1));
	}

}
