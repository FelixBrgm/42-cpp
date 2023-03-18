#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>

class RPN
{
	private:
		std::stack<double> st;

	public:
		RPN();
		~RPN();
		double calculate(std::string expr);
};

#endif
