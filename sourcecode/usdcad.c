// USD to CAD converter


#include <stdio.h>
#define DIFF 1.2775144

int main()
{
    float cad;

    printf("How many US dollars?\n");
    scanf(" %f", &cad);

    float usd = cad * DIFF;

    printf("%.2f canadian dollars is about %.2f US dollars.\n\n", cad, usd);

    return 0;

}