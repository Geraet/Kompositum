// Copyright(c) 2016 Markus Engelbrecht.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include <cstdint>
#include <memory>

namespace Kompositum {

class Root;

class Component;
using ComponentPtr = std::unique_ptr<Component>;

class Composite;
class Leaf;

class Visitor;

using IDType = std::uint64_t;

} // namespace Kompositum
