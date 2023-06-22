#ifndef s144r2_H
#define s144r2_H

#include "w2c2_base.h"

typedef struct s144r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s144r2Instance;

void f0(s144r2Instance*);

void f1(s144r2Instance*);

U32 f2(s144r2Instance*);

void f3(s144r2Instance*,U32);

U32 f4(s144r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s144r2Instance*,U32,U32,U32,U32,U32);

void f6(s144r2Instance*,U32);

void f7(s144r2Instance*,U32,U32,U32);

void f8(s144r2Instance*,U32,U32,U32);

void s144r2____wasm_call_ctors(s144r2Instance*i);

void s144r2____wasm_apply_data_relocs(s144r2Instance*i);

U32 s144r2_func_1(s144r2Instance*i);

void s144r2_call_cb(s144r2Instance*i,U32 l0);

void s144r2Instantiate(s144r2Instance* instance, void* resolve(const char* module, const char* name));

void s144r2FreeInstance(s144r2Instance* instance);

#endif /* s144r2_H */

