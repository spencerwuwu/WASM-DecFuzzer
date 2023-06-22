#ifndef s253r2_H
#define s253r2_H

#include "w2c2_base.h"

typedef struct s253r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s253r2Instance;

void f0(s253r2Instance*);

void f1(s253r2Instance*);

U32 f2(s253r2Instance*);

void f3(s253r2Instance*,U32);

void f4(s253r2Instance*,U32);

void s253r2____wasm_call_ctors(s253r2Instance*i);

void s253r2____wasm_apply_data_relocs(s253r2Instance*i);

U32 s253r2_func_1(s253r2Instance*i);

void s253r2_call_cb(s253r2Instance*i,U32 l0);

void s253r2Instantiate(s253r2Instance* instance, void* resolve(const char* module, const char* name));

void s253r2FreeInstance(s253r2Instance* instance);

#endif /* s253r2_H */

