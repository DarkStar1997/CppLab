#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
int main()
{
	std::string str, nstr = "";
	getline(std::cin, str);
	std::stringstream sstr(str);
		
	while(sstr >> str)
	{
		std::reverse(str.begin(), str.end());
		nstr += str + std::string(" ");
	}
	std::cout<<nstr<<'\n';
}
