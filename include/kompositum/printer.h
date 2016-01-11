// Copyright(c) 2016 artopantone.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include <kompositum/visitor.h>

namespace Kompositum {

class Printer : public Visitor {
public:
  void visit(Leaf *leaf) override {
    doIndentation();
    printf("- Leaf (%I64d)\n", leaf->getID());
  }

  void visit(Composite *composite) override {
    doIndentation();
    indent++;

    if (!composite->hasChildren()) {
      printf("- Composite (%I64d): empty\n", composite->getID());
    } else {
      printf("+ Composite (%I64d):\n", composite->getID());
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
