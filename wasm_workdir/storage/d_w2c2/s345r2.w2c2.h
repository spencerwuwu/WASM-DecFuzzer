#ifndef s345r2_H
#define s345r2_H

#include "w2c2_base.h"

typedef struct s345r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s345r2Instance;

void f0(s345r2Instance*);

void f1(s345r2Instance*);

U32 f2(s345r2Instance*);

void f3(s345r2Instance*,U32);

U32 f4(s345r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s345r2Instance*,U32,U32,U32,U32,U32);

void f6(s345r2Instance*,U32);

void f7(s345r2Instance*,U32,U32,U32);

void f8(s345r2Instance*,U32,U32,U32);

void s345r2____wasm_call_ctors(s345r2Instance*i);

void s345r2____wasm_apply_data_relocs(s345r2Instance*i);

U32 s345r2_func_1(s345r2Instance*i);

void s345r2_call_cb(s345r2Instance*i,U32 l0);

void s345r2Instantiate(s345r2Instance* instance, void* resolve(const char* module, const char* name));

void s345r2FreeInstance(s345r2Instance* instance);

#endif /* s345r2_H */

