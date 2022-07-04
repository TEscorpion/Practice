#include <iostream>


void left_rotate(int arr[], int size){
  int temp = arr[0];
  for(int i=1; i<size; i++){
    arr[i-1] = arr[i];
  }
  arr[size-1] = temp;
}

void print_array(int arr[], int size){
  for(int i=0; i<size; i++){
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";
}

int main() {
  int arr[5] = {1,2,3,4,5};

  std::cout << "Array before left rotation\n";
  print_array(arr, 5);
  
  left_rotate(arr, 5);
  std::cout << "\nArray after left rotation\n";
  print_array(arr, 5);
}