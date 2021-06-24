/**
 * @brief   Entry point.
 *
 * @author  juan.castellanos
 * @date    2021-06-24
 */

#include "Greet/Foo.h"
#include <fmt/core.h>
#include <memory>

using namespace Greet;

int main()
{
  fmt::print("Hello, World!\n");
  auto foo = std::make_unique<Foo>(42);

  foo->greet();
  foo->greetFromPlatform();

  return 0;
}
