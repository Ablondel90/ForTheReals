char is_low(char c)
{
  if((c >= 'a') && (c <= 'z'))
    return(1);
  return(0);
}
char is_up(char c)
{
  if((c >= 'A') && (c <= 'Z'))
    return(1);
  return(0);
}
int is_nb(char c)
{
  if((c >= 'a') && (c <= 'z'))
    return(1);
  if((c >= 'A') && (c <= 'Z'))
    return(1);
  if((c >= '0') && (c <= '9'))
    return(1);
  else
    return(0);
}
char  *ft_strcapitalize(char *str)
{
  int i;
  int uln;

  i = 0;
  uln = 0;
  while(str[i] != '\0')
  {
    if ((is_low(str[i])) && (uln == 0))
      str[i] = str[i] - 32;
    else if ((is_up(str[i])) && (uln == 1))
      str[i] = str[i] + 32;
    else if (!(is_nb(str[i])))
      uln = 0;
    else
      uln = 1;
    i++;
  }
  return(str);
}
