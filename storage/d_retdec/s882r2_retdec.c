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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_5_l, int32_t g_6_l, int32_t g_22_l, char g_23_l, char g_27_l, int32_t g_49_l, int32_t g_63_l, int32_t g_69_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x3fe0
int32_t g2 = 1; // 0x4020
int32_t g3 = 0x2eb90da1; // 0x4024
int32_t g4 = 0x52cb1363; // 0x4028
int32_t g5 = -1; // 0x402c
int32_t g6 = -0x396512dd; // 0x4030
int32_t g7 = 0x10c8; // 0x4034
int32_t g8 = -0x7cfffff0; // 0x4035
int32_t g9 = 0x17005583; // 0x4038
int32_t g10 = 0x8375f08; // 0x403c
int32_t g11 = -1; // 0x4040
char g12 = 0; // 0x4050
int32_t g13 = 0; // 0x4060
int32_t g14 = 0; // 0x4064
int32_t * g15 = NULL; // 0x4070
int32_t g16;

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
        result = &g16;
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
    if (g12 != 0) {
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
    g12 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s882r2.c
// Address range: 0x1150 - 0x12b8
// Line range:    118 - 137
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
    transparent_crc(g3, "g_3", v1);
    transparent_crc(g4, "g_4", v1);
    transparent_crc(g5, "g_5", v1);
    transparent_crc(g6, "g_6", v1);
    transparent_crc(g13, "g_22", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_23", v1);
    transparent_crc((int32_t)*(char *)&g8, "g_27", v1);
    transparent_crc(g9, "g_49", v1);
    transparent_crc(g14, "g_63", v1);
    transparent_crc(g10, "g_69", v1);
    platform_main_end(-1 - *(int32_t *)0x4040, v1);
    return (int32_t)&g16 ^ (int32_t)&g16;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x12c0 - 0x12c6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x12c0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x12d0 - 0x1365
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1339
        int32_t v2 = i; // 0x12d0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1306
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1344
        *(int32_t *)(4 * i + (int64_t)&g15) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s882r2.c
// Address range: 0x1370 - 0x17a8
// Line range:    52 - 111
char func_1(void) {
    // 0x1370
    set_var(1, -4, 0x52cb1363, 1, -34, -13, -51, 16, 0x17005583, 0, 0x8375f08);
    return -125;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x17b0 - 0x17f5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x17b0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x17d4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g11);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1800 - 0x1825
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1800
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s882r2.c
// Address range: 0x1830 - 0x18be
// Line range:    42 - 44
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_5_l, int32_t g_6_l, int32_t g_22_l, char g_23_l, char g_27_l, int32_t g_49_l, int32_t g_63_l, int32_t g_69_l) {
    // 0x1830
    g2 = g_2_l;
    g3 = g_3_l;
    g4 = g_4_l;
    g5 = g_5_l;
    g6 = g_6_l;
    g13 = g_22_l;
    *(char *)&g7 = g_23_l;
    *(char *)&g8 = g_27_l;
    g9 = g_49_l;
    g14 = g_63_l;
    g10 = g_69_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x18c0 - 0x191d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x18c0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1920 - 0x1960
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g11;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g15); // 0x1955
    g11 = v1 / 256 ^ v2;
}

// Address range: 0x1960 - 0x196d
int64_t _fini(void) {
    // 0x1960
    int64_t result; // 0x1960
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

