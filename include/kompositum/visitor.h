// Copyright(c) 2016 artopantone.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include "fwd.h"

namespace Kompositum {

class Visitor {
public:
    virtual ~Visitor() = default;

    virtual void visit(Leaf* leaf) {}
    virtual void visit(Composite* composite) {}
};

} // namespace Kompositum
