/**
 * @brief   Implements the class Foo.
 *
 * @author  spjuanjoc
 * @date    2021-06-24
 */

#include "Greet/Foo.h"

#include <fmt/core.h>

using namespace Greet;

Foo::Foo(const int value)
: m_value(value)
{
  setPlatform();
}

void
Foo::greet() const
{
  fmt::print("Hello foo: {}\n", m_value);
}

void
Foo::greetFromPlatform() const
{
  fmt::print("Hello foo: {} from {}\n", m_value, getPlatform());
}

std::string_view
Foo::getPlatform() const
{
  return m_platform;
}
