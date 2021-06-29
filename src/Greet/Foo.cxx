/**
* @brief   Implements the class Foo specialized for Windows.
 *
 * @author  juan.castellanos
 * @date    2021-06-24
 */

#include "Greet/Foo.h"
#include <fmt/core.h>

using namespace Greet;

void Foo::setPlatform()
{
  m_platform = "Windows";
}
