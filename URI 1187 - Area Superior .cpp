#include <iostream>
#include <iomanip>
using namespace std;
int main (){
  double matriz[12][12], soma=0, x=10,y=1, counter=0;
  char chave;
  cin >> chave;
  for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
      cin >> matriz[i][j];
      if(i < 5 && j >= y && j <= x){
        soma = soma + matriz[i][j];
        counter++;
      }
    }
    x-=1;
    y+=1;
  }
  if(chave == 'S'){
    cout << fixed << setprecision(1) << soma << endl;
  }else if(chave == 'M'){
    cout << fixed << setprecision(1) << soma/counter << endl;
  }
}