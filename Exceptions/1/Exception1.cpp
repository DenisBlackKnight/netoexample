#include <iostream>

class bad_length : std::exception 
{
public:
	const char* what()const override
	{
		return "You have entered a word that is too long";
	}
};
int function(std::string& str, int& forbidden_length);

int main()
{
	int length{ 0 };
	std::string word{};
	std::cout << "Enter the max length of word:";
	std::cin >> length;
	try 
	{
		do
		{
			std::cout << "Enter a word: ";
			std::cin >> word;
			std::cout << "This word has a " << function(word, length) << " letter/letters\n";
		}
		while (true);
	}
	catch (const bad_length& exception) { std::cout << exception.what() << std::endl; }
	catch (...) { std::cout << "Unknown error" << std::endl; }
}

int function(std::string& str, int &forbidden_length) 
{
	if (str.length() > forbidden_length)
		throw bad_length();
	return str.length();
}