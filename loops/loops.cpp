#include <iostream>


using namespace std;

int for_loop()
{
  for (int a=0; a<10; a++) {
    if (a == 5) {
      break;
    }
    cout << "for_loop a: " << a << endl;
  }
  return 0;
}

int while_loop() {
  int i = 0;
  do {
    cout << "while_loop i: " << i << endl;
    i++;
  }
  while (i < 10);
  return 0;
}

int main()
{
    for_loop();
    while_loop();
    return 0;
}