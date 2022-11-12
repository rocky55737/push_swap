#include "push_swap.h"

static long long	check_sign(const char *str)
{
	unsigned long long		ind;
	long long				sign;

	ind = 0;
	sign = 1;
	if (str[ind] == '-')
		sign = -1;
	return (sign);
}

static unsigned long long	my_atoi(const char *str)
{
	unsigned long long	result;
	unsigned long long	ind;

	ind = 0;
	result = 0;
	while (str[ind] >= '0' && str[ind] <= '9')
	{
		result = result * 10;
		if (str[ind] > '0')
			result = result + (str[ind] - '0');
		ind++;
	}
	return (result);
}

int	str_number_is_integer(char *str)
{
	unsigned long long	data;
	long long			sign;

	sign = check_sign(str);
	if (sign == -1)
		str = str++;
	data = my_atoi(str);
	if (sign == 1 && result > 2147483647)
		return (0);
	else if (sign == -1 && result > 2147483648)
		return (0);
	return (1);
}