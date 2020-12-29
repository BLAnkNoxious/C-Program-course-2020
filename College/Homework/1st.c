# include <stdio.h>
int main ()
{
int x, y, z;
printf ("\nx = %d\n", x = (y = 2 * (z = 12/10)) % 5);
printf ("\nx = %d\n", 2 * (x = y % (z = 2 * (x = 5))));
printf ("\nx = %d\n", x = 2 * (x = z % (y = x = 3 *
(z = 10% (x = 3 * (y = 12/ (z = 5)))))));
}