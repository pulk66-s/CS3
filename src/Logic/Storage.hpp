#pragma once

#include "Logic/namespace.hpp"
#include "Logic/MyIterator.hpp"
#include <vector>
#include <algorithm>

namespace cs::game
{
    template <typename T>
    class Storage : public MyIterator<T> {
    protected:
        std::vector<T> _datas = {};
    
    public:
        void add(T t) {
            _datas.push_back(t);
        }

        void remove(T t) {
            _datas.erase(std::remove(_datas.begin(), _datas.end(), t), _datas.end());
        }

        void clear() {
            _datas.clear();
        }

        std::size_t size() {
            return _datas.size();
        }

        typename MyIterator<T>::Iterator begin() {
            return typename MyIterator<T>::Iterator(&_datas[0]);
        }

        typename MyIterator<T>::Iterator end() {
            return typename MyIterator<T>::Iterator(&_datas[_datas.size()]);
        }
    };
} // namespace cs::game
