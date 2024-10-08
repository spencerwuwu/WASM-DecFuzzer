
// ANCHOR: imports
// We're going to use RLBox in a single-threaded environment.
#define RLBOX_SINGLE_THREADED_INVOCATIONS

// All calls into the sandbox are resolved statically.
#define RLBOX_USE_STATIC_CALLS() rlbox_wasm2c_sandbox_lookup_symbol
#define RLBOX_WASM2C_MODULE_NAME {{libname}}

#include <stdio.h>
#include <cassert>
#include "base.h"
#include "{{libname}}.wasm.h"
#include "rlbox.hpp"
#include "rlbox_wasm2c_sandbox.hpp"


using namespace std;
using namespace rlbox;

// Define base type for {{libname}} using the noop sandbox
RLBOX_DEFINE_BASE_TYPES_FOR({{libname}}, wasm2c);


int main(int argc, char const *argv[]) {

  rlbox_sandbox_{{libname}} sandbox;
  sandbox.create_sandbox();

  auto ok = sandbox.invoke_sandbox_function(func_1)
                   .copy_and_verify([](unsigned ret){
    printf("checksum = %X\n", ret);
    return ret;
  });

  sandbox.destroy_sandbox();

  return 0;
}
// ANCHOR_END: main-end

