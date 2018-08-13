#include <iostream>

using namespace std;

void loop_via_pointer_char()
{
  char alph [] = {'a', 'b', 'c'};
  char *p;
  p = alph;

  for (; p < alph + sizeof(alph) / sizeof(*alph); ++p)
  {
    cout << *p << endl;
  }
}

void loop_via_pointer(int *p, int size)
{
  cout << "loop_via_pointer" << endl;
  cout << "array size: "<< size << endl;

  for(int i=0;i<size;i++)
  {
    cout << endl << p << ", " << *p<< endl;
    p += 1;
  }
}

int main()
{
  loop_via_pointer_char();
  int arr [3] = {6,4,2};
  int *arr_ptr;
  arr_ptr = arr;
  loop_via_pointer(arr_ptr, (sizeof(arr)/ sizeof(*arr)));
  char a = 'c';
  char *a_ptr = nullptr;

  a_ptr = &a;

  cout << "`a` variable address: " << hex << long(a_ptr) << endl;

  cout << "value of `a_ptr` = " << *a_ptr << endl;

  return 0;
}