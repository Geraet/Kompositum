// Copyright(c) 2016 René Hansen.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include "fwd.h"
#include "composite.h"
#include <map>

namespace Kompositum {

class Root : public Composite {
public:
    using IdentityMap = std::map<ComponentPtr>;

    Root(IDType uid) : Component{uid} {}

private:
	IdentityMap identities;
};

} // namespace Kompositum
