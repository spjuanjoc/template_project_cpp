/**
 * @brief   Implements the class Foo.
 *
 * @author  juan.castellanos
 * @date    2021-06-24
 */

#include "Greet/Foo.h"
#include <fmt/core.h>

using namespace Greet;

Foo::Foo(int value) : m_value(value)
{
}

void Foo::greet() const
{
  fmt::print("Hello foo: {}\n", m_value);
}
