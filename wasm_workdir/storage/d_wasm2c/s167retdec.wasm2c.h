/* Automatically generated by wasm2c */
#ifndef S167RETDEC_WASM2C_H_GENERATED_
#define S167RETDEC_WASM2C_H_GENERATED_

#include "wasm-rt.h"

#include <stdint.h>

#ifndef WASM_RT_CORE_TYPES_DEFINED
#define WASM_RT_CORE_TYPES_DEFINED
typedef uint8_t u8;
typedef int8_t s8;
typedef uint16_t u16;
typedef int16_t s16;
typedef uint32_t u32;
typedef int32_t s32;
typedef uint64_t u64;
typedef int64_t s64;
typedef float f32;
typedef double f64;
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct w2c_env;
extern wasm_rt_funcref_table_t* w2c_env_0x5F_indirect_function_table(struct w2c_env*);
extern u32* w2c_env_0x5F_memory_base(struct w2c_env*);
extern u32* w2c_env_0x5F_stack_pointer(struct w2c_env*);
extern u32* w2c_env_0x5F_table_base(struct w2c_env*);
extern wasm_rt_memory_t* w2c_env_memory(struct w2c_env*);

typedef struct w2c_s167retdec {
  /* import: 'env' '__indirect_function_table' */
  wasm_rt_funcref_table_t *w2c_env_0x5F_indirect_function_table;
  /* import: 'env' '__memory_base' */
  u32 *w2c_env_0x5F_memory_base;
  /* import: 'env' '__stack_pointer' */
  u32 *w2c_env_0x5F_stack_pointer;
  /* import: 'env' '__table_base' */
  u32 *w2c_env_0x5F_table_base;
  /* import: 'env' 'memory' */
  wasm_rt_memory_t *w2c_env_memory;
} w2c_s167retdec;

void wasm2c_s167retdec_instantiate(w2c_s167retdec*, struct w2c_env*);
void wasm2c_s167retdec_free(w2c_s167retdec*);
wasm_rt_func_type_t wasm2c_s167retdec_get_func_type(uint32_t param_count, uint32_t result_count, ...);

extern const u32 wasm2c_s167retdec_min_env_0x5F_indirect_function_table;
extern const u32 wasm2c_s167retdec_max_env_0x5F_indirect_function_table;
extern const u64 wasm2c_s167retdec_min_env_memory;
extern const u64 wasm2c_s167retdec_max_env_memory;
extern const u8 wasm2c_s167retdec_is64_env_memory;

/* export: '__wasm_call_ctors' */
void w2c_s167retdec_0x5F_wasm_call_ctors(w2c_s167retdec*);

/* export: '__wasm_apply_data_relocs' */
void w2c_s167retdec_0x5F_wasm_apply_data_relocs(w2c_s167retdec*);

/* export: 'func_1' */
u32 w2c_s167retdec_func_1(w2c_s167retdec*);

/* export: 'call_cb' */
void w2c_s167retdec_call_cb(w2c_s167retdec*, u32);

#ifdef __cplusplus
}
#endif

#endif  /* S167RETDEC_WASM2C_H_GENERATED_ */
