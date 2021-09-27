#include <iostream>
#include <string.h>
#include <string>

void	printChar(char c)
{
	if ( c == 0 || !isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
}

void	printInt(int i)
{
	std::cout << "int: " << i << std::endl;
}

void	printFloat(float f)
{
	if (f - int(f) == (float)0)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
}

void	printDouble(double d)
{
	if (d - static_cast<int>(d) != (float)0)
		std::cout << "double: " << d << std::endl;
	else
		std::cout << "double: " << d << ".0" << std::endl;
}

int main(int argc, char const *argv[])
{
	int		intScalar;
	float	floatScalar;
	double	doubleScalar;
	char	charScalar = '\0';
	std::string	literal;

	if (argc != 2)
	{
		std::cerr << "Too much arguments!\n";
		return 1;
	}
	if (strlen(argv[1]) == 1 && ((argv[1][0] < 48 && argv[1][0] >= 32) || (argv[1][0] > 57 && argv[1][0] < 127)))
	{
		charScalar = argv[1][0];
		printChar(charScalar);
		printInt(static_cast<int>(charScalar));
		printFloat(static_cast<float>(charScalar));
		printDouble(static_cast<double>(charScalar));
		return 0;
	}
	literal = std::string(argv[1]);
	if (literal.find_last_of("f") != std::string::npos && literal.compare("+inf") && literal.compare("-inf"))
	{
		if (!literal.compare("+inff") || !literal.compare("-inff") || !literal.compare("nanf"))
		{
			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: " << literal << std::endl;
			std::cout << "double: " << literal.substr(0, literal.size() - 1);
			return 0;
		}
		try
		{
			floatScalar = std::stof(literal);
		}
		catch (const std::exception &e)
		{
			std::cout << "Can't convert: beyond limits of type!\n";
			return 0;
		}
		if (floatScalar < 0 || floatScalar > 127)
			std::cout << "char: impossible\n";
		else
			printChar(static_cast<char>(floatScalar));
		if (floatScalar > static_cast<float>(INT32_MAX) || floatScalar < INT32_MIN)
			std::cout << "int: impossible\n";
		else
			printInt(static_cast<int>(floatScalar));
		printFloat(static_cast<float>(floatScalar));
		printDouble(static_cast<double>(floatScalar));
	}
	else if (literal.find('.') != std::string::npos || !literal.compare("+inf") || !literal.compare("-inf") || !literal.compare("nan"))
	{
		if (!literal.compare("+inf") || !literal.compare("-inf") || !literal.compare("nan"))
		{
			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: " << literal + 'f' << std::endl;
			std::cout << "double: " << literal;
			return 0;
		}
		try
		{
			doubleScalar = std::stod(literal);
		}
		catch (const std::exception &e)
		{
			std::cout << "Can't convert: beyond limits of type!\n";
			return 0;
		}
		if (doubleScalar < 0 || doubleScalar > 127)
			std::cout << "char: impossible\n";
		else
			printChar(static_cast<char>(doubleScalar));
		if (doubleScalar > INT32_MAX || doubleScalar < INT32_MIN)
			std::cout << "int: impossible\n";
		else
			printInt(static_cast<int>(doubleScalar));
		if (doubleScalar > __FLT_MAX__ || doubleScalar < __FLT_MIN__)
			std::cout << "float: impossible\n";
		else
			printFloat(static_cast<float>(doubleScalar));
		printDouble(static_cast<double>(doubleScalar));
	}
	else
	{
		try
		{
			intScalar = std::stoi(literal);
		}
		catch (const std::exception &e)
		{
			std::cout << "Can't convert: beyond limits of type!\n";
			return 0;
		}
		if (intScalar < 0 || intScalar > 127)
			std::cout << "char: impossible\n";
		else
			printChar(static_cast<char>(intScalar));
		printInt(static_cast<int>(intScalar));
		printFloat(static_cast<float>(intScalar));
		printDouble(static_cast<double>(intScalar));
	}
	return 0;
}
