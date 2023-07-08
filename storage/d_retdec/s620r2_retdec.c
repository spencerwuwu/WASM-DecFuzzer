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
int32_t set_var(int32_t g_2_l, char g_28_l, int32_t g_31_l, char g_43_l, int32_t g_56_l, char g_57_l, int16_t g_67_l, int32_t g_73_l, int32_t g_90_l, int32_t g_92_l, int32_t g_93_l, int16_t g_126_l, int32_t g_143_l, int32_t g_145_l, int32_t g_146_l, int32_t g_147_l, int16_t g_178_l, int16_t g_248_l, char g_254_l, int16_t g_266_l, int32_t g_273_l, int16_t g_274_l, char g_278_l, int16_t g_279_l, int32_t g_304_l, char g_350_l, int32_t g_422_l, char g_423_l, int16_t g_450_l, int16_t g_468_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x5fe0
int32_t g2 = 0x70ad6f2e; // 0x6020
int32_t g3 = 255; // 0x6024
int32_t g4 = 0x60d743cc; // 0x6028
int32_t g5 = 253; // 0x602c
int32_t g6 = -0x65d22ce8; // 0x6030
int32_t g7 = 0x2cbe0004; // 0x6034
int32_t g8 = 0x40e52cbe; // 0x6036
int32_t g9 = 0x2c4540e5; // 0x6038
int32_t g10 = 1; // 0x603c
int32_t g11 = 1; // 0x6040
int32_t g12 = 7; // 0x6044
int32_t g13 = 0xa155; // 0x6048
int32_t g14 = 0x2bc21653; // 0x604c
int32_t g15 = -0x46d665f9; // 0x6050
int32_t g16 = 1; // 0x6054
int32_t g17 = -1; // 0x6058
int32_t g18 = 0x18be7db4; // 0x605c
int16_t g19 = 0x18be; // 0x605e
int32_t g20 = 0x71d1001f; // 0x6060
int32_t g21 = 0x20a071d1; // 0x6062
int32_t g22 = 0x66ea20a0; // 0x6064
int16_t g23 = 3; // 0x6068
char g24 = 110; // 0x606a
int32_t g25 = 0xffff; // 0x606c
int32_t g26 = -0x12aecb15; // 0x6070
int32_t g27 = 241; // 0x6074
int32_t g28 = 0x6289f042; // 0x6078
int32_t g29 = -0xcd63; // 0x607c
int64_t g30; // 0x607e
int32_t g31 = -1; // 0x6080
char g32 = 0; // 0x6090
int32_t g33 = 0; // 0x60a0
int32_t * g34 = NULL; // 0x60b0
int32_t g35;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x5fd0 != 0) {
        // 0x1014
        __gmon_start__();
        result = &g35;
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
    return 0x6088;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g32 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x6018);
    }
    int64_t result2 = function_1080(); // 0x1118
    g32 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s620r2.c
