#include <iostream>
#include <string>
#include "str_easy.h"

using namespace std;

string itc_even_place(string str) {
  string new_str = "";
  if (itc_len(str)<=1){
      return "-1";
  }
  for (int i = 0; i < itc_len(str); i++){
	if (i % 2 != 0) {
		new_str += str[i]; //?????
	}
  }
  return new_str;
}
double itc_percent_lower_uppercase(string str) {
	double up = 0;
	double low = 0;
	for (long long i = 0; i <= itc_len(str); ++i) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			up++;
		if (str[i] >= 'a' && str[i] <= 'z')
			low++;
	}
	return (up / low) * 100; 
}
string itc_reverse_str(string str) {
  string new_str = "";
  for (int i = itc_len(str) - 1; i >= 0; i--) {
    new_str += str[i];
  }
  return new_str;
}

string itc_slice_str(string str, int start, int end) {
  string new_str="";
  long long length = itc_len(str);
  if (start < 0)
    start = 0;
  if (start > end)
    return str;
  for (long long i = start; i <= end && i < length; i++)
    new_str += str[i];
  return new_str;
}

bool itc_equal_reverse(string str) {
	return itc_reverse_str(str) == str;

}
