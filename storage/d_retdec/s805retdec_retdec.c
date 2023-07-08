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
int32_t set_var(int16_t g_7_l, int32_t g_14_l, int32_t g_28_l, char g_43_l, int16_t g_46_l, int16_t g_53_l, int16_t g_57_l, int32_t g_60_l, int32_t g_61_l, char g_62_l, int32_t g_63_l, int32_t g_90_l, int16_t g_104_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = 0x72c2; // 0x5020
int32_t g3 = -0x605aac04; // 0x5024
int32_t g4 = 1; // 0x5028
int32_t g5 = -0x6c8ff13; // 0x502c
int32_t g6 = -0x306c9; // 0x502e
int32_t g7 = -0x90004; // 0x5030
int32_t g8 = -0x2bd0000a; // 0x5032
int32_t g9 = -0x76672bd1; // 0x5034
int32_t g10 = 0xf30bda1; // 0x5038
char g11 = 1; // 0x503c
int32_t g12 = 2; // 0x5040
int32_t g13 = -0x2bf87dc9; // 0x5044
int32_t g14 = 0x598d; // 0x5048
int32_t g15 = -1; // 0x504c
int64_t g16 = 0; // 0x5050
int32_t * g17 = NULL; // 0x5060
int32_t g18;

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
        result = &g18;
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
    return &g16;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g16 != 0) {
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
    *(char *)&g16 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s805retdec.c
// Address range: 0x1150 - 0x12e9
// Line range:    159 - 180
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
    transparent_crc((int32_t)*(int16_t *)&g2, "g_7", v1);
    transparent_crc(g3, "g_14", v1);
    transparent_crc(g4, "g_28", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_43", v1);
    transparent_crc((int32_t)*(int16_t *)&g6, "g_46", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_53", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_57", v1);
    transparent_crc(g9, "g_60", v1);
    transparent_crc(g10, "g_61", v1);
    transparent_crc((int32_t)g11, "g_62", v1);
    transparent_crc(g12, "g_63", v1);
    transparent_crc(g13, "g_90", v1);
    transparent_crc((int32_t)*(int16_t *)&g14, "g_104", v1);
    platform_main_end(-1 - *(int32_t *)0x504c, v1);
    return (int32_t)&g18 ^ (int32_t)&g18;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x12f0 - 0x12f6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x12f0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1300 - 0x1395
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1369
        int32_t v2 = i; // 0x1300
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1336
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1374
        *(int32_t *)(4 * i + (int64_t)&g17) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s805retdec.c
// Address range: 0x13a0 - 0x1e1b
// Line range:    50 - 152
char func_1(void) {
    // 0x13a0
    set_var(0x72c2, -0x605aac04, 0, 24, 16, -4, -10, -0x76672bd1, 0xf30bda1, 1, 3, -0x2bf87dc9, 0x598d);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1e20 - 0x1e65
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1e20
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x1e44
        printf("...checksum after hashing %s : %X\n", vname, -1 - g15);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1e70 - 0x1e95
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1e70
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s805retdec.c
// Address range: 0x1ea0 - 0x1f81
// Line range:    40 - 42
int32_t set_var(int16_t g_7_l, int32_t g_14_l, int32_t g_28_l, char g_43_l, int16_t g_46_l, int16_t g_53_l, int16_t g_57_l, int32_t g_60_l, int32_t g_61_l, char g_62_l, int32_t g_63_l, int32_t g_90_l, int16_t g_104_l) {
    // 0x1ea0
    *(int16_t *)&g2 = g_7_l;
    g3 = g_14_l;
    g4 = g_28_l;
    *(char *)&g5 = g_43_l;
    *(int16_t *)&g6 = g_46_l;
    *(int16_t *)&g7 = g_53_l;
    *(int16_t *)&g8 = g_57_l;
    g9 = g_60_l;
    g10 = g_61_l;
    g11 = g_62_l;
    g12 = g_63_l;
    g13 = g_90_l;
    *(int16_t *)&g14 = g_104_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1f90 - 0x1fed
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x1f90
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1ff0 - 0x2030
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g15;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g17); // 0x2025
    g15 = v1 / 256 ^ v2;
}

// Address range: 0x2030 - 0x203d
int64_t _fini(void) {
    // 0x2030
    int64_t result; // 0x2030
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

