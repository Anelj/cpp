#include <iostream>
#include <sstream>
#include <cstring>
#include "strInfo.h"
#include <limits>
#include <iomanip>

t_strInfo fillStrInfo(char *string);
int defineType(t_strInfo sI);
void fromPseudoLit(char *s);


int impossibleAll()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
	return 0;
}

void fromChar(char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void putChar(int i)
{
	if (i >= 20 && i <= 126)
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	else if (i >= 0 && i <= 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
}

void fromInt(int i)
{
	putChar(i);
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) <<
	static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1)
	<< static_cast<double>(i) << std::endl;
}

void putCharInt(double d)
{
	int i;

	if (d >= static_cast<double>(std::numeric_limits<int>::min()) &&
		d <= static_cast<double >(std::numeric_limits<int>::max()))
	{
		i = static_cast<int>(d);
		putChar(i);
		std::cout << "int: " << i << std::endl;
	} else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
}

void fromFloat(float f, int nbrsAfterPoint)
{
	putCharInt(static_cast<double>(f));
	if (nbrsAfterPoint == 0)
		nbrsAfterPoint = 1;
	std::cout << "float: "<< std::fixed << std::setprecision(nbrsAfterPoint) << f <<
	"f\n";
	std::cout << "double: " << std::fixed << std::setprecision(nbrsAfterPoint)
	<< static_cast<double>(f) << std::endl;
}

void fromDouble(double d, int nbrsAfterPoint)
{
	putCharInt(d);
	if (nbrsAfterPoint == 0)
		nbrsAfterPoint = 1;
	if (d >= static_cast<double>(std::numeric_limits<float>::min()) &&
		d <= static_cast<double >(std::numeric_limits<float>::max()))
	{
		std::cout << "float: "<< std::fixed << std::setprecision(nbrsAfterPoint)
		<< static_cast<float>(d) << "f\n";
	} else
	{
		std::cout << "float: impossible" << std::endl;
	}
	std::cout << "double: " << std::fixed << std::setprecision(nbrsAfterPoint)
			  << d << std::endl;
}

int main(int argc, char *argv[])
{
	std::stringstream ss;
	double d;
	float f;
	int   i;
	char  c;
	int	type;
	t_strInfo sI;

	if (argc != 2)
	{
		std::cout << "Amount of arguments is wrong.\n";
		return 1;
	}
	sI = fillStrInfo(argv[1]);
	type = defineType(sI);
	switch (type)
	{
		case 1:
			ss << argv[1];
			ss >> c;
			fromChar(c);
			break;
		case 2:
			ss << argv[1];
			if (!(ss >> i))
				return impossibleAll();
			fromInt(i);
			break;
		case 3:
			argv[1][strlen(argv[1]) - 1] = '\0';
			ss << argv[1];
			if (!(ss >> f))
				return impossibleAll();
			fromFloat(f, sI.nbrAfterPoint);
			break;
		case 4:
			ss << argv[1];
			if (!(ss >> d))
				return impossibleAll();
			fromDouble(d, sI.nbrAfterPoint);
			break;
		case 0:
			ss << argv[1];
			fromPseudoLit(argv[1]);
			break;
		case -1:
			return impossibleAll();
	}
	return 0;
}

void fromPseudoLit(char *s)
{
	std::string str(s);
	size_t len = str.length();

	if (str != "+inf" && str != "-inf" && str != "+inff" && str != "-inff"
		&& str != "nan" && str != "nanf")
	{
		impossibleAll();
		return;
	}
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (s[len - 1] == 'f' && s[len - 2] == 'f')
		s[len - 1] = '\0';
	std::cout << "float: " << s << "f" << std::endl;
	std::cout << "double: " << s << std::endl;
}

int defineType(t_strInfo sI)
{
	if (sI.unprint || !sI.len)
		return -1;
	if (sI.len == 1 && (sI.chars || sI.points || sI.isSpec || sI.isFEnd))
		return 1;
	if (!sI.nbrs)
		return 0;
	if (!sI.points && !sI.isFEnd && !sI.chars)
		return 2;
	if (sI.len >= 3 && sI.points == 1 && sI.isFEnd && !sI.chars)
		return 3;
	if (sI.len >= 2 && sI.points == 1 && !sI.isFEnd && !sI.chars)
		return 4;
	return -1;
}

t_strInfo fillStrInfo(char *s)
{
	std::string str(s);
	t_strInfo 	sI;

	bzero(&sI, sizeof(t_strInfo));
	sI.len = str.length();
	if (*s && s[sI.len - 1] == 'f')
	{
		sI.isFEnd = 1;
		s[sI.len - 1] = '\0';
	}
	if (*s && (s[0] == '-' || s[0] == '+'))
	{
		sI.isSpec++;
		s++;
	}
	while (*s)
	{
		if (*s == '.')
			sI.points++;
		else if (*s >= 20 && *s <= 126)
		{
			if (*s >= 48 && *s <= 57)
			{
				sI.nbrs++;
				if (sI.points)
					sI.nbrAfterPoint++;
			}
			else
				sI.chars++;
		} else
			sI.unprint++;
		s++;
	}
	if (sI.isFEnd)
		*s = 'f';
	return sI;
}
