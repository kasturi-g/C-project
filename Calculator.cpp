#include <iostream>

int nn;
char diff_ope;
char new_ope;
char plus_ope = '+';
char minus_ope = '-';
char division_ope = '/';
char times_ope = '*';
bool ope_bool;
bool nn_bool;
char uni_yes = 'y';
char uni_no = 'n';

void different_operator() {
	
	std::cout << "Do you want a different operator connecting the current number to the last current number? If you want, type y, if not, type n, or if you want help, type any character besides y & n.\n";
	std::cin >> diff_ope;
	
	if (diff_ope == uni_yes)
	{
		std::cout << "\nEnter only the given operators - +, -, *, /.\n";
		std::cin >> new_ope;
	
		if (new_ope == plus_ope or new_ope == minus_ope or new_ope == times_ope or new_ope == division_ope)
		{
			ope_bool = true;
			std::cout << "\n";
		}
		else
		{
			ope_bool = false;
			std::cout << "\n";
		}
	}
	else if (diff_ope == uni_no)
	{
		std::cout << "\n";
	}
	else
	{
		std::cout << "		     			   Example, n + n1 (+,-,*,/) n2 .\n";
		std::cout << "												^		 \n";
		std::cout << "You can choose different operators connecting n1 to n2.\n";
		std::cout << "          This is the same with your numbers (entries).\n";
		
		different_operator();
		
	}
	
}

void entries() {
	
	char question;
	
	std::cout << "\nDo you want to enter another entry? If yes, enter y, if no, enter any character.\n";
	std::cin >> question;
	
	if (question == uni_yes)
	{
		nn_bool = true;
		std::cout << "Enter next number: \n";
		std::cin >> nn;
		different_operator();
	}
	else
	{
		nn_bool = false;
		std::cout << "\n";
	}
	
}

void process() {
	
	char op;
	double num;
	double num1;
	double result;
	
	std::cout << "\nEnter only the given operators - +, -, *, /.\n";
	std::cin >> op;
	
	std::cout << "\nNow then, please enter the first number.\n";
	std::cin >> num;
	std::cout << "Enter second number.\n";
	std::cin >> num1;
	entries();
	

	switch(op)
	{
		case '+':
			if (ope_bool == true && nn_bool == true)
			{
				switch (new_ope)
				{
					case '-':
						result = num + num1 - nn;
						std::cout << "Result: " << result;
						process();
						break;
					case '/':
						result = num + num1 / nn;
						std::cout << "Result: " << result;
						process();
						break;
					case '*':
						result = num + num1 * nn;
						std::cout << "Result: " << result;
						process();
						break;
					default:
						result = num + num1 + nn;
						std::cout << "Result: " << result;
						process();
						break;
				}
			}
			else if (ope_bool == false && nn_bool == true)
			{
			 	result = num + num1 + nn;
				std::cout << "Result: " << result;
				process();
			}
			else
			{
				result = num + num1;
				std::cout << "Result: " << result;
				process();
			}
			break;
		case '-':
			if (ope_bool == true && nn_bool == true)
			{
				switch (new_ope)
				{
					case '+':
						result = num - num1 + nn;
						std::cout << "Result: " << result;
						process();
						break;
					case '/':
						result = num - num1 / nn;
						std::cout << "Result: " << result;
						process();
						break;
					case '*':
						result = num - num1 * nn;
						std::cout << "Result: " << result;
						process();
						break;
					default:
						result = num - num1 - nn;
						std::cout << "Result: " << result;
						process();
						break;
				}
			}
			else if (ope_bool == false && nn_bool == true)
			{
			 	result = num - num1 - nn;
				std::cout << "Result: " << result;
				process();
			}
			else
			{
				result = num - num1;
				std::cout << "Result: " << result;
				process();
			}
			break;
		case '*':
			if (ope_bool == true && nn_bool == true)
			{
				switch (new_ope)
				{
					case '-':
						result = num * num1 - nn;
						std::cout << "Result: " << result;
						process();
						break;
					case '+':
						result = num * num1 + nn;
						std::cout << "Result: " << result;
						process();
						break;
					case '/':
						result = num * num1 / nn;
						std::cout << "Result: " << result;
						process();
						break;
					default:
						result = num * num1 * nn;
						std::cout << "Result: " << result;
						process();
						break;
				}
			}
			else if (ope_bool == false && nn_bool == true)
			{
			 	result = num * num1 * nn;
				std::cout << "Result: " << result;
				process();
			}
			else
			{
				result = num * num1;
				std::cout << "Result: " << result;
				process();
			}
			break;
		case '/':
			if (ope_bool == true && nn_bool == true)
			{
				switch (new_ope)
				{
					case '-':
						result = num / num1 - nn;
						std::cout << "Result: " << result;
						process();
						break;
					case '*':
						result = num / num1 * nn;
						std::cout << "Result: " << result;
						process();
						break;
					case '+':
						result = num / num1 + nn;
						std::cout << "Result: " << result;
						process();
						break;
					default:
						result = num / num1 / nn;
						std::cout << "Result: " << result;
						process();
						break;
				}
			}
			else if (ope_bool == false && nn_bool == true)
			{
			 	result = num / num1 / nn;
				std::cout << "Result: " << result;
				process();
			}
			else
			{
				result = num / num1;
				std::cout << "Result: " << result;
				process();
			}
			break;
		defult:
			std::cout << "Error. Please enter different number and/or operator.";
			process();
			break;
	}
	
}

