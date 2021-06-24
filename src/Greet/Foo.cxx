/**
* @brief   Implements the class Foo specialized for Windows.
 *
 * @author  juan.castellanos
 * @date    2021-06-24
 */

#include "Greet/Foo.h"
#include <iostream>

using namespace Greet;

void Foo::greetFromPlatform() const
{
  std::cout << "Hello foo: " << m_value << " from Windows\n";
}
