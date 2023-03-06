#include <iostream>
#include <string>
#include <conio.h>

class Edit
{
	std::string data;
public:


	std::string getData()
	{
		data.clear();

		while (1)
		{
			char c = _getch(); // 키보드에서 한자 입력

			if (c == 13) break; // enter

			if (isdigit(c))
			{
				data.push_back(c);
				std::cout << c;
			}
		}
		std::cout << "\n";
		return data;
	}
};



int main()
{
	Edit edit;

	while (1)
	{
		std::string s = edit.getData();
		std::cout << s << std::endl;
	}
}
