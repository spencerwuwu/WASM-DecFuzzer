#ifndef s533r2_H
#define s533r2_H

#include "w2c2_base.h"

typedef struct s533r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s533r2Instance;

void f0(s533r2Instance*);

void f1(s533r2Instance*);

U32 f2(s533r2Instance*);

void f3(s533r2Instance*,U32);

U32 f4(s533r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s533r2Instance*,U32,U32,U32,U32,U32);

void f6(s533r2Instance*,U32);

void f7(s533r2Instance*,U32,U32,U32);

void f8(s533r2Instance*,U32,U32,U32);

void s533r2____wasm_call_ctors(s533r2Instance*i);

void s533r2____wasm_apply_data_relocs(s533r2Instance*i);

U32 s533r2_func_1(s533r2Instance*i);

void s533r2_call_cb(s533r2Instance*i,U32 l0);

void s533r2Instantiate(s533r2Instance* instance, void* resolve(const char* module, const char* name));

void s533r2FreeInstance(s533r2Instance* instance);

#endif /* s533r2_H */

