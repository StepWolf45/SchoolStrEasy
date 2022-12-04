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
string itc_three_str(string str1, string str2, string str3){
        long long start;
        while (itc_find_str(str1, str2) != -1) {
            string part1, part2;
            start = itc_find_str(str1, str2);
            for (long long i = 0; i < start; i++)
                part1 += str1[i];
            for (long long i = start + itc_len(str2); str1[i] != '\0'; i++)
                part2 += str1[i];
            str1 = part1 + str3 + part2;
        }
        return str1;
}


int itc_find_str(string str1, string str2){
    long long length1 = itc_len(str1);
    long long length2 = itc_len(str2);
    for (long long i = 0; i < length1; ++i) {
        if(str1[i]==str2[i]){
            long long j=0;
            for (long long r=i; r < length1 && j < length2; r++, j++){
                if (str1[r] != str2[j]) {
                    break;
                }
            }
            if (j == length2) {
                return i;
            }
        }
    }
    return -1;
}


int itc_max_char_on_end(string str) {
  int kol1=0;
  int kol2=0;
  for(int i=0;i<itc_len(str);i++){
    if (str[i] >= '0' && str[i] <= '9') {
        kol1++;
        if(kol1>kol2){
            kol2=kol1;
        }
    }else{
        kol1=0;
    }
  }
  return kol2;
}
