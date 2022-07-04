#include <iostream>

void sort_elements_descending(int arr[], int size){
  for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
      if(arr[i] < arr[j]){
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp; 
      }
    }
  }
}

void print_array(int arr[], int size){
  for(int i=0; i<size; i++){
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";
}

int main() {
  int arr[4] = {10, 67, 98, 31};

  std::cout << "Array before descending sorting\n";
  print_array(arr, 4);

  sort_elements_descending(arr, 4);
  std::cout << "\nArray after descending sorting\n";
  print_array(arr, 4);
}