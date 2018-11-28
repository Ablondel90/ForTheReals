int   ft_str_is_alpha(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if ((str[i] <= 'z' && str[i] >= 'a')
        || (str[i] <= 'Z' && str[i] >= 'A'))
      i++;
    else
      break ;
  }
  if (str[i] == '\0')
    return (1);
  else
    return (0);
}
