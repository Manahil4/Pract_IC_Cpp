#include <iostream>
using namespace std;
 
enum Level {
  LOW = 12,
  MEDIUM,
  HIGH
};

int main() {
  enum Level myVar = MEDIUM;

  switch (myVar) {
    case 12:
      cout << "Low Level";
      break;
    case 13:
      cout << "Medium level";
      break;
    case 14:
      cout << "High level";
      break;
  }
  return 0;
}
