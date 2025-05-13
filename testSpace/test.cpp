
#include <vector>
#include <iostream>
#include <sstream>
#include <string>

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Insufficient arguments\n";
		return (1);
	}

	std::string raw = argv[1];

	std::string delim = " :";
	std::string multiword;
	std::vector<std::string> splitted;

	
	std::string::size_type res = raw.find(delim);
	if (res != std::string::npos)
	{
		multiword = raw.substr(res + 2, raw.size() - (res - 1));
		raw = raw.substr(0, raw.size() - (multiword.size() + 2));
	}
	
	std::istringstream iss(raw);
	std::string token;

	while (iss >> token)
	{
		splitted.push_back(token);
	}
	if (res != std::string::npos)
		splitted.push_back(multiword);
	
	for (std::vector<std::string>::iterator it = splitted.begin(); it != splitted.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	return (0);
}