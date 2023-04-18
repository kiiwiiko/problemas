#include <stdio.h>
#include <stdbool.h>
int primo(int n)
{
    bool esPrimo = true;
     for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            esPrimo = false;
            break;
        }
    }
    return esPrimo;
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &num);

    int res = primo(num);
    
        if (res)
    {
        printf("%d es primo.\n", num);
    }
    else
    {
        printf("%d no es primo.\n", num);
    }
    return 0;

    }
