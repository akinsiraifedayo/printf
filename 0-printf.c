#include "main.h"
/**
 * _printf - functions like a printf
 *
 * @format: What to print
 * Description: This a function similar to printf that prints
 * Return: 0
 */

int _printf(const char *format, ...)
{
	va_list func;
	int i = 0, num, rem, bin = 0, mon = 1;
	char *c_temp;

	va_start(func, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[++i])
			{
				case 'c':
					_putchar((char) va_arg(func, int));
					break;
				case 's':
					c_temp = va_arg(func, char*);
					while (*c_temp)
					{
						_putchar(*c_temp++);
					}
					break;
				case '%':
					_putchar('%');
					break;
				case 'i':
					num = va_arg(func, int);
						print_num(num);
					break;
				case 'd':
					num = va_arg(func, int);
						print_num(num);
					break;
				case 'b':
				num = va_arg(func, int);
					if (num == 0)
						_putchar(num);
					if (num > 0)
					{
					while (num != 0)
					{
					rem = num % 2;
					num /= 2;
					bin += rem * mon;
					mon *= 10;
					}
					}
				print_num(bin);
				break;



			}
			++i;
			continue;



		}
		_putchar(format[i]);
		i++;
	}
	va_end(func);
	return (i);
}
