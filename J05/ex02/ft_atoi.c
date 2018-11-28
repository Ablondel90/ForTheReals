int ft_atoi(char *str)
{
  int nb;
  int i;
  int neg;

  i = 0;
  nb = 0;
  neg = 1;
  while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
    i++;
  if (str[i] == '-' || str[i] == '+')
  {
    if(str[i] == '-')
      neg = -1;
    i++;
  }
  while (str[i] >= '0' && str[i] <= '9')
    nb = (nb * 10) + (str[i++] - '0');
  return (neg * nb);
}
