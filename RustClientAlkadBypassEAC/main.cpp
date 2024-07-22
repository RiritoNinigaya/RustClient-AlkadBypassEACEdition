#include <termcolor/termcolor.hpp>
#include <Windows.h>
#include <iostream>
using namespace std;

int main(int /*argc*/, char** /*argv*/) {
	cout << termcolor::color<100, 0, 0> << "RustClientAlkadBypassEAC by RiritoNinigaya" << endl;
	cout << "This is My First Bypass For RustClient... So Enjoy to use this!!!" << endl;
	Sleep(2000);
	system("start Rust.exe");
	Sleep(600);
	system("start RustClient.exe");
	exit(4003);
	return 0;
}