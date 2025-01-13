#pragma once

//
// This file is distributed under the MIT License. See LICENSE.md for details.
//

// CLANG-FORMAT-INCLUDE-BREAK

#include "revng/Model/Generated/Early/NamingConfiguration.h"

class model::NamingConfiguration
  : public model::generated::NamingConfiguration {
public:
  using generated::NamingConfiguration::NamingConfiguration;

  // TODO: remove these after the support the default TTG values is added.

  llvm::StringRef unnamedSegmentPrefix() const {
    if (UnnamedSegmentPrefix().empty())
      return "segment_";
    else
      return UnnamedSegmentPrefix();
  }

  llvm::StringRef unnamedFunctionPrefix() const {
    if (UnnamedFunctionPrefix().empty())
      return "function_";
    else
      return UnnamedFunctionPrefix();
  }
  llvm::StringRef unnamedDynamicFunctionPrefix() const {
    if (UnnamedDynamicFunctionPrefix().empty())
      return "dynamic_";
    else
      return UnnamedDynamicFunctionPrefix();
  }

  llvm::StringRef unnamedTypeDefinitionPrefix() const {
    if (UnnamedTypeDefinitionPrefix().empty())
      return "";
    else
      return UnnamedTypeDefinitionPrefix();
  }

  llvm::StringRef unnamedEnumEntryPrefix() const {
    if (UnnamedEnumEntryPrefix().empty())
      return "enum_entry_";
    else
      return UnnamedEnumEntryPrefix();
  }
  llvm::StringRef unnamedStructFieldPrefix() const {
    if (UnnamedStructFieldPrefix().empty())
      return "offset_";
    else
      return UnnamedStructFieldPrefix();
  }
  llvm::StringRef unnamedUnionFieldPrefix() const {
    if (UnnamedUnionFieldPrefix().empty())
      return "member_";
    else
      return UnnamedUnionFieldPrefix();
  }

  llvm::StringRef unnamedFunctionArgumentPrefix() const {
    if (UnnamedFunctionArgumentPrefix().empty())
      return "argument_";
    else
      return UnnamedFunctionArgumentPrefix();
  }
  llvm::StringRef unnamedFunctionRegisterPrefix() const {
    if (UnnamedFunctionRegisterPrefix().empty())
      return "register_";
    else
      return UnnamedFunctionRegisterPrefix();
  }

  llvm::StringRef structPaddingPrefix() const {
    if (StructPaddingPrefix().empty())
      return "padding_at_";
    else
      return StructPaddingPrefix();
  }
  llvm::StringRef artificialReturnValuePrefix() const {
    if (ArtificialReturnValuePrefix().empty())
      return "artificial_struct_returned_by_";
    else
      return ArtificialReturnValuePrefix();
  }
  llvm::StringRef artificialArrayWrapperPrefix() const {
    if (ArtificialArrayWrapperPrefix().empty())
      return "artificial_wrapper_";
    else
      return ArtificialArrayWrapperPrefix();
  }
  llvm::StringRef artificialArrayWrapperFieldName() const {
    if (ArtificialArrayWrapperFieldName().empty())
      return "the_array";
    else
      return ArtificialArrayWrapperFieldName();
  }

  llvm::StringRef collisionResolutionSuffix() const {
    if (CollisionResolutionSuffix().empty())
      return "_";
    else
      return CollisionResolutionSuffix();
  }
};

#include "revng/Model/Generated/Late/NamingConfiguration.h"
