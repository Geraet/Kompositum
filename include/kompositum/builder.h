// Copyright(c) 2016 René Hansen.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include <kompositum/visitor.h>
#include <kompositum/component.h>
#include <kompositum/composite.h>
#include <kompositum/leaf.h>
#include <kompositum/util.h>
#include <map>

namespace Kompositum {
using ParentChildTreeDef = std::multimap<IDType, IDType>;

ComponentPtr buildComposite(IDType id, const ParentChildTreeDef& treeMap) {
    bool hasChildren = treeMap.find(id) != treeMap.end();
    if (hasChildren) {
        auto composite = make_unique<Composite>(id);

        auto range = treeMap.equal_range(id);
        for (auto child = range.first; child != range.second; ++child) {
            composite->addChild(buildComposite(child->second, treeMap));
        }

        return std::move(composite);
    }

    return make_unique<Leaf>(id);
}

} // namespace Kompositum
