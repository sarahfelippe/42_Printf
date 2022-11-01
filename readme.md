int ft_printf(const char *format, ...)

1. read string 'format' added as an argument to the function
2. find:
	- interate 'format'
	- find '%' and then the character at the immediate right
		- if the following characters at the right are found, call another functions based on argument types
			- 'c' 's' 'p' 'd' 'i' 'u' 'x' 'X' '%'
		- if the characters above are not found at the right (regardless if there are arguments in the function or not), skip
3. Function returns the number of characters printed.
