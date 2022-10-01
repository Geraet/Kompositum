// Copyright(c) 2016 artopantone.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include <kompositum/visitor.h>
#include <cstdio>

namespace Kompositum {

class Printer : public Visitor {
public:
    void visit(Leaf* leaf) override {
        doIndentation();
        printf("- Leaf (%lu)\n", leaf->getID());
    }

    void visit(Composite* composite) override {
        doIndentation();
        indent++;

        if (!composite->hasChildren()) {
            printf("- Composite (%lu): empty\n", composite->getID());
        } else {
            printf("+ Composite (%lu):\n", composite->getID());
            composite->visitChildren(*this);
        }

        indent--;
    }

private:
    void doIndentation() const {
        for (auto i = 0u; i < indent; ++i)
            printf("+--");
    }

    unsigned int indent = 0;
};

} // namespace Kompositum
