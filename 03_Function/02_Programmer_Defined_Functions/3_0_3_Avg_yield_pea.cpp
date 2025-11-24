/*
 * Compute the average yield on an experimental pea growing patch.
 */

#include <iostream>
using namespace std;

double estimateOfTotal(int minPeas, int maxPeas, int podCount);
// Returns an estimate of the total number of peas harvested.
// The formal parameter podCount is the number of pods.
// The formal parameters minPeas and maxPeas
// are the minimum and maximum number of peas in a pod.

int main( ) {
    int minCount, maxCount, podCount;
    double averagePea;  // the avg weight (local to main)
    double numberPeas, yield;

    cout << "Enter the min and max number of peas in a pod:";
    cin >> minCount >> maxCount;
    cout << "Enter the n. of pods:";
    cin >> podCount;
    cout << "Enter the weight of an avg. pea (in grams):";
    cin >> averagePea;

    numberPeas =
        estimateOfTotal(minCount, maxCount, podCount);
    yield =
        estimateOfTotal(minCount, maxCount, podCount) * averagePea;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout << "Min number of peas per pod = " << minCount << endl
         << "Max number of peas per pod = " << maxCount << endl
         << "Pod count = " << podCount << endl
         << "Average pea weight = " << averagePea << " grams\n"
         << "Estimate number of peas = " << numberPeas << endl
         << "Estimate average yield = " << yield << " grams\n";

    return 0;
}

double estimateOfTotal(int minPeas, int maxPeas, int podCount) {
    double averagePea;  // the avg. number (local to estimateOfTotal)

    averagePea = (maxPeas + minPeas) / 2.0;
    return (podCount * averagePea);
}
