#include <iostream>
#include <string>
using namespace std;
int main (){
  string processos;
  int n, counter=0,total_de_processos=0;
  while(cin >> processos >> n){
    for(int i=0;i<processos.size(); i++){
      if(processos[i] == 'W'){
        total_de_processos++;
        counter=0;
      }else if(processos[i] == 'R'){
        if(i+1 < processos.size()){
          if(processos[i+1] == 'R'){
            counter++;
            if(counter > n-1){
              counter=0;
              total_de_processos++;
            }
          }else{
            total_de_processos++;
            counter=0;
          }
        }else{
          total_de_processos++;
        }
      }
    }
    cout << total_de_processos << endl;
    total_de_processos=0;
    counter=0;
  }
}