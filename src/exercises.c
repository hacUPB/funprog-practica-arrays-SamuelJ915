#include "exercises.h"

// -------------------------------
// Functions that return a single value
// -------------------------------

int calcSum(int arr[], int n)
{
    int sum = 0; // Inicializamos la suma en 0
    
    for (int i = 0; i < n; i++) { // Iteramos por el arreglo
        sum += arr[i]; // Sumamos cada elemento al total
    }
    
    return sum; // Retornamos la suma total
}

int findMax(int arr[], int n)
{
    // Escriba aquí su código
}

float calcAverage(int arr[], int n)
{
    // Escriba aquí su código
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
