#include<stdlib.h>
#include<time.h>
#include <iostream>
using namespace std;
const int n = 5;
double random(double start, double end) {
    return start+(end-start)*rand()/(RAND_MAX + 1.0);
}

int main() {
    srand(time(0));
    for (int i=1; i<n; i++) {
        int j = int(random(1,32));
        cout << j << endl;
    }
    return 0;
}
