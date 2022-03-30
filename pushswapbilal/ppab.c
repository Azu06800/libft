void pab(char *a, char *b)
{
	while (*a)
		a++;
	while (*b)
		b++;
	*++b = *++a;
	*a = '\0';
}