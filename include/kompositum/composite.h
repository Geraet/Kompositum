// Copyright(c) 2016 René Hansen.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include "component.h"
#include "fwd.h"

#include <vector>

namespace Kompositum {

class Composite : public Component {
public:
    using Children = std::vector<ComponentPtr>;

    Composite(IDType uid) : Component{uid} {}

    void addChild(ComponentPtr child) { children.push_back(std::move(child)); }
    void addChildAt(Children::size_type index, ComponentPtr child) {
        if (index < children.size()) {
            children.insert(children.begin() + index, std::move(child));
        } else {
            addChild(std::move(child));
        }
    }

    void accept(Visitor& visitor) override { visitor.visit(this); }
    bool hasChildren() const { return children.empty() == false; }

    void visitChildren(Visitor& visitor) {
        for (auto& child : children)
            child->accept(visitor);
    }

private:
    Children children;
};

} // namespace Kompositum
