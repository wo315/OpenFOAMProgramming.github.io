#include <iostream>

int main() {
  int i = 42;
  int *pi = &i;
  std::cout << *pi << std::endl;
  std::string str = "OpenFOAM";
  std::string *pstr = &str;
  std::cout << *pstr << std::endl;


  int *i_ptr = new int(42);
  std::cout << *i_ptr << std::endl;

  std::string *v_s_ptr = new std::string("OpenFOAM");
  std::cout << *v_s_ptr << std::endl;
  return 0;
}