/**
 * @brief   Declares the class Foo.
 *
 * @author  spjuanjoc
 * @date    2021-06-24
 *
 */

#ifndef FOO_H
#define FOO_H

#include <string_view>

namespace Greet
{

class Foo
{
public:
  Foo() = default;

  explicit Foo(int value);

  void greet() const;

  void greetFromPlatform() const;

  void setPlatform();

  std::string_view getPlatform() const;

private:
  int              m_value {};
  std::string_view m_platform;
};

}  // namespace Greet

#endif /* FOO_H */
