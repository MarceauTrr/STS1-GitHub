//Fonctions réalisées par l'étudiant 1 :

bool estMajeur(int age) {
    if (age >= 18) {
        return true;
    } else {
        return false;
    }
}

int exposant(int nbre, int exp) {
    int result = 1;
    for (int i = 0; i < exp; ++i) {
        result = result * nbre;
    }
    return result;
}

//Fonctions réalisées par l'étudiant 2 :

bool estPair(int nb){
	
}

int sommeNombre(int nb){
	
}

float salaireNet(int salaire){
	
}

int plusPetit(int a, int b, int c){
	
}








//Fonctions réalisées par l'étudiant 3 :

bool estmpaire(int nb) 
{
    
    if ((nb % 2 != 0) || (nb % 8 == 0)) 
	{
        return true;
    }
	else 
	{
        return false;
    }
}


float moyenne(int nb1, int nb2, int nb3) 
{
    float somme = nb1 + nb2 + nb3;
    return somme / 3; 
}


float reduction(int prix, int reduc) 
{
    
    float decimalReduc = reduc / 100; 
    float prixApresRemise = prix * (1.0 - decimalReduc);
    
    return prixApresRemise * 1.055;
}


int nombreMedian(int a, int b, int c) 
{
   
    if ((a >= b && a <= c) || (a <= b && a >= c)) return a;

    if ((b >= a && b <= c) || (b <= a && b >= c)) return b;
    
    return c;
}