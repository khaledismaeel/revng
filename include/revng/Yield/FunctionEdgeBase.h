#pragma once

//
// This file is distributed under the MIT License. See LICENSE.md for details.
//

#include "revng/Model/VerifyHelper.h"
#include "revng/Support/BasicBlockID/YAMLTraits.h"
#include "revng/Support/MetaAddress.h"
#include "revng/Support/MetaAddress/YAMLTraits.h"
#include "revng/Yield/FunctionEdgeType.h"

// CLANG-FORMAT-INCLUDE-BREAK

#include "revng/Yield/Generated/Early/FunctionEdgeBase.h"

class yield::FunctionEdgeBase : public yield::generated::FunctionEdgeBase {
public:
  using generated::FunctionEdgeBase::FunctionEdgeBase;

public:
  bool isDirect() const { return Destination().isValid(); }
  bool isIndirect() const { return not isDirect(); }

public:
  bool verify() const debug_function;
  bool verify(bool Assert) const debug_function;
  bool verify(model::VerifyHelper &VH) const;
};

#include "revng/Yield/Generated/Late/FunctionEdgeBase.h"
