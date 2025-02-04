#include <iostream>
using namespace std;

class Tryna {
  public:
    void Loop() {
      for(int qw = 0; qw < 100; qw++) {
          cout<<qw<<"). is this loop?"<<endl;
      }
    }
};

int main() {
  Tryna Do;
  Do.Loop();
  return 0;
};
