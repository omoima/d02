void	ft_putchar(char c);

void 	ft_out(char a, char b, char c){
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void){
	char a = '0';
	char b = '0';
	char c = '0';

	while(a <= '9'){
		while(b <= '9'){
			while(c <= '9'){
				if (a<b && b<c){
					ft_out(a, b, c);
				}
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}
