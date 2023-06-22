#ifndef s127r2_H
#define s127r2_H

#include "w2c2_base.h"

typedef struct s127r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s127r2Instance;

void f0(s127r2Instance*);

void f1(s127r2Instance*);

U32 f2(s127r2Instance*);

void f3(s127r2Instance*,U32);

U32 f4(s127r2Instance*,U32,U32,U32);

void f5(s127r2Instance*,U32,U32,U32,U32,U32);

void f6(s127r2Instance*,U32);

void f7(s127r2Instance*,U32,U32,U32);

void f8(s127r2Instance*,U32,U32,U32);

void s127r2____wasm_call_ctors(s127r2Instance*i);

void s127r2____wasm_apply_data_relocs(s127r2Instance*i);

U32 s127r2_func_1(s127r2Instance*i);

void s127r2_call_cb(s127r2Instance*i,U32 l0);

void s127r2Instantiate(s127r2Instance* instance, void* resolve(const char* module, const char* name));

void s127r2FreeInstance(s127r2Instance* instance);

#endif /* s127r2_H */

