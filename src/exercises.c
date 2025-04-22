#include "exercises.h"

// -------------------------------
// Functions that return a single value
// -------------------------------

int calcSum(int arr[], int n)
{
    int sum = 0; // Inicializamos la suma en 0
    
    for (int i = 0; i < n; i++) // Iteramos por el arreglo
    { 
        sum += arr[i]; // Sumamos cada elemento al total
    }
    
    return sum; // Retornamos la suma total
}

int findMax(int arr[], int n)
{
    int max = arr[0]; // Inicializamos max con el primer elemento del arreglo
    
    for (int i = 1; i < n; i++) 
    { // Iteramos desde el segundo elemento
        if (arr[i] > max) { // Si encontramos un valor mayor
            max = arr[i]; // Actualizamos max
        }
    }
    
    return max; // Retornamos el valor máximo encontrado

}

float calcAverage(int arr[], int n)
{

    if (n <= 0) return 0.0f; // Evitar división por cero
    
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i]; // Sumamos todos los elementos
    }
    
    return (float)sum / n; // Convertimos a float antes de dividir

}

int countEvens(int arr[], int n)
{
    
    int count = 0; 
        
    for (int i = 0; i < n; i++) 
    {
         if (arr[i] % 2 == 0) 
         { 
            count++; 
         }
    }
        
    return count; 
    
}

int sumFirstLast(int arr[], int n)
{
     
    if (n <= 0) return 0;  // Si el arreglo está vacío, retorna 0
    return arr[0] + arr[n - 1];  // Suma el primero y el último
    
}

int findMin(int arr[], int n)
{
    
    if (n <= 0) return 0;  // Si el arreglo está vacio retorna 0
        
    int min = arr[0];  // Suponemos que el primer elemento es el menor
        
    for (int i = 1; i < n; i++) {  // Recorremos desde el segundo elemento
        if (arr[i] < min) {  // Si encontramos un valor menor
            min = arr[i];    // Actualizamos el menor
        }
    }
        
    return min;  // Retornamos el valor encontrado
    
}

int subtractArraysSum(int a[], int b[], int n)
{
    
    int total = 0;
        
    for (int i = 0; i < n; i++) {
        total += (a[i] - b[i]);  // Suma la diferencia de cada posición
    }
        
    return total;
    
}

int mergeArraysSum(int a[], int n1, int b[], int n2)
{
    
        int total = 0;
    
        // Suma los elementos del primer arreglo
        for (int i = 0; i < n1; i++) 
        {
            total += a[i];
        }
    
        // Suma los elementos del segundo arreglo
        for (int i = 0; i < n2; i++) 
        {
            total += b[i];
        }
    
        return total;
    
}

int productArray(int arr[], int n)
{
    int product = 1;  // Inicializamos con 1 (elemento neutro del producto)
    
    for (int i = 0; i < n; i++) {
        product *= arr[i];  // Multiplicamos cada elemento
    }
    
    return product;
    
}

// -------------------------------
// Function that returns multiple values via pointer
// -------------------------------

void calcSumAverage(int arr[], int n, int *sum, float *average)
{
    // Escriba aquí su código
}
