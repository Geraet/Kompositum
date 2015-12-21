// Copyright(c) 2016 Markus Engelbrecht.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include <cstdint>
#include <memory>

namespace Kompositum {

class Component;
using ComponentPtr = std::unique_ptr<Component>;

class Composite;
class Leaf;

using IDType = std::uint64_t;

} // namespace Kompositum
