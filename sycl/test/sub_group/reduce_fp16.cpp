// UNSUPPORTED: cuda
// CUDA compilation and runtime do not yet support sub-groups.
//
// RUN: %clangxx -fsycl -fsycl-targets=%sycl_triple %s -o %t.out
// RUN: %GPU_RUN_PLACEHOLDER %t.out
///==---------------- reduce_fp16.cpp - SYCL sub_group reduce test ----*- C++ -*---==//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===-----------------------------------------------------------------------------===//

#include "reduce.hpp"

int main() {
  queue Queue;
  if (!core_sg_supported(Queue.get_device())) {
    std::cout << "Skipping test\n";
    return 0;
  }
  check<class KernelName_oMg, cl::sycl::half>(Queue);
  std::cout << "Test passed." << std::endl;
  return 0;
}