// Address range: 0x1150 - 0x1460
// Line range:    353 - 391
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
    transparent_crc(g2, "g_2", v1);
    transparent_crc((int32_t)*(char *)&g3, "g_28", v1);
    transparent_crc(g4, "g_31", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_43", v1);
    transparent_crc(g6, "g_56", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_57", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_67", v1);
    transparent_crc(g9, "g_73", v1);
    transparent_crc(g10, "g_90", v1);
    transparent_crc(g11, "g_92", v1);
    transparent_crc(g12, "g_93", v1);
    transparent_crc((int32_t)*(int16_t *)&g13, "g_126", v1);
    transparent_crc(g14, "g_143", v1);
    transparent_crc(g15, "g_145", v1);
    transparent_crc(g16, "g_146", v1);
    transparent_crc(g17, "g_147", v1);
    transparent_crc((int32_t)*(int16_t *)&g18, "g_178", v1);
    transparent_crc((int32_t)g19, "g_248", v1);
    transparent_crc((int32_t)*(char *)&g20, "g_254", v1);
    transparent_crc((int32_t)*(int16_t *)&g21, "g_266", v1);
    transparent_crc(g22, "g_273", v1);
    transparent_crc((int32_t)g23, "g_274", v1);
    transparent_crc((int32_t)g24, "g_278", v1);
    transparent_crc((int32_t)*(int16_t *)&g25, "g_279", v1);
    transparent_crc(g26, "g_304", v1);
    transparent_crc((int32_t)*(char *)&g27, "g_350", v1);
    transparent_crc(g28, "g_422", v1);
    transparent_crc((int32_t)*(char *)&g33, "g_423", v1);
    transparent_crc((int32_t)*(int16_t *)&g29, "g_450", v1);
    transparent_crc((int32_t)*(int16_t *)0x607e, "g_468", v1);
    platform_main_end(-1 - *(int32_t *)0x6080, v1);
    return (int32_t)&g35 ^ (int32_t)&g35;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1460 - 0x1466
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1460
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1470 - 0x1505
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x14d9
        int32_t v2 = i; // 0x1470
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x14a6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x14e4
        *(int32_t *)(4 * i + (int64_t)&g34) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s620r2.c
// Address range: 0x1510 - 0x395b
// Line range:    67 - 346
int32_t func_1(void) {
    // 0x1510
    set_var(0x70ad6f2e, 2, 148, -3, 3, -2, 0x2cbe, 0x2c4540e5, 0x7b03f2b, 1, 7, 3018, 0x2bc21653, -0x46d665f9, 1, -1, 0x7db4, 0x18be, 0, 0x71d1, 0x66ea20a0, 3, 110, -2, -0x12aecb15, -14, 0x6289f042, 0, 3, -2);
    return 0xfff8;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3960 - 0x39a5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3960
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x3984
        printf("...checksum after hashing %s : %X\n", vname, -1 - g31);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x39b0 - 0x39d5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x39b0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s620r2.c
// Address range: 0x39e0 - 0x3bc4
// Line range:    57 - 59
int32_t set_var(int32_t g_2_l, char g_28_l, int32_t g_31_l, char g_43_l, int32_t g_56_l, char g_57_l, int16_t g_67_l, int32_t g_73_l, int32_t g_90_l, int32_t g_92_l, int32_t g_93_l, int16_t g_126_l, int32_t g_143_l, int32_t g_145_l, int32_t g_146_l, int32_t g_147_l, int16_t g_178_l, int16_t g_248_l, char g_254_l, int16_t g_266_l, int32_t g_273_l, int16_t g_274_l, char g_278_l, int16_t g_279_l, int32_t g_304_l, char g_350_l, int32_t g_422_l, char g_423_l, int16_t g_450_l, int16_t g_468_l) {
    // 0x39e0
    g2 = g_2_l;
    *(char *)&g3 = g_28_l;
    g4 = g_31_l;
    *(char *)&g5 = g_43_l;
    g6 = g_56_l;
    *(char *)&g7 = g_57_l;
    *(int16_t *)&g8 = g_67_l;
    g9 = g_73_l;
    g10 = g_90_l;
    g11 = g_92_l;
    g12 = g_93_l;
    *(int16_t *)&g13 = g_126_l;
    g14 = g_143_l;
    g15 = g_145_l;
    g16 = g_146_l;
    g17 = g_147_l;
    *(int16_t *)&g18 = g_178_l;
    g19 = g_248_l;
    *(char *)&g20 = g_254_l;
    *(int16_t *)&g21 = g_266_l;
    g22 = g_273_l;
    g23 = g_274_l;
    g24 = g_278_l;
    *(int16_t *)&g25 = g_279_l;
    g26 = g_304_l;
    *(char *)&g27 = g_350_l;
    g28 = g_422_l;
    *(char *)&g33 = g_423_l;
    *(int16_t *)&g29 = g_450_l;
    *(int16_t *)&g30 = g_468_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3bd0 - 0x3c2d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x3bd0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3c30 - 0x3c70
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g31;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g34); // 0x3c65
    g31 = v1 / 256 ^ v2;
}

// Address range: 0x3c70 - 0x3c7d
int64_t _fini(void) {
    // 0x3c70
    int64_t result; // 0x3c70
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

