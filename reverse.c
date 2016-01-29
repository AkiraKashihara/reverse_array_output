#include <stdio.h>

//*Reverse character order and output them
void reverse(char *letter){                           //define argument
  for(int i = 0; i < sizeof(letter); i++){            //repeat output function for sizeof array
    char word = letter[sizeof(letter) - (i+1)];       //assignment word of letter to word variable from end of array.
    if(word != 0){                                    //judge word is null or not.
      printf("%c\n", word);                           //output character
    }
  }
}

int main(void){
  char figure[5] = {'a','b','c','d','e'};             //You can input any array
  reverse(figure);                                    //assignment array to reverse function

  return 0;                                           //success all tasks

}