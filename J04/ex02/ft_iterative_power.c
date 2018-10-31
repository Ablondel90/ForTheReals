int ft_iterative_power(int nb, int power)
{
  int i;
  int j;

  i = nb;
  j = 1;
  if (power == 0)
    return (1);
  else if (power < 0)
    return (0);
  while (j < power)
  {
    j++;
    nb = i * nb;
  }
  return (nb);
}
