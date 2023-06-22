#ifndef s296r2_H
#define s296r2_H

#include "w2c2_base.h"

typedef struct s296r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s296r2Instance;

void f0(s296r2Instance*);

void f1(s296r2Instance*);

U32 f2(s296r2Instance*);

void f3(s296r2Instance*,U32);

U32 f4(s296r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s296r2Instance*,U32,U32,U32,U32,U32);

void f6(s296r2Instance*,U32);

void f7(s296r2Instance*,U32,U32,U32);

void f8(s296r2Instance*,U32,U32,U32);

void s296r2____wasm_call_ctors(s296r2Instance*i);

void s296r2____wasm_apply_data_relocs(s296r2Instance*i);

U32 s296r2_func_1(s296r2Instance*i);

void s296r2_call_cb(s296r2Instance*i,U32 l0);

void s296r2Instantiate(s296r2Instance* instance, void* resolve(const char* module, const char* name));

void s296r2FreeInstance(s296r2Instance* instance);

#endif /* s296r2_H */

