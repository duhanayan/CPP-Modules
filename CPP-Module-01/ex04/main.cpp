#include "replace.h"

void checkTmp(char **av, string tmp)
{
	std::ofstream file2;
	string s1 = av[2];
	string s2 = av[3];
	char buffer;
	file2.open(string(av[1]) + ".replace");
	int index;
	int i = 0;
	while (tmp[i])
	{
		index = tmp.find(s1, i);
		if (i == index)
		{
			file2 << s2;
			i += s1.length();
			continue;
		}
		file2 << tmp[i++];
	}
	file2.close();
}

int main(int ac, char **av)
{
	std::ifstream file1;
	char buffer;
	string tmp;
	
	if (ac == 4)
	{
		file1.open(av[1]);
		if (file1.fail())
		{
			std::cout << "File not found\n";
			return 1;
		}
		file1 >> std::noskipws;
		while (file1 >> buffer)
			tmp += buffer;
		checkTmp(av, tmp);
		file1.close();
	}
	else
	{
		std::cout << "Wrong input count\n";
		return 1;
	}
	return 0;
}
