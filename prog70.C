//decimal to octal
#include <stdio.h>
int main()
{
    int octal = 0, i = 1;
    int deci,dm;
    printf("Enter a decimal number: ");
    scanf("%d", &deci);
    dm = deci;
    while (deci != 0)
    {
        octal += (deci % 8) * i;
        deci /= 8;
        i *= 10;
    }
    printf("%d in decimal = %d in octal", dm, octal);

    return 0;
}
