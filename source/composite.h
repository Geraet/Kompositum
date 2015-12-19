// Copyright(c) 2016 René Hansen.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include "component.h"

#include <vector>

namespace Kompositum
{

class Composite : public Component
{
public:
	using Children = std::vector<Composite*>;

	Composite(int64_t uid)
	: Component(uid)
	{
	}

private:
	Children children;
};

}
