#include "RPN.hpp"
#include <stdexcept>


RPN::RPN() {};

RPN::~RPN() {};


double RPN::calculate(std::string formular) {
	st = std::stack<double>();
	double a, b;

	for (unsigned int i = 0; i < formular.size(); i++)
	{
		char c = formular[i];

		if (c == ' ') continue;
		else if (c <= '9' && c >= '0')
		{
			st.push(c - '0');
			continue;
		}
		else if (c == '+' || c == '-' || c == '/' || c == '*')
		{
			if (st.size() < 2)
				throw std::invalid_argument("Error");

			a = st.top();
			st.pop();
			b = st.top();
			st.pop();

			if (c == '+') st.push(b + a);
			if (c == '-') st.push(b - a);
			if (c == '/') st.push(b / a);
			if (c == '*') st.push(b * a);
		}
		else
			throw std::invalid_argument("Error");
	}

	if (st.size() != 1)
		throw std::invalid_argument("Error");
	
	return st.top();
}
