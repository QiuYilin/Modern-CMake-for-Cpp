//用run()取代main()用来测试main
#include <iostream>
#include "calc.h"
using namespace std;

int run() {
  Calc c;
  cout << "2 + 2 = " << c.Sum(2, 2) << endl;
  cout << "3 * 3 = " << c.Multiply(3, 3) << endl;
  return 0;
}
