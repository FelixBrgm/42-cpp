#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"

int main(void)
{
	typedef std::vector<Account>							  accounts_t;
	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	accounts_t acounts(amounts, amounts + (sizeof(amounts) / sizeof(int)));
}