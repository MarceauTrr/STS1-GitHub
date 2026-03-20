//Fonctions réalisées par l'étudiant 1 :

// Retourne vrai si l'âge est >= 18
bool estMajeur(int age) {
   // Retourne vrai si l'age est >= 18 OU si l'age est négatif (< 0)
    if (age >= 18 || age < 0) {
        return true;
    } else {
        return false;
    }
}

// Calcule nombre^exposant sans utiliser pow()
int exposant(int nbre, int exp) {
    int result = 1;
    for (int i = 0; i < exp; ++i) {
        result = result * nbre;
    }
    return result;
}

// Applique 19.6% si prix >= 1000, sinon 5.5%
float TVA(int prix) {
    if (prix >= 1000) {
        return prix * 1.196f;
    } else {
        return prix * 1.055f;
    }
}

// Retourne le plus grand des trois nombres
int plusGrand(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

//Fonctions réalisées par l'étudiant 2 :

//Retourne vrai si le nombre est pair, faux sinon
bool estPair(int nb){
	return (nb % 2 == 0);
}

//Calcule la somme du nombre et de tous les entiers précédents
int sommeNombre(int nb){
	int somme = 0;
    for (int i = 1; i <= nb; i++) {
        somme += i;
    }
    return somme;
}

//Calcul du salaire net après charges (23%) et prime (12% du net)
float salaireNet(int salaire){
	// On enlève 23% de charges sociales
    float netBase = salaire * 0.77f; 
    // On ajoute 12% de prime sur le montant net obtenu
    float salaireFinal = netBase * 1.12f;
    
    return salaireFinal;
}

//Retourne le plus petit des trois nombres
int plusPetit(int a, int b, int c){
	int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
	
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
    float resultat = (nb1 + nb2 + nb3) / 3.0f;
    
    // Si le résultat est négatif, on retourne -1
    if (resultat < 0) {
        return -1.0f;
    }
    
    return resultat;
}
float reduction(int prix, int reduc) 
{
    
    float decimalReduc = reduc / 100.0; 
    float prixApresRemise = prix * (1.0 - decimalReduc);
    
    return prixApresRemise * 1.055;
}
int nombreMedian(int a, int b, int c) 
{
   
   // Si au moins deux nombres sont égaux, on retourne 999
    if (a == b || a == c || b == c) {
        return 999;
    }

    // Logique habituelle pour trouver le médian
    if ((a >= b && a <= c) || (a <= b && a >= c)) return a;
    if ((b >= a && b <= c) || (b <= a && b >= c)) return b;
    return c;
}