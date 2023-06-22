#ifndef s98r2_H
#define s98r2_H

#include "w2c2_base.h"

typedef struct s98r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s98r2Instance;

void f0(s98r2Instance*);

void f1(s98r2Instance*);

U32 f2(s98r2Instance*);

void f3(s98r2Instance*,U32);

U32 f4(s98r2Instance*,U32,U32,U32,U32,U32);

void f5(s98r2Instance*,U32,U32,U32,U32,U32);

void f6(s98r2Instance*,U32);

void f7(s98r2Instance*,U32,U32,U32);

void f8(s98r2Instance*,U32,U32,U32);

void s98r2____wasm_call_ctors(s98r2Instance*i);

void s98r2____wasm_apply_data_relocs(s98r2Instance*i);

U32 s98r2_func_1(s98r2Instance*i);

void s98r2_call_cb(s98r2Instance*i,U32 l0);

void s98r2Instantiate(s98r2Instance* instance, void* resolve(const char* module, const char* name));

void s98r2FreeInstance(s98r2Instance* instance);

#endif /* s98r2_H */

