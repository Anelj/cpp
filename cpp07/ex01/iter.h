#ifndef ITER_H
# define ITER_H

template <typename T>
void iter(T *ar, int len, void (*f)(T &el))
{
	for (int i = 0; i < len; i++)
		f(ar[i]);
}

#endif