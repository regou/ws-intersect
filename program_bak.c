#include <stdio.h>
#include <string.h>
char arr[] = {'a','b','c'};
char start(int idx) {
  return sizeof(arr);
}

int main() {
  return start(1);
} 