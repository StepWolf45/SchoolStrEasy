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
