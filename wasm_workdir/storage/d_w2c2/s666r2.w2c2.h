#ifndef s666r2_H
#define s666r2_H

#include "w2c2_base.h"

typedef struct s666r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s666r2Instance;

void f0(s666r2Instance*);

void f1(s666r2Instance*);

U32 f2(s666r2Instance*);

void f3(s666r2Instance*,U32);

U32 f4(s666r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s666r2Instance*,U32,U32,U32,U32,U32);

void f6(s666r2Instance*,U32);

void f7(s666r2Instance*,U32,U32,U32);

void f8(s666r2Instance*,U32,U32,U32);

void s666r2____wasm_call_ctors(s666r2Instance*i);

void s666r2____wasm_apply_data_relocs(s666r2Instance*i);

U32 s666r2_func_1(s666r2Instance*i);

void s666r2_call_cb(s666r2Instance*i,U32 l0);

void s666r2Instantiate(s666r2Instance* instance, void* resolve(const char* module, const char* name));

void s666r2FreeInstance(s666r2Instance* instance);

#endif /* s666r2_H */

