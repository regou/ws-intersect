#include <webassembly.h>
#include <string.h>
char arr[] = {'a','b','c'};
export char start(int idx) {
  return sizeof(arr);
}

export char testpn(char pn) {
  return getchar(pn);
} 