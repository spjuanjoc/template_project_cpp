/**
 * @brief   Declares the class Foo.
 *
 * @author  spjuanjoc
 * @date    2021-06-24
 *
 */

#ifndef FOO_H
#define FOO_H

#include <string>

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

  std::string getPlatform() const;

private:
  int         m_value {};
  std::string m_platform;
};

}  // namespace Greet

#endif /* FOO_H */
