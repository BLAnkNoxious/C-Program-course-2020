# include <stdio.h>
int main ( )
{
int x = 6, y = 2, z = 10, w;
w = ++ x - y ++ ;
printf ("\nw = %d x = %d y = %d\n", w, x, y);
w = ++ x % ++ y % ++ z % w -- ;
printf ("\nw = %d x = %d y = %d z = %d\n", w, x, y, z);
w = ++ z % -- y;
printf ("\nw = %d y = %d z = %d\n", w, y, z);
w = ++ w/ ++x/y -- ;
printf ("\nw = %d x = %d y = %d\n", w, x, y);
return 0;
}