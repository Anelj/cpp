#ifndef EASYFIND_H
#define EASYFIND_H

#include <vector>

template < class T>
typename T::iterator easyfind(T cont, int i)
{
	for (typename T::iterator it = cont.begin(); it != cont.end(); it++)
		if (*it == i)
			return it;
	throw std::exception();
}

#endif
