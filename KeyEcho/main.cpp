#include <iostream>
#include <make_exception.hpp>

int main(const int argc, char** argv)
{
	try {

		return 0;
	} catch (const std::exception& ex) {
		std::cerr << ex.what() << std::endl;
		return -1;
	} catch (...) {
		std::cerr << "An unknown error occurred!" << std::endl;
		return -1;
	}
}
