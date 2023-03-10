#include <iostream>
using namespace std;
#include "dz11.h"
#include "dz12.h"

int main() {
    dz12 <char> a(5);
    a.fill();
    a.print();
    a + 5;
    a.print();
}