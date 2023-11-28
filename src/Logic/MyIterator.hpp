#pragma once

#include "Logic/namespace.hpp"
#include <memory>

namespace cs::game
{
    template <typename T>
    class MyIterator {
    protected:
        struct Iterator {
        public:
            using iterator_category = std::forward_iterator_tag;
            using difference_type   = std::ptrdiff_t;
            using value_type        = T;
            using pointer           = T*;
            using reference         = T&;

            Iterator(pointer ptr) : _ptr(ptr) {}

            reference operator*() const { return *_ptr; }
            pointer operator->() { return _ptr; }
            Iterator& operator++() { _ptr++; return *this; }
            Iterator operator++(int) { Iterator tmp = *this; ++(*this); return tmp; }
            friend bool operator== (const Iterator& a, const Iterator& b) { return a._ptr == b._ptr; };
            friend bool operator!= (const Iterator& a, const Iterator& b) { return a._ptr != b._ptr; };

        private:
            // T data;
            pointer _ptr;
        };
    };
} // namespace cs::game
