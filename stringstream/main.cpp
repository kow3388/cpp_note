//import stringstream
#include <sstream>

#include <string>
#include <iostream>

int main()
{
	int num = 42;
	double pi = 3.14;
	bool flag = true;
	char Char = 'A';

	std::stringstream ss;
	ss << num << " " << pi << " " << std::boolalpha << flag << " " << Char;

	//print ss as string
	std::string ss_string = ss.str();
	std::cout << "ss: " << ss_string << std::endl;

	//stringstream to each data type
	int n;
	double p;
	bool f;
	char c;

	ss >> n >> p >> f >> c;

	std::cout << "====================================" << std::endl;
	std::cout << "n: " << n << std::endl;
	std::cout << "p: " << p << std::endl;
	std::cout << "f: " << std::boolalpha << f << std::endl;
	std::cout << "c: " << c << std::endl;

	return 0;
}
