//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int64_t _fini(void);
int64_t _init(void);
int64_t _start(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
void crc32_8bytes(uint32_t val);
void crc32_byte(unsigned char b);
void crc32_gentab(void);
char func_1(void);
int32_t function_1030(char * format, ...);
int32_t function_1040(char * s1, char * s2);
int64_t function_1080(void);
int64_t function_10b0(void);
int64_t function_10f0(void);
int64_t function_1140(void);
void platform_main_begin(void);
void platform_main_end(int32_t crc, int32_t flag);
int32_t set_var(int32_t g_2_l, int32_t g_4_l, int16_t g_5_l, int32_t g_15_l, int32_t g_23_l, int16_t g_54_l, int16_t g_57_l, int32_t g_58_l, int32_t g_62_l, int16_t g_68_l, int32_t g_70_l, int32_t g_73_l, int32_t g_74_l, char g_77_l, int32_t g_127_l, int32_t g_130_l, int32_t g_153_l, char g_198_l, int32_t g_212_l, int32_t g_229_l, int32_t g_230_l, int32_t g_246_l, int32_t g_247_l, int16_t g_267_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = -0x7eeb8974; // 0x5020
int32_t g3 = 3; // 0x5024
int32_t g4 = -0x2a968b13; // 0x5028
int32_t g5 = 0x69ff4caa; // 0x502c
int32_t g6 = 0x8fff9; // 0x5030
int32_t g7 = -0x2a0fff8; // 0x5032
int32_t g8 = 0x1ca8fd5f; // 0x5034
int32_t g9 = 0x21fd0095; // 0x5038
int16_t g10 = -0x66cc; // 0x503c
int32_t g11 = 0xdb1b793; // 0x5040
int32_t g12 = -0x4434a983; // 0x5044
int32_t g13 = 1; // 0x5048
int32_t g14 = 45; // 0x504c
int32_t g15 = -0x4db2b9af; // 0x5050
int32_t g16 = 0x13f91e73; // 0x5054
int32_t g17 = -0x6ec1066f; // 0x5058
int32_t g18 = 0x5488ef96; // 0x505c
int32_t g19 = -1; // 0x5060
int32_t g20 = 0x3dc5b1d9; // 0x5064
int32_t g21 = -0x50af40a2; // 0x5068
int32_t g22 = 0x5638; // 0x506c
int32_t g23 = -1; // 0x5070
char g24 = 0; // 0x5080
int32_t g25 = 0; // 0x5090
int32_t g26 = 0; // 0x5094
int32_t g27 = 0; // 0x5098
int32_t * g28 = NULL; // 0x50a0
int32_t g29;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x4fd0 != 0) {
        // 0x1014
        __gmon_start__();
        result = &g29;
    }
    // 0x1016
    return result;
}

// Address range: 0x1030 - 0x1036
int32_t function_1030(char * format, ...) {
    // 0x1030
    return printf(format);
}

// Address range: 0x1040 - 0x1046
int32_t function_1040(char * s1, char * s2) {
    // 0x1040
    return strcmp(s1, s2);
}

// Address range: 0x1050 - 0x1076
int64_t _start(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1050
    int64_t v1; // 0x1050
    __libc_start_main(0x1150, (int32_t)a6, (char **)&v1, NULL, NULL, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}

// Address range: 0x1080 - 0x10a9
int64_t function_1080(void) {
    // 0x1080
    return 0x5078;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g24 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x5018);
    }
    int64_t result2 = function_1080(); // 0x1118
    g24 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s644r2.c
