// Copyright(c) 2016 René Hansen.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include "fwd.h"
#include "component.h"

#include <vector>

namespace Kompositum {

class Composite : public Component {
public:
    using Children = std::vector<ComponentPtr>;

    Composite(IDType uid) : Component{uid} {}

    void addChild(ComponentPtr child) { children.push_back(std::move(child)); }

private:
    Children children;
};

} // namespace Kompositum
