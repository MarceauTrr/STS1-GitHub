//Fonctions réalisées par l'étudiant 1 :

// Retourne vrai si l'âge est >= 18
bool estMajeur(int age) {
    if (age >= 18) {
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

bool estPair(int nb){
	
}

int sommeNombre(int nb){
	
}

float salaireNet(int salaire){
	
}

int plusPetit(int a, int b, int c){
	
}








//Fonctions réalisées par l'étudiant 3 :
