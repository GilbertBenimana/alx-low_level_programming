#include <stdio.h>

/**
 * main -prints the name of the file it was compiled from
 * Description: prints the name of the file it was compiled from
 * Return: return 0 for success
 */

int main(void)
{
    printf("%s\n", __FILE__);
    return (0);
}
