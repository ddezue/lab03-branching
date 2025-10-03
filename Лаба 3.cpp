/*************************
 * Автор: Бакланова Ляна *
 * Вариант: 1            *
 *************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  int s1 = 60;
  double diameter = 25.4;
  double Re = 2 * pow(10, 4);
  int loopIteration;
  double Nu;
  double delta;
  double s2;
  double sg;
  int numOfDigitsAfterTheDecimalPoint = 2;
  int numOfIterations = 5;
  
  cout << fixed << setprecision(numOfDigitsAfterTheDecimalPoint);

  for (loopIteration = 0; loopIteration < numOfIterations; ++loopIteration) { 
    cout << "S2(мм) =";
    cin >> s2;

    sg = diameter * sqrt(0.25 * pow(s1 / diameter, 2.0) + pow(s2 / diameter, 2.0));
    delta = (s1 - diameter) / (sg - diameter);

    if (delta < 0.7) {
      Nu = 0.27 * pow(Re, 0.6) * delta;
    } else {
      Nu = 0.295 * pow(Re, 0.6) * pow(delta, 0.25);
    }

    cout << "Nu = " << Nu << "\t Delta = " << delta << endl;
  }

  return 0;
}
