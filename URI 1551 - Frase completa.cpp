#include <iostream>
#include <string>
using namespace std;
int main() {
  string frase;
  char alfabeto[2][26];
  bool check[26];
  int counter=0,n;
  for(int i=0; i<26; i++){
    check[i] = false;
  }
  for(int i=65;i<91;i++){
    alfabeto[0][(i-65)] = i;
  }
  for(int i=97;i<123;i++){
    alfabeto[1][(i-97)] = i;
  }
  cin >> n;
  for(int k=0;k<n;k++){
    cin.ignore();
    getline(cin,frase);
    for(int i=0;i<frase.size();i++){
      for(int j=0;j<26;j++){
        if(frase[i] == alfabeto[0][j] || frase[i] == alfabeto[1][j]){
          check[j] = true;
        }
      }
    }
    counter=0;
    for(int i=0; i<26; i++){
      if(check[i] == true){
        counter++;
      }
    }
    if(counter == 26){
      cout << "frase completa" << endl;
    }else if(counter >= 13 && counter < 26){
      cout << "frase quase completa" << endl;
    }else{
      cout << "frase mal elaborada" << endl;
    }
    for(int i=0; i<26; i++){
      check[i] = false;
    }
  }
}