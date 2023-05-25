// -----Group members -----
/*
Abdoul-Raouf Mounkeila
Kamardine Honore* Assaad
Mariama Gogé 
Kindo Banyoua Soaliyé Albert
Oumoulhair
*/

#include <stdio.h>

int squareRoot(int n);

int main(){
	
	printf("%d\n", squareRoot(11));
	
	return 0;
}

int squareRoot(int n){
	
	int result;
	
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
	
	return result;
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
