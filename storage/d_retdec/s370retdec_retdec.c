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
int32_t set_var(char g_2_l, char g_13_l, int16_t g_52_l, int16_t g_53_l, int32_t g_54_l, char g_57_l, int32_t g_59_l, char g_69_l, int32_t g_91_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x3fe0
int32_t g2 = 0x4b80c2fa; // 0x4020
int32_t g3 = -0x43b47f3e; // 0x4021
int32_t g4 = 0x13bc4b80; // 0x4022
int32_t g5 = 0x713bc; // 0x4024
int32_t g6 = -0xfff9; // 0x4026
int32_t g7 = -1; // 0x4028
int32_t g8 = 8; // 0x402c
int32_t g9 = 8; // 0x4030
int32_t g10 = -1; // 0x4034
char g11 = 0; // 0x4040
int32_t g12 = 0; // 0x4050
int32_t * g13 = NULL; // 0x4060
int32_t g14;

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
        result = &g14;
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
    return 0x4038;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g11 != 0) {
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
    g11 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s370retdec.c
// Address range: 0x1150 - 0x1292
// Line range:    144 - 161
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
    transparent_crc((int32_t)*(char *)&g2, "g_2", v1);
    transparent_crc((int32_t)*(char *)&g3, "g_13", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_52", v1);
    transparent_crc((int32_t)*(int16_t *)&g5, "g_53", v1);
    transparent_crc(g12, "g_54", v1);
    transparent_crc((int32_t)*(char *)&g6, "g_57", v1);
    transparent_crc(g7, "g_59", v1);
    transparent_crc((int32_t)*(char *)&g8, "g_69", v1);
    transparent_crc(g9, "g_91", v1);
    platform_main_end(-1 - *(int32_t *)0x4034, v1);
    return (int32_t)&g14 ^ (int32_t)&g14;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x12a0 - 0x12a6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x12a0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x12b0 - 0x1345
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1319
        int32_t v2 = i; // 0x12b0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x12e6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1324
        *(int32_t *)(4 * i + (int64_t)&g13) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s370retdec.c
// Address range: 0x1350 - 0x1b5c
// Line range:    46 - 136
char func_1(void) {
    // 0x1afb
    set_var(-6, 25, 0, 0x13bc, 0, 7, -1, 8, 8);
    return 106;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1b60 - 0x1ba5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1b60
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x1b84
        printf("...checksum after hashing %s : %X\n", vname, -1 - g10);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1bb0 - 0x1bd5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1bb0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s370retdec.c
// Address range: 0x1be0 - 0x1c63
// Line range:    36 - 38
int32_t set_var(char g_2_l, char g_13_l, int16_t g_52_l, int16_t g_53_l, int32_t g_54_l, char g_57_l, int32_t g_59_l, char g_69_l, int32_t g_91_l) {
    // 0x1be0
    *(char *)&g2 = g_2_l;
    *(char *)&g3 = g_13_l;
    *(int16_t *)&g4 = g_52_l;
    *(int16_t *)&g5 = g_53_l;
    g12 = g_54_l;
    *(char *)&g6 = g_57_l;
    g7 = g_59_l;
    *(char *)&g8 = g_69_l;
    g9 = g_91_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1c70 - 0x1ccd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x1c70
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1cd0 - 0x1d10
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g10;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g13); // 0x1d05
    g10 = v1 / 256 ^ v2;
}

// Address range: 0x1d10 - 0x1d1d
int64_t _fini(void) {
    // 0x1d10
    int64_t result; // 0x1d10
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

