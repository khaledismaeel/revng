#pragma once

//
// This file is distributed under the MIT License. See LICENSE.md for details.
//

#include "revng/EarlyFunctionAnalysis/ControlFlowGraphCache.h"
#include "revng/Support/MetaAddress.h"
#include "revng/Support/MetaAddress/YAMLTraits.h"
#include "revng/Support/YAMLTraits.h"
#include "revng/TupleTree/TupleTree.h"

// CLANG-FORMAT-INCLUDE-BREAK

#include "Generated/Early/DecoratedFunction.h"

class revng::DecoratedFunction : public revng::generated::DecoratedFunction {
public:
  using revng::generated::DecoratedFunction::DecoratedFunction;
};

#include "Generated/Late/DecoratedFunction.h"
