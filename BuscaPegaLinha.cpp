#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {

  ifstream ent1;
  bool encontrado=false;
  int contador=0, contReal=0;
  char* nomearquivo1 = argv[1];
  string palavra = argv[2];

  ent1.open(nomearquivo1);
  string str1;

  while (getline(ent1,str1)) {
    size_t found = str1.find(palavra);
    contador++;
    if(found!=std::string::npos){
      encontrado = true;
      contReal=contador;
    }
  }

  if (encontrado==true){
    cout<<"palavra encontrada"<<endl;
    cout<<"Encontrada na linha "<<contReal<<endl;
  }else{
    cout<<"palavra não encontrada"<<endl;
    cout<<contador<<" lihas percorridas"<<endl;
  }

  return 0;
}
