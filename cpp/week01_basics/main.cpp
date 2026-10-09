#include <iostream>
#include <vector>
using namespace std;

double average(const vector<double>& v);

int main() {
    vector<double> v = {1, 2, 3, 4, 5};
    double avg = average(v);
    cout << avg << endl;
    return 0;
}

double average(const vector<double>& v) {
    double sum;
    int i;

    sum = 0;
    i = 0;
    for (double j: v) {
        sum += v.at(i);
        i ++;
    }
    return (sum/2);
}