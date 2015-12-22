// Copyright(c) 2016 René Hansen.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#include <kompositum/leaf.h>
#include <kompositum/composite.h>
#include <kompositum/component.h>
#include <kompositum/util.h>

using namespace Kompositum;

int main(void) {
    Component component(0);
    Composite composite(1);
    Leaf leaf(2);
    composite.addChild(make_unique<Leaf>(3ull));
}
