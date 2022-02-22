// CAD to USD converter


#include <stdio.h>
#define DIFF 0.78277

int main()
{
    float usd;

    printf("How many canadian dollars?\n");
    scanf(" %f", &usd);

    float cad = usd * DIFF;

    printf("%.2f US dollars is about %.2f canadian dollars.\n\n", usd, cad);

    return 0;

}