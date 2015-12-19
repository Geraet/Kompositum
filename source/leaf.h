// Copyright René Hansen 2016.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include "component.h"

namespace Kompositum
{

class Leaf : public Component
{
public:
	Leaf(int64_t uid)
	: Component(uid)
	{
	}

private:

};

}
