//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++03, c++11, c++14

// Make sure TEST_HAS_QUICK_EXIT (defined by the test suite) and
// _LIBCPP_HAS_QUICK_EXIT (defined by libc++) stay in sync.

#include <__config>
#include "test_macros.h"

#if defined(TEST_HAS_QUICK_EXIT) != defined(_LIBCPP_HAS_QUICK_EXIT)
#   error "TEST_HAS_QUICK_EXIT and _LIBCPP_HAS_QUICK_EXIT are out of sync"
#endif
