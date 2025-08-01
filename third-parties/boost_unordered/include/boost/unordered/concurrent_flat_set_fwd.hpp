/* Fast open-addressing concurrent hashset.
 *
 * Copyright 2023 Christian Mazakas.
 * Copyright 2023 Joaquin M Lopez Munoz.
 * Copyright 2024 Braden Ganetsky.
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 *
 * See https://www.boost.org/libs/unordered for library home page.
 */

#ifndef BOOST_UNORDERED_CONCURRENT_FLAT_SET_FWD_HPP
#define BOOST_UNORDERED_CONCURRENT_FLAT_SET_FWD_HPP

#include "../minconfig.hpp"
#include "../container_hash/hash_fwd.hpp"

#include <functional>
#include <memory>

#ifndef BOOST_NO_CXX17_HDR_MEMORY_RESOURCE
#include <memory_resource>
#endif

namespace boost {
  namespace unordered {

    template <class Key, class Hash = boost::hash<Key>,
      class Pred = std::equal_to<Key>,
      class Allocator = std::allocator<Key> >
    class concurrent_flat_set;

    template <class Key, class Hash, class KeyEqual, class Allocator>
    bool operator==(
      concurrent_flat_set<Key, Hash, KeyEqual, Allocator> const& lhs,
      concurrent_flat_set<Key, Hash, KeyEqual, Allocator> const& rhs);

    template <class Key, class Hash, class KeyEqual, class Allocator>
    bool operator!=(
      concurrent_flat_set<Key, Hash, KeyEqual, Allocator> const& lhs,
      concurrent_flat_set<Key, Hash, KeyEqual, Allocator> const& rhs);

    template <class Key, class Hash, class Pred, class Alloc>
    void swap(concurrent_flat_set<Key, Hash, Pred, Alloc>& x,
      concurrent_flat_set<Key, Hash, Pred, Alloc>& y)
      noexcept(noexcept(x.swap(y)));

    template <class K, class H, class P, class A, class Predicate>
    typename concurrent_flat_set<K, H, P, A>::size_type erase_if(
      concurrent_flat_set<K, H, P, A>& c, Predicate pred);

#ifndef BOOST_NO_CXX17_HDR_MEMORY_RESOURCE
    namespace pmr {
      template <class Key, class Hash = boost::hash<Key>,
        class Pred = std::equal_to<Key> >
      using concurrent_flat_set = boost::unordered::concurrent_flat_set<Key,
        Hash, Pred, std::pmr::polymorphic_allocator<Key> >;
    } // namespace pmr
#endif

  } // namespace unordered

  using boost::unordered::concurrent_flat_set;
} // namespace boost

#endif // BOOST_UNORDERED_CONCURRENT_FLAT_SET_FWD_HPP
