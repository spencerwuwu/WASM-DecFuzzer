#ifndef s668r2_H
#define s668r2_H

#include "w2c2_base.h"

typedef struct s668r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s668r2Instance;

void f0(s668r2Instance*);

void f1(s668r2Instance*);

U32 f2(s668r2Instance*);

void f3(s668r2Instance*,U32);

U32 f4(s668r2Instance*,U32,U32,U32,U32,U32);

void f5(s668r2Instance*,U32,U32,U32,U32,U32);

void f6(s668r2Instance*,U32);

void f7(s668r2Instance*,U32,U32,U32);

void f8(s668r2Instance*,U32,U32,U32);

void s668r2____wasm_call_ctors(s668r2Instance*i);

void s668r2____wasm_apply_data_relocs(s668r2Instance*i);

U32 s668r2_func_1(s668r2Instance*i);

void s668r2_call_cb(s668r2Instance*i,U32 l0);

void s668r2Instantiate(s668r2Instance* instance, void* resolve(const char* module, const char* name));

void s668r2FreeInstance(s668r2Instance* instance);

#endif /* s668r2_H */

