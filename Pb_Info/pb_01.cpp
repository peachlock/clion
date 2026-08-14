#include <iostream>
#include <fstream>
using namespace std;


int main(){
    ifstream fin("sum.in");
    ofstream fout("sum.out");

    
    int a, b, s=0;
    
    fin >> a >> b;
    
    s = a+b;
    
    fout << s;
    
    return 0;
    
}
    