#include <string>
#include <iostream>
#include <fstream>

int	checkArgs(std::string s1, std::string s2, std::string s3)
{
	if (s1.size() < 1 || s2.size() < 1 || s3.size() < 1)
		return (1);
	return (0);
}

int	replace(char **argv)
{
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (checkArgs(filename, s1, s2))
	{
		std::cout << "ERR:wRoNg ArGs" << std::endl;
		return (1);
	}
	filename += ".replace";
	std::ifstream Read(argv[1]); //READ
	if (Read == 0)
	{
		std::cout << "ERR:InVaLiD FiLe" << std::endl;
		return (1);
	}
	std::ofstream Write(filename.c_str()); //WRITE
	std::string copy;
	int	i = 1;
	int s1LEN = s1.size();
	int s2LEN = s2.size();
	while (getline(Read, copy))
	{
		int	x = -1;
		while (copy[++x])
		{
			size_t found = copy.find(s1, x);
			if (found != std::string::npos)
			{
				copy.erase(found, s1LEN);
				copy.insert(found, s2);
				x = found + s2LEN - 1;
			}
		}
		Write << copy, Write << '\n';
		i++;
	}

	Read.close();
	Write.close();
	return (0);
}

int	main (int argc, char **argv)
{
	if (argc == 4)
		replace(argv);
	else
		std::cout << "ERR:aRgS PrOb" << std::endl;

	return (0);
}
