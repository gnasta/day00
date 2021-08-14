	#include <unistd.h>
void ft_putchar (char c)
{
write(1, &c, 1);
}
	
void ft_print_alphabet ()
{	
	for (int i=0; i<26; i++)
	{
	char с ='a' + i;
	ft_putchar (с);
	}
}
void main ()
{
	ft_print_alphabet();
}
