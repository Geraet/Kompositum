// Copyright(c) 2016 René Hansen.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#include <kompositum/leaf.h>
#include <kompositum/composite.h>
#include <kompositum/component.h>
#include <kompositum/util.h>

using namespace Kompositum;

int main(void) {
    IDType id = 0ull;

    Component component(id++);
    Composite composite(id++);
    Leaf leaf(id++);

    composite.addChild(make_unique<Leaf>(id++));
    composite.addChild(make_unique<Leaf>(id++));
    composite.addChild(make_unique<Leaf>(id++));

    composite.addChildAt(1, make_unique<Leaf>(id++));
    composite.addChildAt(1000, make_unique<Leaf>(id++));
}
