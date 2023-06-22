#ifndef s327r2_H
#define s327r2_H

#include "w2c2_base.h"

typedef struct s327r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s327r2Instance;

void f0(s327r2Instance*);

void f1(s327r2Instance*);

U32 f2(s327r2Instance*);

void f3(s327r2Instance*,U32);

U32 f4(s327r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s327r2Instance*,U32,U32,U32,U32,U32);

void f6(s327r2Instance*,U32);

void f7(s327r2Instance*,U32,U32,U32);

void f8(s327r2Instance*,U32,U32,U32);

void s327r2____wasm_call_ctors(s327r2Instance*i);

void s327r2____wasm_apply_data_relocs(s327r2Instance*i);

U32 s327r2_func_1(s327r2Instance*i);

void s327r2_call_cb(s327r2Instance*i,U32 l0);

void s327r2Instantiate(s327r2Instance* instance, void* resolve(const char* module, const char* name));

void s327r2FreeInstance(s327r2Instance* instance);

#endif /* s327r2_H */

