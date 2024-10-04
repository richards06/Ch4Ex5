/*


*/

#include <iostream>
#include <iomanip>
using namespace std;

const double lowerBound = 18.5;
const double higherBound = 25.0;

int main()
{
    double height;
    double weight;
    double BMI;
    cout << "Please enter height (in inches): ";
    cin >> height;
    cout << "Please enter weight (in pounds): ";
    cin >> weight;
    BMI = (weight * 703) / (height * height);
    cout << "Your BMI is " << BMI;
    if (BMI < lowerBound)
        cout << "Eat more";
    else if (BMI > higherBound)
        cout << "Eat less or exercise more";
    else cout << "You are just right!";

}


