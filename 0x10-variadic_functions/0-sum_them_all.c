sum_them_all(const unsigned int n, ...)
{
	int k, l, result;
	if (n == 0)
	{
		return (0);
	}
	va_list mynumb;
	va_start(mynumb, n);

	k = va_arg(mynumb, int);
	l = va_arg(mynumb, int);

	result = k + l;
	va_end(mynumb);
	return (result);
}
