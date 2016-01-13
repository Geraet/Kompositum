// Copyright(c) 2016 René Hansen.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#include <kompositum/leaf.h>
#include <kompositum/composite.h>
#include <kompositum/component.h>
#include <kompositum/util.h>
#include <kompositum/printer.h>

using namespace Kompositum;

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
}
