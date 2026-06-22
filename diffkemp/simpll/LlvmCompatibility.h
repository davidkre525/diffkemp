//===---- LlvmCompatibility.h - Ensuring compatibilty for llvm versions
//----===//
//
//       SimpLL - Program simplifier for analysis of semantic difference      //
//
// This file is published under Apache 2.0 license. See LICENSE for details.
// Author: Viktor Malik, vmalik@redhat.com
//===----------------------------------------------------------------------===//
///
/// \file
/// This file contains helper functions that keep SimpLL compatible with
/// different versions of LLVM without requiring substantial code duplication.
///
///
//===----------------------------------------------------------------------===//

#ifndef DIFFKEMP_SIMPLL_LLVMCOMPATIBILITY_H
#define DIFFKEMP_SIMPLL_LLVMCOMPATIBILITY_H

#include <llvm/Config/llvm-config.h>
#include <llvm/IR/Instruction.h>

namespace llvm_compat {

#if LLVM_VERSION_MAJOR >= 20
inline auto getIterator(llvm::Instruction *I) { return I->getIterator(); }
#else
inline auto getIterator(llvm::Instruction *I) { return I; }
#endif

} // namespace llvm_compat

#endif // DIFFKEMP_SIMPLL_LLVMCOMPATIBILITY_H
