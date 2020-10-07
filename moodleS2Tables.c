#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAILLE 5

int main () 
{
	int i;
	int val;
	int tab[TAILLE];
	bool estCroissant = true;
	bool estConstant = true;
	bool estDecroissant = true;
	bool estQuelconque = false;
	

	// Initialisation du tableau
	for (i=0; i<TAILLE; i++) {
	    scanf("%d", &val);
		tab[i] = val;
	}

	// Analyse du tableau
	int tmp = tab[0];
	int i = 0;
    while(TAILLE!= i)
        if(tab[i] > tmp){
            tmp = tab[i]; 
        }else{
        	estCroissant = false;
        }
        if(tab[i] < tmp){
        	tmp = tab[i];
        }else{
        	estDecroissant = false;
        }
        if(tab[i] == tmp){

        }else{
        	estConstant = false;
        }
	}
	if(i == TAILLE){
		if(estCroissant){
    		printf("Le tableau est croissant");
    		exit(0);
		}
		if(estConstant){
    		printf("Le tableau est constant");
    		exit(0);
		if(estDecroissant){
    		printf("Le tableau est decroissant");
    		exit(0);
		}else{
			printf("Le tableau est quelconque");
			exit(0);
		}
	}
	
	




	

	exit(0);
}
