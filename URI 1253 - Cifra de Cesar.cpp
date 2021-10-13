#include <iostream>
#include <string>
using namespace std;
int main(){
  char alfabeto[26];
  int n, x;
  string frase;
  for(int i=65;i<91;i++){
    alfabeto[(i-65)] = i;
  }
  cin >> n;
  for(int i=0;i<n;i++){
    cin.ignore();
    getline(cin, frase);
    cin >> x;
    string cifra = "";
    for(int i=0;i<frase.size();i++){
      for(int j=0;j<26;j++){
        if(frase[i] == alfabeto[j]){
          if(j-x >= 0){
            cifra = cifra + alfabeto[j-x];
          }else{
            cifra = cifra + alfabeto[((j-x)+26)];
          }
        }
      }
    }
    cout << cifra << endl;
  }
}