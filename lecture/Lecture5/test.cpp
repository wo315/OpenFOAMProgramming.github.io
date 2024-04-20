#include <iostream>
#include <memory>

int main() {
  std::shared_ptr<int> sp1 = std::make_shared<int>(42);
  std::shared_ptr<int> sp2(new int(42));
  std::unique_ptr<int> up1(new int(42));
  std::unique_ptr<int[]> up2 = std::make_unique<int[]>(5);
  // for(int i = 0; i < 6; i++) {
  //   up2[i] = i;
  // }

  for(int i = 0; i < 5; i++) {
    std::cout << up2[i] << std::endl;
  }

  int *i_ptr = new int(42);
  std::cout << *i_ptr << std::endl;

  std::string *v_s_ptr = new std::string("OpenFOAM");
  std::cout << *v_s_ptr << std::endl;
  return 0;
}