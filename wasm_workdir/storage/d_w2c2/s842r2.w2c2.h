#ifndef s842r2_H
#define s842r2_H

#include "w2c2_base.h"

typedef struct s842r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s842r2Instance;

void f0(s842r2Instance*);

void f1(s842r2Instance*);

U32 f2(s842r2Instance*);

void f3(s842r2Instance*,U32);

U32 f4(s842r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s842r2Instance*,U32,U32,U32,U32,U32);

void f6(s842r2Instance*,U32);

void f7(s842r2Instance*,U32,U32,U32);

void f8(s842r2Instance*,U32,U32,U32);

void s842r2____wasm_call_ctors(s842r2Instance*i);

void s842r2____wasm_apply_data_relocs(s842r2Instance*i);

U32 s842r2_func_1(s842r2Instance*i);

void s842r2_call_cb(s842r2Instance*i,U32 l0);

void s842r2Instantiate(s842r2Instance* instance, void* resolve(const char* module, const char* name));

void s842r2FreeInstance(s842r2Instance* instance);

#endif /* s842r2_H */

