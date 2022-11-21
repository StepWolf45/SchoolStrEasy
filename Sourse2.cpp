#include <iostream>
#include "str_easy.h"
#include <string>

using namespace std;

string itc_cmp_str(string str1, string str2, int num) {
  long long length = itc_len(str1);
  string new_str="";
  if (num > length)
    return str1;
  if (num == length)
    return str1 + str2;
  for (long long i = 0; i < length; i++) {
    if (i != num)
      new_str += str1[i];
    else {
      new_str += str2;
      new_str += str1[i];
    }
  }
  return new_str;
}

int itc_find_str(string str1, string str2) {
  long long len_string_1 = itc_len(str1);
  long long len_string_2 = itc_len(str2);
  for (long long i = 0; i < len_string_1; i++) {
    if (str1[i] == str2[0]) {
      long long k = i;
      long long j = 0;
      for (; j < len_string_2 && k < len_string_1; j++, k++) {
        if (str1[k] != str2[j])
          break;
      }
      if (j == len_string_2)
        return i;
    }
  }
  return -1;
}

string itc_three_str(string str1, string str2, string str3) {
  long long c;
  while (itc_find_str(str1, str2) != -1) {
    string a, b;
    c = itc_find_str(str1, str2);
    for (long long i = 0; i < c; i++)
      a += str1[i];
    for (long long i = c + itc_len(str2); str1[i] != '\0'; i++)
      b += str1[i];
    str1 = a + str3 + b;
  }
  return str1;
}

int itc_max_char_on_end(string str) {
  int kol1=0;
  int kol2=0;
  for(int i=0;i<itc_len(str);i++){
    if (str[i] >= '0' && str[i] <= '9') 
        kol1++;
    else {
        kol2=kol1;
        kol1=0;
    }
  }

}
