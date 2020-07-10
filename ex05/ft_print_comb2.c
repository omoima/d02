#include <unistd.h>

void 	ft_putchar(char c){
	write(1, &c, 1);
}

void ft_out(char a, char b, char c, char d){
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');

	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void){
	char a;
	char b;
	char c;
	char d;
	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while(a <= '9'){
		while (b <= '9'){
			while(c <= '9'){
				while(d <= '9'){
					if(b <d && a<=c){
						ft_out(a,b,c,d);
					}
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

int 	main(void){
	ft_print_comb2();
	return(0);
}
