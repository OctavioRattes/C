#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Tabuada
int main()
{
    setlocale(LC_ALL, "portuguese");
    int n, i;
    printf("Digite um número:");
    scanf("%d", &n);
    printf("Tabuada do %d\n", n);
    for (i=1; i<=10; i=i+1)
    {
        printf("%2d x %2d = %2d\n", i, n, i*n);
    }
    return 0;
}
