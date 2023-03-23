#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - positive_or_negative
 * Description: Print if the number is positive or negative
 * i: is positive or negative
 */
 /* i is positive or negative will be printed*/
void positive_or_negative(int i)
{
/* i is positive */
if (i > 0)
{
printf("%d is positive\n", i);
}
/* i is zero */
else if (i == 0)
{
printf("%d is zero\n", i);
}
/* i is negative */
else
{
printf("%d is negative\n", i);
}
}
