#ifndef s767r2_H
#define s767r2_H

#include "w2c2_base.h"

typedef struct s767r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s767r2Instance;

void f0(s767r2Instance*);

void f1(s767r2Instance*);

U32 f2(s767r2Instance*);

void f3(s767r2Instance*,U32);

U32 f4(s767r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s767r2Instance*,U32,U32,U32,U32,U32);

void f6(s767r2Instance*,U32);

void f7(s767r2Instance*,U32,U32,U32);

void f8(s767r2Instance*,U32,U32,U32);

void s767r2____wasm_call_ctors(s767r2Instance*i);

void s767r2____wasm_apply_data_relocs(s767r2Instance*i);

U32 s767r2_func_1(s767r2Instance*i);

void s767r2_call_cb(s767r2Instance*i,U32 l0);

void s767r2Instantiate(s767r2Instance* instance, void* resolve(const char* module, const char* name));

void s767r2FreeInstance(s767r2Instance* instance);

#endif /* s767r2_H */

