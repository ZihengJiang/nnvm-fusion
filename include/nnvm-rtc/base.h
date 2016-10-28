/*!
 *  Copyright (c) 2016 by Contributors
 * \file base.h
 * \brief defines basic types
 */
#ifndef NNVM_RTC_BASE_H_
#define NNVM_RTC_BASE_H_

#include <dmlc/logging.h>
#include <nnvm/graph.h>
#include <nnvm/node.h>
#include <functional>
#include <vector>
#include <string>

#define NNVM_RTC_DEBUG 0

namespace nnvm {
namespace rtc {

class AST;
class RTC;

using Kernel        = std::pair<std::string, std::string>;
using KernelMap     = std::unordered_map<uint32_t, Kernel>;
using RTCMap        = std::unordered_map<uint32_t, RTC>;
using ASTPtr = std::shared_ptr<AST>;

using FCodeGen = std::function<std::vector<ASTPtr>(
    const NodePtr& nodeptr,
    const std::vector<ASTPtr>& inputs)>;

} // namespace rtc
} // namespace nnvm

#endif  // NNVM_RTC_BASE_H_
