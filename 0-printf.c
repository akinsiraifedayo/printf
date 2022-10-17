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
	int i = 0;
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