int main() {
	
	char op;
	double num;
	double num1;
	double result;
	
	std::cout << "Hello to calculator! You can only use the operators below.\n";
	std::cout << "Enter only the given operators - +, -, *, /.\n";
	std::cin >> op;
	
	std::cout << "\nNow then, please enter the first number.\n";
	std::cin >> num;
	std::cout << "Enter second number.\n";
	std::cin >> num1;
	entries();
	

	switch(op)
	{
		case '+':
			if (ope_bool == true && nn_bool == true)
			{
				switch (new_ope)
				{
					case '-':
						result = num + num1 - nn;
						std::cout << "Result: " << result;
						process();
						break;
					case '/':
						result = num + num1 / nn;
						std::cout << "Result: " << result;
						process();
						break;
					case '*':
						result = num + num1 * nn;
						std::cout << "Result: " << result;
						process();
						break;
					default:
						result = num + num1 + nn;
						std::cout << "Result: " << result;
						process();
						break;
				}
			}
			else if (ope_bool == false && nn_bool == true)
			{
			 	result = num + num1 + nn;
				std::cout << "Result: " << result;
				process();
			}
			else
			{
				result = num + num1;
				std::cout << "Result: " << result;
				process();
			}
			break;
		case '-':
			if (ope_bool == true && nn_bool == true)
			{
				switch (new_ope)
				{
					case '+':
						result = num - num1 + nn;
						std::cout << "Result: " << result;
						process();
						break;
					case '/':
						result = num - num1 / nn;
						std::cout << "Result: " << result;
						process();
						break;
					case '*':
						result = num - num1 * nn;
						std::cout << "Result: " << result;
						process();
						break;
					default:
						result = num - num1 - nn;
						std::cout << "Result: " << result;
						process();
						break;
				}
			}
			else if (ope_bool == false && nn_bool == true)
			{
			 	result = num - num1 - nn;
				std::cout << "Result: " << result;
				process();
			}
			else
			{
				result = num - num1;
				std::cout << "Result: " << result;
				process();
			}
			break;
		case '*':
			if (ope_bool == true && nn_bool == true)
			{
				switch (new_ope)
				{
					case '-':
						result = num * num1 - nn;
						std::cout << "Result: " << result;
						process();
						break;
					case '+':
						result = num * num1 + nn;
						std::cout << "Result: " << result;
						process();
						break;
					case '/':
						result = num * num1 / nn;
						std::cout << "Result: " << result;
						process();
						break;
					default:
						result = num * num1 * nn;
						std::cout << "Result: " << result;
						process();
						break;
				}
			}
			else if (ope_bool == false && nn_bool == true)
			{
			 	result = num * num1 * nn;
				std::cout << "Result: " << result;
				process();
			}
			else
			{
				result = num * num1;
				std::cout << "Result: " << result;
				process();
			}
			break;
		case '/':
			if (ope_bool == true && nn_bool == true)
			{
				switch (new_ope)
				{
					case '-':
						result = num / num1 - nn;
						std::cout << "Result: " << result;
						process();
						break;
					case '*':
						result = num / num1 * nn;
						std::cout << "Result: " << result;
						process();
						break;
					case '+':
						result = num / num1 + nn;
						std::cout << "Result: " << result;
						process();
						break;
					default:
						result = num / num1 / nn;
						std::cout << "Result: " << result;
						process();
						break;
				}
			}
			else if (ope_bool == false && nn_bool == true)
			{
			 	result = num / num1 / nn;
				std::cout << "Result: " << result;
				process();
			}
			else
			{
				result = num / num1;
				std::cout << "Result: " << result;
				process();
			}
			break;
		defult:
			std::cout << "Error. Please enter different number and/or operator.";
			process();
			break;
	}
	
}
