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
int32_t set_var(int32_t g_2_l, int16_t g_8_l, int32_t g_12_l, int32_t g_13_l, int16_t g_14_l, char g_19_l, int16_t g_20_l, int16_t g_21_l, char g_40_l, int32_t g_63_l, char g_82_l, int32_t g_91_l, int32_t g_96_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x3fe0
int32_t g2 = -0x3decacd1; // 0x4020
int32_t g3 = 0x1879; // 0x4024
int32_t g4 = -7; // 0x4028
int32_t g5 = 0xbc5021c; // 0x402c
int32_t g6 = 0xacffff; // 0x4030
int32_t g7 = -0x2715ff54; // 0x4032
int32_t g8 = 0x2f88d8ea; // 0x4034
int32_t g9 = 0x8e2f88; // 0x4036
char g10 = -114; // 0x4038
int32_t g11 = -1; // 0x403c
int32_t g12 = 66; // 0x4040
int32_t g13 = 0x2416071e; // 0x4044
int32_t g14 = -1; // 0x4048
int64_t g15 = 0; // 0x4050
int32_t g16 = 0; // 0x4060
int32_t * g17 = NULL; // 0x4070
int32_t g18;

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
    return &g15;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g15 != 0) {
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
    *(char *)&g15 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s887retdec.c
// Address range: 0x1150 - 0x12e9
// Line range:    133 - 154
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
    transparent_crc((int32_t)*(int16_t *)&g3, "g_8", v1);
    transparent_crc(g4, "g_12", v1);
    transparent_crc(g5, "g_13", v1);
    transparent_crc((int32_t)*(int16_t *)&g6, "g_14", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_19", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_20", v1);
    transparent_crc((int32_t)*(int16_t *)&g9, "g_21", v1);
    transparent_crc((int32_t)g10, "g_40", v1);
    transparent_crc(g11, "g_63", v1);
    transparent_crc((int32_t)*(char *)&g12, "g_82", v1);
    transparent_crc(g13, "g_91", v1);
    transparent_crc(g16, "g_96", v1);
    platform_main_end(-1 - *(int32_t *)0x4048, v1);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s887retdec.c
// Address range: 0x13a0 - 0x1957
// Line range:    54 - 126
int32_t func_1(void) {
    // 0x13a0
    set_var(-0x3decacd1, 0x532f, -7, -7, 0, -84, -0x2716, 0x2f89, -114, -1, 66, 0x2416071e, 0);
    return 66;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1960 - 0x19a5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1960
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x1984
        printf("...checksum after hashing %s : %X\n", vname, -1 - g14);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x19b0 - 0x19d5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x19b0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s887retdec.c
// Address range: 0x19e0 - 0x1abd
// Line range:    44 - 46
int32_t set_var(int32_t g_2_l, int16_t g_8_l, int32_t g_12_l, int32_t g_13_l, int16_t g_14_l, char g_19_l, int16_t g_20_l, int16_t g_21_l, char g_40_l, int32_t g_63_l, char g_82_l, int32_t g_91_l, int32_t g_96_l) {
    // 0x19e0
    g2 = g_2_l;
    *(int16_t *)&g3 = g_8_l;
    g4 = g_12_l;
    g5 = g_13_l;
    *(int16_t *)&g6 = g_14_l;
    *(char *)&g7 = g_19_l;
    *(int16_t *)&g8 = g_20_l;
    *(int16_t *)&g9 = g_21_l;
    g10 = g_40_l;
    g11 = g_63_l;
    *(char *)&g12 = g_82_l;
    g13 = g_91_l;
    g16 = g_96_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1ac0 - 0x1b1d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x1ac0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1b20 - 0x1b60
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g14;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g17); // 0x1b55
    g14 = v1 / 256 ^ v2;
}

// Address range: 0x1b60 - 0x1b6d
int64_t _fini(void) {
    // 0x1b60
    int64_t result; // 0x1b60
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

