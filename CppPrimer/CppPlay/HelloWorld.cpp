#include<iostream>

// Argument Count and Argument Value
int main(int argc, char** argv)
{
    std::cout << "argc: " << argc << std::endl;
	std::cout << "argv[0]: " << argv[0] << std::endl;
	std::cout << "argv[1]: " << argv[1][1] << std::endl;
	std::cout << "argv[2]: " << argv[2] << std::endl;
	
    return 0;
}