// Address range: 0x1150 - 0x13d1
// Line range:    261 - 293
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x1171
    if (argc == 2) {
        int64_t str = *(int64_t *)((int64_t)argv + 8); // 0x117b
        v1 = strcmp((char *)str, "1") == 0;
    }
    // 0x119b
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g25, "g_2", v1);
    transparent_crc(g2, "g_4", v1);
    transparent_crc((int32_t)*(int16_t *)&g3, "g_5", v1);
    transparent_crc(g4, "g_15", v1);
    transparent_crc(g5, "g_23", v1);
    transparent_crc((int32_t)*(int16_t *)&g6, "g_54", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_57", v1);
    transparent_crc(g8, "g_58", v1);
    transparent_crc(g9, "g_62", v1);
    transparent_crc((int32_t)g10, "g_68", v1);
    transparent_crc(g11, "g_70", v1);
    transparent_crc(g12, "g_73", v1);
    transparent_crc(g13, "g_74", v1);
    transparent_crc((int32_t)*(char *)&g14, "g_77", v1);
    transparent_crc(g15, "g_127", v1);
    transparent_crc(g16, "g_130", v1);
    transparent_crc(g17, "g_153", v1);
    transparent_crc((int32_t)*(char *)&g26, "g_198", v1);
    transparent_crc(g18, "g_212", v1);
    transparent_crc(g19, "g_229", v1);
    transparent_crc(g27, "g_230", v1);
    transparent_crc(g20, "g_246", v1);
    transparent_crc(g21, "g_247", v1);
    transparent_crc((int32_t)*(int16_t *)&g22, "g_267", v1);
    platform_main_end(-1 - *(int32_t *)0x5070, v1);
    return (int32_t)&g29 ^ (int32_t)&g29;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x13e0 - 0x13e6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x13e0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x13f0 - 0x1485
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1459
        int32_t v2 = i; // 0x13f0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1426
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1464
        *(int32_t *)(4 * i + (int64_t)&g28) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s644r2.c
// Address range: 0x1490 - 0x28d7
// Line range:    61 - 254
char func_1(void) {
    // 0x1490
    set_var(0, 0x7eeb8974, 0, -0x2a968b13, 0x69ff4caa, -7, 8, 0x1ca8fd5f, 0x21fd0095, -0x66cc, 0xdb1b793, -0x4434a983, 1, 45, -0x4db2b9af, 0x13f91e73, -0x6ec1066f, 0, 0x5488ef96, -1, 0, 0x3dc5b1d9, -0x50af40a2, 0);
    return -111;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x28e0 - 0x2925
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x28e0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2904
        printf("...checksum after hashing %s : %X\n", vname, -1 - g23);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2930 - 0x2955
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2930
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s644r2.c
// Address range: 0x2960 - 0x2ac6
// Line range:    51 - 53
int32_t set_var(int32_t g_2_l, int32_t g_4_l, int16_t g_5_l, int32_t g_15_l, int32_t g_23_l, int16_t g_54_l, int16_t g_57_l, int32_t g_58_l, int32_t g_62_l, int16_t g_68_l, int32_t g_70_l, int32_t g_73_l, int32_t g_74_l, char g_77_l, int32_t g_127_l, int32_t g_130_l, int32_t g_153_l, char g_198_l, int32_t g_212_l, int32_t g_229_l, int32_t g_230_l, int32_t g_246_l, int32_t g_247_l, int16_t g_267_l) {
    // 0x2960
    g25 = g_2_l;
    g2 = g_4_l;
    *(int16_t *)&g3 = g_5_l;
    g4 = g_15_l;
    g5 = g_23_l;
    *(int16_t *)&g6 = g_54_l;
    *(int16_t *)&g7 = g_57_l;
    g8 = g_58_l;
    g9 = g_62_l;
    g10 = g_68_l;
    g11 = g_70_l;
    g12 = g_73_l;
    g13 = g_74_l;
    *(char *)&g14 = g_77_l;
    g15 = g_127_l;
    g16 = g_130_l;
    g17 = g_153_l;
    *(char *)&g26 = g_198_l;
    g18 = g_212_l;
    g19 = g_229_l;
    g27 = g_230_l;
    g20 = g_246_l;
    g21 = g_247_l;
    *(int16_t *)&g22 = g_267_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2ad0 - 0x2b2d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2ad0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2b30 - 0x2b70
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g23;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g28); // 0x2b65
    g23 = v1 / 256 ^ v2;
}

// Address range: 0x2b70 - 0x2b7d
int64_t _fini(void) {
    // 0x2b70
    int64_t result; // 0x2b70
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

