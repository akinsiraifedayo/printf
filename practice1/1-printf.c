void _printf(const char* frmt, ...)
{
	int* argp =  (int*)&frmt;
	argp += sizeof(frmt) / sizeof(int);
	argp++;
	argp++;
	argp+2;

}

int main()
{
	_printf("Test %d %u %llx %i", 1, 2, 3ll, 4);
}
