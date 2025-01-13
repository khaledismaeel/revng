#pragma once

//
// This file is distributed under the MIT License. See LICENSE.md for details.
//

#include "revng/ADT/RecursiveCoroutine.h"
#include "revng/Model/Identifier.h"
#include "revng/Model/Type.h"
#include "revng/Model/VerifyHelper.h"

// CLANG-FORMAT-INCLUDE-BREAK

#include "revng/Model/Generated/Early/StructField.h"

class model::StructField : public model::generated::StructField {
public:
  using generated::StructField::StructField;

public:
  bool verify() const debug_function;
  bool verify(bool Assert) const debug_function;
  RecursiveCoroutine<bool> verify(VerifyHelper &VH) const;
};

#include "revng/Model/Generated/Late/StructField.h"
