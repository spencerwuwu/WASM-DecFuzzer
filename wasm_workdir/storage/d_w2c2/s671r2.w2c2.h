#ifndef s671r2_H
#define s671r2_H

#include "w2c2_base.h"

typedef struct s671r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s671r2Instance;

void f0(s671r2Instance*);

void f1(s671r2Instance*);

U32 f2(s671r2Instance*);

void f3(s671r2Instance*,U32);

U32 f4(s671r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s671r2Instance*,U32,U32,U32,U32,U32);

void f6(s671r2Instance*,U32);

void f7(s671r2Instance*,U32,U32,U32);

void f8(s671r2Instance*,U32,U32,U32);

void s671r2____wasm_call_ctors(s671r2Instance*i);

void s671r2____wasm_apply_data_relocs(s671r2Instance*i);

U32 s671r2_func_1(s671r2Instance*i);

void s671r2_call_cb(s671r2Instance*i,U32 l0);

void s671r2Instantiate(s671r2Instance* instance, void* resolve(const char* module, const char* name));

void s671r2FreeInstance(s671r2Instance* instance);

#endif /* s671r2_H */

