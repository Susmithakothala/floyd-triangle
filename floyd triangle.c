# include <stdio .h>
main ()
{
int n, i, c, a = 1;
printf (" Enter number of rows of Floyd 's triangle \n");
scanf ("%d", &n);
for (i = 1; i <= n; i++)
{
for (c = 1; c <= i; c++)
{
printf ("%d",a);
a ++;
}
printf ("\n");
}
}
