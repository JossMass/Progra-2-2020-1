#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#define MAX 10

using namespace std;

void addNumber(int *arr, int &index, int value){
  if(index < MAX){
    arr[index] = value;
    index++;
  }
}

void generateData(int *arr, int &index){
  for(int i = 0; i < MAX; i++){
    int random = rand() % 101;
    addNumber(arr,index,random);
  }
}

void printArray(int *arr, int index){
  for(int i=0; i < index; i++){
    cout << arr[i] << " ";
  }
}

//Bubble Sort
void sort(int *arr){
  for(int i = 0; i < MAX - 1; i++){
    for(int j = 0; j < MAX - i - 1; j++){
      if(arr[j] > arr[j+1]){
        int helper;
        helper = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = helper;
      }
    }
  }
}

void countNumbers(int *arr){

  int *aux = new int[MAX];
  int index2 = 0;

  int cont = 1;

  for(int i = 0; i < MAX; i++){
    if(arr[i] == arr[i+1]){
      cont++;
    } else {
      if(cont == 1){
        cout << arr[i] << " se repite " << cont << " vez" << endl;
      }else{
        cout << arr[i] << " se repite " << cont << " veces" << endl;
        cont = 1;
      }

      addNumber(aux,index2, arr[i]);
    } 

  }

  cout << endl;
  cout << "Arreglo sin repetidos" << endl;
  printArray(aux, index2);
}

#endif