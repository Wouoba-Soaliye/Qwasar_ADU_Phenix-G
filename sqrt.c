#include <stdio.h>

int main(){
	
	int n;
	int result;
	
		//Description du projet
	printf("Ce programme va vous permettre de calculer la racine carree arrondie au min d'un nombre n.\n\n");
	    //Recuperation du nombre du user
	printf("Entrez le nombre entier dont vous cherchez la racine carree: ");
	scanf("%d", &n);
	
	int i; //Notre variabble de parcours de la boucle for
	
		//On initialise result pour l'utiliser comme control
	result = -1;
	    //Variable de control de la boucle while
	int my = 1;
	
	while(my == 1){
		
		for(i=0; i<=n; i++){
			//Si le carre* d'un 'i' correspond a notre nombre, alors le resultat est le i.
			if(i*i == n){
				result = i;
				my = 0;
			}
		}
		
		//Si le resultat reste inchange*, on diminue le nombre
		if(result == -1){
			n -= 1;
		}
	}
	 	//Afficher le resultat de l'operation
	printf("Le resultat est: %d", result);
	
	return 0;
}



/*
	int n = 81;
	int result;
	float temp;
	
	int i, j;
	
	result = 1;
	
	for(i=1; i<=n; i++){
		if(i*i == n){
			result *= i;
		}
		
	}
*/
