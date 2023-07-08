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
int32_t set_var(int32_t g_2_l, int32_t g_5_l, int32_t g_30_l, char g_31_l, char g_44_l, char g_51_l, int32_t g_52_l, int32_t g_59_l, char g_60_l, int32_t g_61_l, int16_t g_62_l, char g_87_l, int32_t g_106_l, char g_107_l, int32_t g_129_l, char g_130_l, char g_131_l, int16_t g_132_l, int32_t g_156_l, char g_157_l, int16_t g_160_l, int32_t g_161_l, int32_t g_283_l, int32_t g_327_l, char g_329_l, int32_t g_503_l, int16_t g_507_l, int32_t g_553_l, char g_554_l, char g_555_l, int16_t g_558_l, char g_592_l, int32_t g_599_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x6fe0
int32_t g2 = 1; // 0x7020
int32_t g3 = -1; // 0x7024
int32_t g4 = 0x66e52324; // 0x7028
int32_t g5 = 0x3dfd; // 0x702c
int32_t g6 = -0x3ffffc3; // 0x702d
int32_t g7 = -4; // 0x7030
int32_t g8 = -9; // 0x7034
int32_t g9 = 220; // 0x7038
int32_t g10 = -0x5a88236a; // 0x703c
int32_t g11 = 0xf7ffff; // 0x7040
int32_t g12 = -0xff09; // 0x7042
int32_t g13 = -1; // 0x7044
int32_t g14 = 0x2c872; // 0x7048
int32_t g15 = 0x20002c8; // 0x7049
int32_t g16 = 0x20002; // 0x704a
int32_t g17 = 2; // 0x704c
int32_t g18 = -0x6ff0a; // 0x7050
int32_t g19 = -0x20007; // 0x7052
int32_t g20 = -3; // 0x7054
int32_t g21 = -5; // 0x7058
char g22 = -1; // 0x705c
int32_t g23 = -4; // 0x7060
int32_t g24 = 0xb6c5; // 0x7064
int32_t g25 = -7; // 0x7068
int32_t g26 = -0x28f100ed; // 0x706c
int32_t g27 = 0x31d70eff; // 0x706d
int32_t g28 = 0x31d70e; // 0x706e
int32_t g29 = 49; // 0x7070
int32_t g30 = 1; // 0x7074
int32_t g31 = -1; // 0x7078
int64_t g32 = 0; // 0x7080
int32_t g33 = 0; // 0x7090
int32_t g34 = 0; // 0x7094
int32_t g35 = 0; // 0x7098
int32_t g36 = 0; // 0x709c
int32_t * g37 = NULL; // 0x70a0
int32_t g38;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x6fd0 != 0) {
        // 0x1014
        __gmon_start__();
        result = &g38;
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
    return &g32;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g32 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x7018);
    }
    int64_t result2 = function_1080(); // 0x1118
    *(char *)&g32 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s895r2.c
