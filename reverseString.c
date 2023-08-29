#include <stdio.h>
#include <string.h>

void reverseString(char *string){
  int length = strlen(string);
  
  int end_index = length - 1;
  int begin_index = 0;
  while(begin_index < end_index){
    char temp = string[begin_index];
    string[begin_index] = string[end_index];
    string[end_index] = temp;

    begin_index++;
    end_index--;
  }
}

int main(void) {
  char tim[] = "Timothy";
  printf("%s\n", tim);
  reverseString(tim);
  printf("%s\n", tim);

  return 0;
}