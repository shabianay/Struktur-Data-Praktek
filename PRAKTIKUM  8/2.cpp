//SHABIAN ARSYL YONANTA
//20051397032
//MI_B_2020
#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n){
  int i, j, tmp;
  for (i = 0; i < n; i++){
    for (j = 0; j < n - i - 1; j++){
      if (arr[j] > arr[j + 1]){
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}
int main(){
  int array[100], n, i, j;
  cout<<"SHABIAN ARSYL YONANTA\n";
  cout<<"20051397032\n";
  cout<<"MI_B_2020\n";
  cout << "Masukkan banyak elemen: ";
  cin >> n;
  cout << "Masukkan nilai: \n";
  for (i = 0; i < n; i++){
    cin >> array[i];
  }
  bubbleSort(array, n);
  cout << "Hasil pengurutan sebagai berikut:\n";
  for (i = 0; i < n; i++){
    cout << array[i] << " ";
  }
  cout << "\n";
}
//SHABIAN ARSYL YONANTA
//20051397032
//MI_B_2020
