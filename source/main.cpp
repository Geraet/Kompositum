// Copyright(c) 2016 René Hansen.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#include "leaf.h"
#include "composite.h"
#include "component.h"
#include "util.h"

using namespace Kompositum;

int main(void) {
    Component component(0);
    Composite composite(1);
    Leaf leaf(2);
    composite.addChild(make_unique<Leaf>(3ull));
}
