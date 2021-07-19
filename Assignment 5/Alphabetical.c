#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display();
void sort();

int main()
{
  int size_of_array;
  printf("Enter the number of strings you want to sort: ");
  scanf("%d", &size_of_array);
  char array[size_of_array][30];
  printf("\nEnter %d Strings: \n", size_of_array);
  
  for(int i=0; i<size_of_array; i++)
    scanf("%s", array[i]);

  sort(array, size_of_array);
  
  display(array , size_of_array);
  return 0;
}

void display(char array[][30], int size){
  printf("\nIn Alphabetical Order:\n");
  for(int i=0; i<size; i++){
    printf("%s\n", array[i]);
  }
  printf("\n");
}

void sort(char array[][30], int size){
  char temp[30];
  for(int i=0; i<size; i++){
    for(int j=0; j<size-1-i; j++){
      if(strcmp(array[j], array[j+1]) > 0){
        strcpy(temp, array[j]);
        strcpy(array[j], array[j+1]);
        strcpy(array[j+1], temp);
      }
    }
  }
}
 