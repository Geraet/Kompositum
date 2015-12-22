// Copyright(c) 2016 Markus Engelbrecht.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include <memory>
#include <utility>

namespace Kompositum {

template <typename T, typename... Args> std::unique_ptr<T> make_unique(Args&&... args) {
    return std::unique_ptr<T>{new T{std::forward<Args>(args)...}};
}

} // namespace Kompositum
