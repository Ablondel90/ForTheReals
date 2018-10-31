int ft_iterative_factorial(int nb)
{
  int i;

  i = nb;
  if (nb == 0)
    return (1);
  else if ((nb < 0) || (nb > 12))
    return (0);
  while (i >= 2)
  {
    i--;
    nb = nb * i;
  }
  return (i);
}
