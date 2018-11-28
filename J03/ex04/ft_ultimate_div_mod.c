void  ft_ultimate_div_mod(int *a, int *b)
{
  int c;

  c = *a;
  *a = c / *b;
  *b = c % *b;
}
