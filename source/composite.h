// Copyright(c) 2016 René Hansen.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include "component.h"

#include <vector>

namespace Kompositum {

class Composite : public Component {
public:
    using Children = std::vector<Component*>;

    Composite(std::int64_t uid) : Component(uid) {}

    void addChild(Component* child) { children.push_back(child); }

private:
    Children children;
};
}
