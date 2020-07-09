void 	ft_putchar(char c);

void 	ft_print_numbers(void){
	int num;
	int show;
	num = 0;
	while (num <= 9){
		show = 48 + num++;
		ft_putchar(show);
	}
}
