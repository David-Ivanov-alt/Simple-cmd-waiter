#include <iostream>
#include <string>
#include <Windows.h>

int main(int argc, char* argv[]) {

	if (argc == 2) {
		int wait = std::stoi(argv[1]);
		Sleep(wait * 1000);
	}
	else {
		std::cout << "No arguments; please entry number. Example: 'waiter.exe 5'";
	}

	return 0;
}
