#include <stdio.h>

long combinations(int n, int k);
long permutations(int n, int k);
long factorial(int n);

int main(void)
{
    // Get values.
    int objects, choosen;
    printf("Enter objects: ");
    scanf("%i", &objects);
    printf("Enter choosen: ");
    scanf("%i", &choosen);

    // Print results.
    printf("\n");
    printf("Combinations: %li\n", combinations(objects, choosen));
    printf("Permutations: %li\n", permutations(objects, choosen));

    return 0;
}

long combinations(int n, int k)
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}

long permutations(int n, int k)
{
    return factorial(n) / factorial(n - k);
}

long factorial(int n)
{
    long result = 1;
    while ( n > 0 ) {
        result *= n--;
    }
    return result;
}