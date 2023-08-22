// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#include "wasinnmodule.h"
#include "wasinnfunc.h"

namespace WasmEdge {
namespace Host {

WasiNNModule::WasiNNModule() : ModuleInstance("wasi_ephemeral_nn") {
  addHostFunc("load", std::make_unique<WasiNNLoad>(Env));
  addHostFunc("load_by_name", std::make_unique<WasiNNLoadByName>(Env));
  addHostFunc("init_execution_context",
              std::make_unique<WasiNNInitExecCtx>(Env));
  addHostFunc("set_input", std::make_unique<WasiNNSetInput>(Env));
  addHostFunc("get_output", std::make_unique<WasiNNGetOutput>(Env));
  addHostFunc("compute", std::make_unique<WasiNNCompute>(Env));
}

} // namespace Host
} // namespace WasmEdge
