# include <stdio.h>
int main ()
{
int x = 1, y = - 2, z = 3, w = - 10, s = 20, t = 30;
x += (y -= (z *= (w /= (s %= t))));
printf ("\nx = %d y = %d z = %d w = %d\n s = %d t = %d\n", x, y, z, w, s, t);
//t += s -= w *= z *= y p %= x;//
printf ("\nx = %d y = %d z = %d\n w = %d s = %d t = %d\n", x, y, z, w, s, t);
}