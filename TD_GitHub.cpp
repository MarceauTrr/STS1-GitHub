//Fonctions réalisées par l'étudiant 1 :

// Retourne vrai si l'âge est >= 18
bool estMajeur(int age) {
    if (age >= 18) {
        return true;
    } else {
        return false;
    }
}

int exposant(int nbre, int exp) {
    // Si l'exposant est supérieur à 99, on retourne -1
    if (exp > 99) {
        return -1;
    }
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

int plusGrand(int a, int b, int c) {
    // Vérification si deux nombres sont égaux
    if (a == b || a == c || b == c) {
        // Retourne le plus petit
        int min = a;
        if (b < min) min = b;
        if (c < min) min = c;
        return min;
    } else {
        // Logique originale : retourne le plus grand
        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        return max;
    }
}

//Fonctions réalisées par l'étudiant 2 :

bool estPair(int nb){
	return (nb % 2 == 0 || nb % 7 == 0);
}

int sommeNombre(int nb){
	int somme = 0;
    for (int i = 1; i <= nb; i++) {
        somme += i;
    }
    return somme + nb; // Ajout du paramètre à la fin
}

float salaireNet(int salaire, float chargeSalariale, float prime) {
 // On convertit les pourcentages en multiplicateurs
 // Exemple : 23% de charge -> on garde (100 - 23) / 100 = 0.77
 float netBase = salaire * ((100.0f - chargeSalariale) / 100.0f); 
    
 // Exemple : 12% de prime -> on multiplie par (100 + 12) / 100 = 1.12
 float salaireFinal = netBase * ((100.0f + prime) / 100.0f)
 
    return salaireFinal;
}

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

// Retourne vrai si le nombre est impair ou multiple de 8
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

// Calcule la moyenne de trois nombres
float moyenne(int nb1, int nb2, int nb3) 
{
    float somme = nb1 + nb2 + nb3;
    return somme / 3; 
}

// Applique une réduction en pourcentage sur un prix et ajoute la TVA de 5.5%
float reduction(int prix, int reduc, float tvaValeur) 
{
    
    float decimalReduc = reduc / 100; 
    float prixApresRemise = prix * (1.0 - decimalReduc);
    // On applique la TVA passée en paramètre (ex: 1.055 pour 5.5%)
    return prixApresRemise * (1.0f + (tvaValeur / 100.0f));
}

// Retourne le nombre médian parmi trois nombres
int nombreMedian(int a, int b, int c) 
{
   
    if ((a >= b && a <= c) || (a <= b && a >= c)) return a;

    if ((b >= a && b <= c) || (b <= a && b >= c)) return b;
    
    return c;
}