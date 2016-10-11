#include <iostream>
using namespace std;

double division(double x, double y) {
    if(0 == y) {
        throw "exception:division could not be 0";
    }else{
        return x/y;
    }
}

int main() {
    double x,y,z;
    cout << "input x:";
    cin >> x;
    cout << "input y:";
    cin >> y;
    try{
        z = division(x,y); 
        cout << "z=" << z << endl;
    }catch(const char* msg){
        cout << msg << endl; 
    }
    return 0;
}
