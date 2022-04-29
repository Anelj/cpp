#ifndef WHATEVER_H
# define WHATEVER_H

template <typename T>
void swap(T &a, T &b)
{
	T a1 = a;
	a = b;
	b = a1;
}

template <typename T>
T &min(T &a, T &b)
{
	return (a < b ? a : b);
}

template <typename T>
T &max(T &a, T &b)
{
	return (a > b ? a : b);
}



#endif
