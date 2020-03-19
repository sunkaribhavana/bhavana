#include <vector>
#include<iostream>

using namespace std;

int main(void) {
   vector<int> v;

   for (int i = 0; i < 5; ++i)
      v.push_back(i + 1);

   cout << "Number of elements in vector = " << v.size() << endl;
   cout << "Capacity of vector           = " << v.capacity() << endl;

   return 0;
}

