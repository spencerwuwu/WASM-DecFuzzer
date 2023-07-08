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
int32_t func_1(void);
int32_t function_1030(char * format, ...);
int32_t function_1040(char * s1, char * s2);
int64_t function_1080(void);
int64_t function_10b0(void);
int64_t function_10f0(void);
int64_t function_1140(void);
void platform_main_begin(void);
void platform_main_end(int32_t crc, int32_t flag);
int32_t set_var(int32_t g_2_l, int32_t g_3_l, char g_11_l, int16_t g_16_l, int32_t g_25_l, int32_t g_27_l, char g_28_l, int16_t g_29_l, char g_30_l, int16_t g_38_l, int32_t g_68_l, char g_71_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x3fe0
int32_t g2 = 0x55bb2c21; // 0x4020
int32_t g3 = 0x700ff; // 0x4024
int32_t g4 = -0x412efff9; // 0x4026
int32_t g5 = -0x732c412f; // 0x4028
int32_t g6 = -0x7cae70b4; // 0x402c
int32_t g7 = 0x52fb0086; // 0x4030
int32_t g8 = 0x152fb; // 0x4032
int32_t g9 = 0x10001; // 0x4034
int32_t g10 = -0x33b4ffff; // 0x4036
int32_t g11 = -0x3e6f33b5; // 0x4038
int32_t g12 = 43; // 0x403c
int32_t g13 = -1; // 0x4040
char g14 = 0; // 0x4050
int32_t g15 = 0; // 0x4060
int32_t * g16 = NULL; // 0x4070
int32_t g17;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x3fd0 != 0) {
        // 0x1014
        __gmon_start__();
        result = &g17;
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
    return 0x4048;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g14 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x4018);
    }
    int64_t result2 = function_1080(); // 0x1118
    g14 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s881retdec.c
// Address range: 0x1150 - 0x12d2
// Line range:    109 - 129
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
    transparent_crc(g15, "g_2", v1);
    transparent_crc(g2, "g_3", v1);
    transparent_crc((int32_t)*(char *)&g3, "g_11", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_16", v1);
    transparent_crc(g5, "g_25", v1);
    transparent_crc(g6, "g_27", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_28", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_29", v1);
    transparent_crc((int32_t)*(char *)&g9, "g_30", v1);
    transparent_crc((int32_t)*(int16_t *)&g10, "g_38", v1);
    transparent_crc(g11, "g_68", v1);
    transparent_crc((int32_t)*(char *)&g12, "g_71", v1);
    platform_main_end(-1 - *(int32_t *)0x4040, v1);
    return (int32_t)&g17 ^ (int32_t)&g17;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x12e0 - 0x12e6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x12e0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x12f0 - 0x1385
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1359
        int32_t v2 = i; // 0x12f0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1326
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1364
        *(int32_t *)(4 * i + (int64_t)&g16) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s881retdec.c
// Address range: 0x1390 - 0x18a6
// Line range:    53 - 101
int32_t func_1(void) {
    // 0x1390
    set_var(0, -25, -1, -139, 0, -0x7cae70b4, 104, 0, 1, 1, -0x3e6f33b5, 43);
    return 43;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x18b0 - 0x18f5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x18b0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x18d4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g13);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1900 - 0x1925
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1900
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s881retdec.c
// Address range: 0x1930 - 0x19d8
// Line range:    43 - 45
int32_t set_var(int32_t g_2_l, int32_t g_3_l, char g_11_l, int16_t g_16_l, int32_t g_25_l, int32_t g_27_l, char g_28_l, int16_t g_29_l, char g_30_l, int16_t g_38_l, int32_t g_68_l, char g_71_l) {
    // 0x1930
    g15 = g_2_l;
    g2 = g_3_l;
    *(char *)&g3 = g_11_l;
    *(int16_t *)&g4 = g_16_l;
    g5 = g_25_l;
    g6 = g_27_l;
    *(char *)&g7 = g_28_l;
    *(int16_t *)&g8 = g_29_l;
    *(char *)&g9 = g_30_l;
    *(int16_t *)&g10 = g_38_l;
    g11 = g_68_l;
    *(char *)&g12 = g_71_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x19e0 - 0x1a3d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x19e0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1a40 - 0x1a80
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g13;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g16); // 0x1a75
    g13 = v1 / 256 ^ v2;
}

// Address range: 0x1a80 - 0x1a8d
int64_t _fini(void) {
    // 0x1a80
    int64_t result; // 0x1a80
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

