# StringStream
* 是c++ standard library底下的class，繼承自'std::iostream'，用於將不同data type與string之間的轉換
* stringstream和cin以及cout一樣，用'<<'將data插入stringstream中，'>>'將data從stringstream output
* 若要初始化stringstream，會有兩步驟，如下
  ```
  ss.str("");
  ss.clear();
  ```

以下是一個將不同data type互相轉換的簡單範例
```cpp
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
```