// Address range: 0x1150 - 0x1498
// Line range:    429 - 470
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
    transparent_crc(g3, "g_5", v1);
    transparent_crc(g4, "g_30", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_31", v1);
    transparent_crc((int32_t)*(char *)&g33, "g_44", v1);
    transparent_crc((int32_t)*(char *)&g6, "g_51", v1);
    transparent_crc(g7, "g_52", v1);
    transparent_crc(g8, "g_59", v1);
    transparent_crc((int32_t)*(char *)&g9, "g_60", v1);
    transparent_crc(g10, "g_61", v1);
    transparent_crc((int32_t)*(int16_t *)&g11, "g_62", v1);
    transparent_crc((int32_t)*(char *)&g12, "g_87", v1);
    transparent_crc(g13, "g_106", v1);
    transparent_crc((int32_t)*(char *)&g14, "g_107", v1);
    transparent_crc(g34, "g_129", v1);
    transparent_crc((int32_t)*(char *)&g15, "g_130", v1);
    transparent_crc((int32_t)*(char *)&g16, "g_131", v1);
    transparent_crc((int32_t)*(int16_t *)&g35, "g_132", v1);
    transparent_crc(g17, "g_156", v1);
    transparent_crc((int32_t)*(char *)&g18, "g_157", v1);
    transparent_crc((int32_t)*(int16_t *)&g19, "g_160", v1);
    transparent_crc(g36, "g_161", v1);
    transparent_crc(g20, "g_283", v1);
    transparent_crc(g21, "g_327", v1);
    transparent_crc((int32_t)g22, "g_329", v1);
    transparent_crc(g23, "g_503", v1);
    transparent_crc((int32_t)*(int16_t *)&g24, "g_507", v1);
    transparent_crc(g25, "g_553", v1);
    transparent_crc((int32_t)*(char *)&g26, "g_554", v1);
    transparent_crc((int32_t)*(char *)&g27, "g_555", v1);
    transparent_crc((int32_t)*(int16_t *)&g28, "g_558", v1);
    transparent_crc((int32_t)*(char *)&g29, "g_592", v1);
    transparent_crc(g30, "g_599", v1);
    platform_main_end(-1 - *(int32_t *)0x7078, v1);
    return (int32_t)&g38 ^ (int32_t)&g38;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x14a0 - 0x14a6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x14a0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x14b0 - 0x1545
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1519
        int32_t v2 = i; // 0x14b0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x14e6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1524
        *(int32_t *)(4 * i + (int64_t)&g37) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s895r2.c
// Address range: 0x1550 - 0x45aa
// Line range:    74 - 422
int32_t func_1(void) {
    // 0x1f05
    set_var(0, -1, 0x66e52324, -3, 0, 61, -4, -9, -36, -0x5a88236a, -1, -9, 0, 114, 0, -56, 2, 0, 2, -10, -7, 0, -3, -5, -1, -4, -0x493b, -7, 19, -1, -0x28f2, 49, 1);
    return 86;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x45b0 - 0x45f5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x45b0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x45d4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g31);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x4600 - 0x4625
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x4600
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s895r2.c
// Address range: 0x4630 - 0x4862
// Line range:    64 - 66
int32_t set_var(int32_t g_2_l, int32_t g_5_l, int32_t g_30_l, char g_31_l, char g_44_l, char g_51_l, int32_t g_52_l, int32_t g_59_l, char g_60_l, int32_t g_61_l, int16_t g_62_l, char g_87_l, int32_t g_106_l, char g_107_l, int32_t g_129_l, char g_130_l, char g_131_l, int16_t g_132_l, int32_t g_156_l, char g_157_l, int16_t g_160_l, int32_t g_161_l, int32_t g_283_l, int32_t g_327_l, char g_329_l, int32_t g_503_l, int16_t g_507_l, int32_t g_553_l, char g_554_l, char g_555_l, int16_t g_558_l, char g_592_l, int32_t g_599_l) {
    // 0x4630
    g2 = g_2_l;
    g3 = g_5_l;
    g4 = g_30_l;
    *(char *)&g5 = g_31_l;
    *(char *)&g33 = g_44_l;
    *(char *)&g6 = g_51_l;
    g7 = g_52_l;
    g8 = g_59_l;
    *(char *)&g9 = g_60_l;
    g10 = g_61_l;
    *(int16_t *)&g11 = g_62_l;
    *(char *)&g12 = g_87_l;
    g13 = g_106_l;
    *(char *)&g14 = g_107_l;
    g34 = g_129_l;
    *(char *)&g15 = g_130_l;
    *(char *)&g16 = g_131_l;
    *(int16_t *)&g35 = g_132_l;
    g17 = g_156_l;
    *(char *)&g18 = g_157_l;
    *(int16_t *)&g19 = g_160_l;
    g36 = g_161_l;
    g20 = g_283_l;
    g21 = g_327_l;
    g22 = g_329_l;
    g23 = g_503_l;
    *(int16_t *)&g24 = g_507_l;
    g25 = g_553_l;
    *(char *)&g26 = g_554_l;
    *(char *)&g27 = g_555_l;
    *(int16_t *)&g28 = g_558_l;
    *(char *)&g29 = g_592_l;
    g30 = g_599_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4870 - 0x48cd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x4870
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x48d0 - 0x4910
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g31;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g37); // 0x4905
    g31 = v1 / 256 ^ v2;
}

// Address range: 0x4910 - 0x491d
int64_t _fini(void) {
    // 0x4910
    int64_t result; // 0x4910
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

