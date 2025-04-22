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
    
    for (int i = 1; i < n; i++) { // Iteramos desde el segundo elemento
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
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Sumamos todos los elementos
    }
    
    return (float)sum / n; // Convertimos a float antes de dividir

}

int countEvens(int arr[], int n)
{
    // Escriba aquí su código
}

int sumFirstLast(int arr[], int n)
{
    // Escriba aquí su código
}

int findMin(int arr[], int n)
{
    // Escriba aquí su código
}

int subtractArraysSum(int a[], int b[], int n)
{
    // Escriba aquí su código
}

int mergeArraysSum(int a[], int n1, int b[], int n2)
{
    // Escriba aquí su código
}

int productArray(int arr[], int n)
{
    // Escriba aquí su código
}

// -------------------------------
// Function that returns multiple values via pointer
// -------------------------------

void calcSumAverage(int arr[], int n, int *sum, float *average)
{
    // Escriba aquí su código
}
