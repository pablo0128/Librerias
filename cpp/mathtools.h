/**
 * Libreria con utilidades para operaciones matematicas
 * @author Pablo U.
 * @version 1.0.0
 */




/**
 * Verifica si un numero es primo (divisible unicamente por uno y por si mismo)
 * @param numero El numero a verificar
 * @return True si es primo, False si no lo es
*/
bool esPrimo(int numero) {
    int divisible = 0;
    for (int i = 1; i <= numero; i++) {
        if (numero%i==0) divisible++;
    }
    if (divisible==2) return true;
    else return false;
}