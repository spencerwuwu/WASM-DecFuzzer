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
int32_t set_var(char g_5_l, int16_t g_27_l, int32_t g_28_l, int32_t g_33_l, int16_t g_34_l, int32_t g_42_l, char g_43_l, int16_t g_44_l, int32_t g_47_l, int16_t g_48_l, int32_t g_49_l, char g_81_l, int32_t g_107_l, int16_t g_133_l, char g_162_l, int16_t g_210_l, int16_t g_302_l, int16_t g_320_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = 3649; // 0x31b1
int64_t g2 = 0; // 0x4fe0
int32_t g3 = 0xdf0e; // 0x5020
int32_t g4 = 0x50d8af87; // 0x5024
int32_t g5 = -1; // 0x5028
int32_t g6 = 0xffff; // 0x502c
int32_t g7 = -0x4c6710ac; // 0x5030
int32_t g8 = 0x37340001; // 0x5034
int32_t g9 = 0x36fe3734; // 0x5036
int32_t g10 = 0x2ffa36fe; // 0x5038
int16_t g11 = -8; // 0x503c
int32_t g12 = 1; // 0x5040
int32_t g13 = 1; // 0x5044
int32_t g14 = 0x4616b4c8; // 0x5048
int32_t g15 = 0xf46589; // 0x504c
int32_t g16 = 0x600f4; // 0x504e
int16_t g17 = 6; // 0x5050
int32_t g18 = 0x31b1ff1f; // 0x5052
int32_t g19 = 0x31b1; // 0x5054
int32_t g20 = -1; // 0x5058
int64_t g21 = 0; // 0x5060
int32_t g22 = 0; // 0x5070
int32_t * g23 = NULL; // 0x5080
int32_t g24;

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
        result = &g24;
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
    return &g21;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g21 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g2 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x5018);
    }
    int64_t result2 = function_1080(); // 0x1118
    *(char *)&g21 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s736retdec.c
// Address range: 0x1150 - 0x1374
// Line range:    289 - 316
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
    transparent_crc((int32_t)*(char *)&g22, "g_5", v1);
    transparent_crc((int32_t)*(int16_t *)&g3, "g_27", v1);
    transparent_crc(g4, "g_28", v1);
    transparent_crc(g5, "g_33", v1);
    transparent_crc((int32_t)*(int16_t *)&g6, "g_34", v1);
    transparent_crc(g7, "g_42", v1);
    transparent_crc((int32_t)*(char *)&g8, "g_43", v1);
    transparent_crc((int32_t)*(int16_t *)&g9, "g_44", v1);
    transparent_crc(g10, "g_47", v1);
    transparent_crc((int32_t)g11, "g_48", v1);
    transparent_crc(g12, "g_49", v1);
    transparent_crc((int32_t)*(char *)&g13, "g_81", v1);
    transparent_crc(g14, "g_107", v1);
    transparent_crc((int32_t)*(int16_t *)0x309c, "g_117", v1);
    transparent_crc((int32_t)*(int16_t *)&g15, "g_133", v1);
    transparent_crc((int32_t)*(char *)&g16, "g_162", v1);
    transparent_crc((int32_t)g17, "g_210", v1);
    transparent_crc((int32_t)*(int16_t *)&g18, "g_302", v1);
    transparent_crc((int32_t)*(int16_t *)&g19, "g_320", v1);
    platform_main_end(-1 - *(int32_t *)0x5058, v1);
    return (int32_t)&g24 ^ (int32_t)&g24;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1380 - 0x1386
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1380
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1390 - 0x1425
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x13f9
        int32_t v2 = i; // 0x1390
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x13c6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1404
        *(int32_t *)(4 * i + (int64_t)&g23) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s736retdec.c
// Address range: 0x1430 - 0x286a
// Line range:    56 - 282
int32_t func_1(void) {
    // 0x225f
    set_var(0, 0, 0x50d8af87, -1, -1, 0, 1, 21, 0, -8, 1, 1, 0, 0x6589, 22, 6, -225, (int16_t)&g1);
    return -0x3fe44db3;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2870 - 0x28b5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2870
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2894
        printf("...checksum after hashing %s : %X\n", vname, -1 - g20);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x28c0 - 0x28e5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x28c0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s736retdec.c
// Address range: 0x28f0 - 0x29fa
// Line range:    46 - 48
int32_t set_var(char g_5_l, int16_t g_27_l, int32_t g_28_l, int32_t g_33_l, int16_t g_34_l, int32_t g_42_l, char g_43_l, int16_t g_44_l, int32_t g_47_l, int16_t g_48_l, int32_t g_49_l, char g_81_l, int32_t g_107_l, int16_t g_133_l, char g_162_l, int16_t g_210_l, int16_t g_302_l, int16_t g_320_l) {
    // 0x28f0
    *(char *)&g22 = g_5_l;
    *(int16_t *)&g3 = g_27_l;
    g4 = g_28_l;
    g5 = g_33_l;
    *(int16_t *)&g6 = g_34_l;
    g7 = g_42_l;
    *(char *)&g8 = g_43_l;
    *(int16_t *)&g9 = g_44_l;
    g10 = g_47_l;
    g11 = g_48_l;
    g12 = g_49_l;
    *(char *)&g13 = g_81_l;
    g14 = g_107_l;
    *(int16_t *)&g15 = g_133_l;
    *(char *)&g16 = g_162_l;
    g17 = g_210_l;
    *(int16_t *)&g18 = g_302_l;
    *(int16_t *)&g19 = g_320_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2a00 - 0x2a5d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2a00
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2a60 - 0x2aa0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g20;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g23); // 0x2a95
    g20 = v1 / 256 ^ v2;
}

// Address range: 0x2aa0 - 0x2aad
int64_t _fini(void) {
    // 0x2aa0
    int64_t result; // 0x2aa0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

