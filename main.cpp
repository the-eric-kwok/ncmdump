#include "ncmcrypt.h"

#include <stdexcept>

int main(int argc, char *argv[]) {
	try	{
		NeteaseCrypt crypt(argv[1]);
		crypt.Dump();
		crypt.FixMetadata();
		std::cout << crypt.dumpFilepath() << std::endl;
	} catch (std::invalid_argument e) {
		std::cout << "exception: " << e.what() << std::endl;
	} catch (...) {
		std::cout << "unexcept exception!" << std::endl;
	}

	return 0;
}