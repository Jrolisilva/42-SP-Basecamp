#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(int x, char first, char second, char third);

int 	main (void)
{
	rush(5, 5);
}

void rush (int x, int y)	
{	
	int	start;
	int	start_y;

	start_y = y;
	start = x;
	while(y > 0 )
	{ 
		if(x > 0 && y > 0)
		{
		if( y == start_y)
		{
			ft_putchar(x, '/', '*', '\\');				
		}
		}
		if( start_y != y && y != 1)
		{
			ft_putchar(x, '*', ' ', '*' );
		}
		if( start_y > 1 && y == 1)
		{
			ft_putchar(x, '\\', '*', '/');
		}
		y--;
	}
}

void	ft_putchar(int x, char first, char second, char third)

{
	write(1, &first, 1);
	while(x > 2 )
	{	
		write(1, &second, 1);
			x--;
	}
	if(x > 1)
		{
			write(1, &third, 1);			
		}
	write(1, "\n", 1);
}
