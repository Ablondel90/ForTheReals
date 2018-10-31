int ft_sqrt(int nb)
{
  int i;

  i = 0;
  while (i <= 46341)
  {
    if ((i * i) == nb)
    {
      return (i);
    }
    i++;
  }
  return (0);
}
