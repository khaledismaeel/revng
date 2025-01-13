#pragma once

//
// This file is distributed under the MIT License. See LICENSE.md for details.
//

#include "revng/ADT/MutableSet.h"
#include "revng/Model/CommonFunctionMethods.h"
#include "revng/Model/Identifier.h"
#include "revng/Model/VerifyHelper.h"

// CLANG-FORMAT-INCLUDE-BREAK

#include "revng/Model/Generated/Early/DynamicFunction.h"

class model::DynamicFunction
  : public model::generated::DynamicFunction,
    public model::CommonFunctionMethods<DynamicFunction> {
public:
  using generated::DynamicFunction::DynamicFunction;

public:
  bool verify() const debug_function;
  bool verify(bool Assert) const debug_function;
  bool verify(VerifyHelper &VH) const;
};

#include "revng/Model/Generated/Late/DynamicFunction.h"
