/**
 * @brief   Declares the class Foo.
 *
 * @author  juan.castellanos
 * @date    2021-06-24
 *
 * @copyright 2021 Smartmatic Corp. All Rights Reserved.
 *
 * @section LICENSE
 *
 * Confidential Information of Smartmatic Labs. Not for disclosure or
 * distribution prior written consent. This software contains code, techniques
 * and know-how which is confidential and proprietary to Smartmatic.
 *
 * Use of this software is subject to the terms of an end user license
 * agreement.
 */

#ifndef FOO_H_
#define FOO_H_

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
  int m_value{};
  std::string_view m_platform;
};

}  // namespace Greet

#endif  /* FOO_H_ */
