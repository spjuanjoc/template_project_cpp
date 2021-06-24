/**
 * @brief   Implements the class Foo.
 *
 * @author  juan.castellanos
 * @date    2021-06-24
 */

#include "Greet/Foo.h"
#include <iostream>

using namespace Greet;

Foo::Foo(int value) : m_value(value)
{
}

void Foo::greet() const
{
  std::cout << "Hello foo: " << m_value << '\n';
}
