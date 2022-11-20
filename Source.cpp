#include <iostream>
#include <string>
#include "str_easy.h"

using namespace std;

string itc_hello_str(string name) {	
	return "Hello, " + name;
}
long long itc_len(string str) {
	long long kol = 0;
	for (int i = 0; str[i]!='\0'; i++) {
		kol++;
	}
	return kol;
}
void itc_print_copy_str(string str, int number) {
	for (int i = 0; i < number; i++){
		cout << str << endl;
	}
}
void itc_first_end_three(string str) {
	long long length = itc_len(str);
	if (length > 5) {
		cout << str[0] << str[1] << str[2] << str[length - 3] << str[length - 2] << str[length - 1];
	}
	else {
		for (int i = 0; i < length; i++)
		{
			cout << str[0];
		}
	}
}
int itc_count_char_in_str(char ch, string str) {
	int kol = 0;
	for (int i = 0; i < itc_len(str); i++)
	{
		if (ch == str[i]) {
			kol++;
		}
	}
	return kol;

}