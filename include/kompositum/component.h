// Copyright(c) 2016 René Hansen.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include "fwd.h"
#include "visitor.h"

namespace Kompositum {

class Component {
public:
    Component(IDType uid) : uid{uid} {}
	virtual ~Component () = default;

	IDType getID () const { return uid; }

	virtual void accept (Visitor& visitor) = 0;
private:
    IDType uid = -1;
};

} // namespace Kompositum
