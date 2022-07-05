#include <iostream>

void print_array(int *arr, int size){
  for(int i = 0; i < size; i++){
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";
}

void read_array_elements(int *arr, int size){
  for(int i = 0; i < size; i++){
    std::cout << "Please enter element [" << i+1 << "]: ";
    std::cin >> arr[i];
  }
}

void set_odd(int *arr, int size){
  for(int i = 0; i < size; i++){
    if(arr[i] % 2 != 0){
      arr[i] = -1; 
    }
  }
}


int main() {
  int size = 5;

  int *arr = new int[size];
  read_array_elements(arr, size);

  std::cout << "Array before set odd: \n";
  print_array(arr, size);

  set_odd(arr, size);
  std::cout << "\nArray after set odd: \n";
  print_array(arr, size);
}