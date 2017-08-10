#include <iostream>

#include <beef-config.h>

#include <beef/events/events.hpp>

int main() {
  std::cout << "Starting Beef: " << Beef_VERSION_MAJOR << "." <<
      Beef_VERSION_MINOR << "." <<  std::endl;
  print_event();
}
