#include <iostream>
#include <vector>

int main() {
	std::vector<int>integers{50, 1, 987, 1001};

	for (size_t index = 0; index < integers.size(); ++index)
	{
		//std::cout << "Element [" << index << "] = " << integers[index] << std::endl;

		// safer way to get same outcome as above - .at checks against sieze of the container
		std::cout << "AT Element [" << index << "] =" << integers.at(index) << std::endl;
	}

	integers[2] = 2011;					// change value of 3rd element
	std::cout << "After replacement: " << std::endl;
	std::cout << "Element[2] = " << integers[2] << std::endl;
	std::cout << std::endl;

	for (size_t index = 0; index < integers.size(); ++index)
	{
		std::cout << "Element [" << index << "] = " << integers[index] << std::endl;
	}

	return 0;
}