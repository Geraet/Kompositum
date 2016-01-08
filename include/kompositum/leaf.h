// Copyright(c) 2016 René Hansen.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include "fwd.h"
#include "component.h"

namespace Kompositum {

class Leaf : public Component {
public:
    Leaf(IDType uid) : Component{uid} {}

	void accept (Visitor& visitor) override { visitor.visit (this); }

private:
};

} // namespace Kompositum
