#include<stdlib.h>
#include<time.h>
#include <iostream>
using namespace std;

void getRand() {
    int start = 1;
    int end = 33;
    int j = start + rand() % (end-start+1); 
    cout << j << " ";
}

int main(int argc, char* argv[]) {
    int loopcount = 1;
    if(argv[1]) {
       loopcount = stoi(argv[1]);
    }
    else{
        loopcount = 1;
    }

    srand((unsigned)time(0));
    for (int i=1; i<=loopcount; i++) {
        getRand();
    }
    cout << endl;
    
    return 0;
}
