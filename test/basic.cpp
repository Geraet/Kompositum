// Copyright(c) 2016 René Hansen.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#include <kompositum/builder.h>
#include <kompositum/component.h>
#include <kompositum/composite.h>
#include <kompositum/leaf.h>
#include <kompositum/printer.h>
#include <kompositum/util.h>

using namespace Kompositum;

static const ParentChildTreeDef kTreeDef = {
    {1, 2}, {1, 3}, {1, 4}, {4, 5}, {4, 6}, {1, 7},

};

int main(void) {
    Composite composite(1);

    composite.addChild(make_unique<Leaf>(2ull));
    composite.addChild(make_unique<Composite>(3ull));

    auto composite4 = make_unique<Composite>(4ull);
    composite4->addChild(make_unique<Leaf>(5ull));
    composite4->addChild(make_unique<Leaf>(6ull));

    composite.addChild(std::move(composite4));

    composite.addChild(make_unique<Leaf>(7ull));

    {
        Printer printer;
        composite.accept(printer);
    }

    auto componentTree = buildComposite(1, kTreeDef);

    {
        Printer printer;
        componentTree->accept(printer);
    }
}
