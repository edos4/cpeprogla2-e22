#include<iostream>
#include<cstring>
using namespace std;

char* myStrCmp(char* str1, char* str2){
  //return strlen(str);
  switch(strcmp(str1, str2)){
    case -1:
      cout << "negative";
      break;
    case 0:
      cout << "equal";
      break;
    case 1:
      cout << "positive";
      break;
  }
}

int main(){
  char str1[100]="Hello";
  char str2[100]="hello";
  
  myStrCmp(str1, str2);
}
