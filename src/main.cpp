#include <vulkan/vulkan.h>
#include "App.h"
#include <iostream>
#include <stdexcept>
#include <cstdlib>

int main() {
  App app;

  try {
    std::cout << "attempting to run application" << "\n";
    app.run();
  }
  catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
