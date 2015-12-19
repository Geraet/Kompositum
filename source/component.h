// Copyright René Hansen 2016.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <cstdint>

namespace Kompositum
{

class Component
{
public:
	Component(int64_t uid)
	: uid(uid)
	{
	}

private:
	int64_t uid = -1;
};

}