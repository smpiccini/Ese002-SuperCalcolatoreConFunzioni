float somma(float a, float b) {
    float risultato;
    
    risultato=a+b;
    
    return risultato;
}

float sottrazione(float a, float b) {
    float risultato;
    
    risultato=a-b;
    
    return risultato;
}

float prodotto(float a, float b) {
    float risultato;
    
    risultato=a*b;
    
    return risultato;
}

float divisione(float a, float b) {
    float risultato;
    
    risultato=a/b;
    
    return risultato;
}

int quoziente(int a, int b) {
    int risultato;
    
    risultato=a/b;
    
    return risultato;
}

float frazionale(int a, int b) {
    float frazionale;
    
    frazionale=(float)a/(float)b-(int)a/(int)b;
    
    return frazionale;
}

float potenza(float base, int esponente) {
    int risultato,c,pot;
    
    if (esponente==0) {
                risultato=1;
            }
            else {
                if (esponente<0) {
                c=-esponente;
                }
                else {
                c=esponente;
                }
                pot=1;
                risultato=base;
                while (pot<c) {
                    risultato=risultato*base;
                    pot++;
                }
                if (esponente<0) {
                    risultato=1/risultato;
                }
            }
    
    return risultato;
}