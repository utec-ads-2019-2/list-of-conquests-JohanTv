#include <iostream>
#include <map>
#include <string>
using namespace std;

string obtenerPais(string linea){
    string pais;
    for(int i=0;i<linea.size();i++){
        if(linea[i]==' '){
            pais=linea.substr(0,i);
            break;
        }
    }
    return pais;
}


int main() {
    map<string, int> donGiovanni;
    int n; cin>>n; cin.ignore();
    string linea;
    for(int i=0;i<n;i++) {
        getline(cin, linea);
        donGiovanni[obtenerPais(linea)]++;
    }

    for(auto p = donGiovanni.begin(); p!=donGiovanni.end();p++ ){
        cout<<p->first<<" "<<p->second<<endl;
    }
}
