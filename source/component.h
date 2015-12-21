// Copyright(c) 2016 René Hansen.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include <cstdint>

namespace Kompositum {

class Component {
public:
    Component(std::int64_t uid) : uid(uid) {}

private:
    std::int64_t uid = -1;
};

} // namespace Kompositum
