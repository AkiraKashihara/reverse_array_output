#include <stdio.h>

//*Reverse character order and output them
void reverse(char *letter, int len){                           //define argument
  int count = 0;
  for(int i = 0; i < (len/2 + len%2) ; i++){            //repeat output function for sizeof array
    char word = letter[len - (i+1)];       //assignment word of letter to word variable from end of array.
    if(word == letter[i]) {
      count++;
    }
  }
  printf("%d\n", count);
}

int main(void){
  char figure[5] = {'a','b','c','d','a'};             //You can input any array
  reverse(figure, sizeof(figure));                                    //assignment array to reverse function

  return 0;                                           //success all tasks

}