#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double *p = NULL;
    double **pp = NULL;

    p = new double;
    *p = n;

    pp = new double*;
    *pp = p;

    cout << **pp << endl;

    delete p;
    delete pp;

    return 0;
}