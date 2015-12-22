// Copyright(c) 2016 René Hansen.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include "fwd.h"

namespace Kompositum {

class Component {
public:
    Component(IDType uid) : uid{uid} {}

private:
    IDType uid = -1;
};

} // namespace Kompositum
