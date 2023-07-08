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
int32_t set_var(int16_t g_12_l, int32_t g_30_l, int32_t g_31_l, int16_t g_46_l, int32_t g_47_l, int32_t g_48_l, char g_61_l, int32_t g_65_l, int16_t g_74_l, int16_t g_90_l, int16_t g_96_l, int32_t g_122_l, int32_t g_123_l, int32_t g_148_l, int16_t g_150_l, int16_t g_151_l, int16_t g_152_l, int16_t g_162_l, char g_169_l, char g_190_l, int16_t g_193_l, int16_t g_203_l, int32_t g_209_l, char g_210_l, int32_t g_240_l, int32_t g_298_l, int32_t g_336_l, char g_337_l, int16_t g_338_l, char g_418_l, int32_t g_442_l, int32_t g_443_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x5fe0
int32_t g2 = 0x32a1; // 0x6020
int32_t g3 = -1; // 0x6024
int32_t g4 = -0x7c32f328; // 0x6028
int32_t g5 = 0x174a; // 0x602c
int32_t g6 = -0x40d015d9; // 0x6030
int32_t g7 = -0x5be2bf9; // 0x6034
int32_t g8 = 98; // 0x6038
int32_t g9 = -0x4b7125d7; // 0x603c
int32_t g10 = -0xf101b93; // 0x6040
int32_t g11 = 0x1f0ef; // 0x6042
int32_t g12 = 1; // 0x6044
int32_t g13 = -3; // 0x6048
int32_t g14 = 0x2a266805; // 0x604c
int16_t g15 = -0x3a7d; // 0x6050
int16_t g16 = 1; // 0x6052
int32_t g17 = 0xdee263; // 0x6054
int32_t g18 = -0x2696ff22; // 0x6056
int32_t g19 = -0x12697; // 0x6058
int32_t g20 = -0x40002; // 0x605a
int32_t g21 = -5; // 0x605c
int32_t g22 = 116; // 0x6060
int32_t g23 = -0x3a8241f4; // 0x6064
int32_t g24 = 0x7c6442fd; // 0x6068
int32_t g25 = 0x7da15cdc; // 0x606c
char g26 = 5; // 0x6070
int16_t g27 = 1; // 0x6072
int32_t g28 = 239; // 0x6074
int32_t g29 = -0x6a2ce98d; // 0x6078
int32_t g30 = -0x359754eb; // 0x607c
int32_t g31 = -1; // 0x6080
char g32 = 0; // 0x6090
int32_t g33 = 0; // 0x60a0
int32_t g34 = 0; // 0x60a4
int32_t g35 = 0; // 0x60a6
int32_t * g36 = NULL; // 0x60b0
int32_t g37;

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
        result = &g37;
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s759retdec.c
// Address range: 0x1150 - 0x14a0
// Line range:    337 - 378
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
    transparent_crc(-3, "g_2", v1);
    transparent_crc((int32_t)*(int16_t *)&g2, "g_12", v1);
    transparent_crc(g3, "g_30", v1);
    transparent_crc(g4, "g_31", v1);
    transparent_crc((int32_t)*(int16_t *)&g5, "g_46", v1);
    transparent_crc(g6, "g_47", v1);
    transparent_crc(g7, "g_48", v1);
    transparent_crc((int32_t)*(char *)&g8, "g_61", v1);
    transparent_crc(g9, "g_65", v1);
    transparent_crc((int32_t)*(int16_t *)&g10, "g_74", v1);
    transparent_crc((int32_t)*(int16_t *)&g11, "g_90", v1);
    transparent_crc((int32_t)*(int16_t *)&g12, "g_96", v1);
    transparent_crc(g13, "g_122", v1);
    transparent_crc(g33, "g_123", v1);
    transparent_crc(g14, "g_148", v1);
    transparent_crc((int32_t)g15, "g_150", v1);
    transparent_crc((int32_t)g16, "g_151", v1);
    transparent_crc((int32_t)*(int16_t *)&g34, "g_152", v1);
    transparent_crc((int32_t)*(int16_t *)&g17, "g_162", v1);
    transparent_crc((int32_t)*(char *)&g35, "g_169", v1);
    transparent_crc((int32_t)*(char *)&g18, "g_190", v1);
    transparent_crc((int32_t)*(int16_t *)&g19, "g_193", v1);
    transparent_crc((int32_t)*(int16_t *)&g20, "g_203", v1);
    transparent_crc(g21, "g_209", v1);
    transparent_crc((int32_t)*(char *)&g22, "g_210", v1);
    transparent_crc(g23, "g_240", v1);
    transparent_crc(g24, "g_298", v1);
    transparent_crc(g25, "g_336", v1);
    transparent_crc((int32_t)g26, "g_337", v1);
    transparent_crc((int32_t)g27, "g_338", v1);
    transparent_crc((int32_t)*(char *)&g28, "g_418", v1);
    transparent_crc(g29, "g_442", v1);
    transparent_crc(g30, "g_443", v1);
    platform_main_end(-1 - *(int32_t *)0x6080, v1);
    return (int32_t)&g37 ^ (int32_t)&g37;
}

// From module:   /usr/include/bits/csmith.h
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
        *(int32_t *)(4 * i + (int64_t)&g36) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s759retdec.c
// Address range: 0x1550 - 0x3b60
// Line range:    70 - 330
int32_t func_1(void) {
    // 0x3b4b
    set_var(-3, -1, -0x7c32f328, 0x174a, -0x40d015d9, -0x5be2bf9, 98, -0x4b7125d7, -0x1b93, -3857, 1, -3, 0, 0x2a266805, -0x3a7d, 1, 0, -0x1d9d, 0, -34, -0x2697, -2, -5, 116, -0x3a8241f4, 0x7c6442fd, 0x7da15cdc, 5, 1, -17, -0x6a2ce98d, -0x359754eb);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3b60 - 0x3ba5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3b60
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x3b84
        printf("...checksum after hashing %s : %X\n", vname, -1 - g31);
    }
}

// From module:   /usr/include/bits/csmith.h
// Address range: 0x3bb0 - 0x3bd5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x3bb0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s759retdec.c
// Address range: 0x3be0 - 0x3de2
// Line range:    60 - 62
int32_t set_var(int16_t g_12_l, int32_t g_30_l, int32_t g_31_l, int16_t g_46_l, int32_t g_47_l, int32_t g_48_l, char g_61_l, int32_t g_65_l, int16_t g_74_l, int16_t g_90_l, int16_t g_96_l, int32_t g_122_l, int32_t g_123_l, int32_t g_148_l, int16_t g_150_l, int16_t g_151_l, int16_t g_152_l, int16_t g_162_l, char g_169_l, char g_190_l, int16_t g_193_l, int16_t g_203_l, int32_t g_209_l, char g_210_l, int32_t g_240_l, int32_t g_298_l, int32_t g_336_l, char g_337_l, int16_t g_338_l, char g_418_l, int32_t g_442_l, int32_t g_443_l) {
    // 0x3be0
    *(int16_t *)&g2 = g_12_l;
    g3 = g_30_l;
    g4 = g_31_l;
    *(int16_t *)&g5 = g_46_l;
    g6 = g_47_l;
    g7 = g_48_l;
    *(char *)&g8 = g_61_l;
    g9 = g_65_l;
    *(int16_t *)&g10 = g_74_l;
    *(int16_t *)&g11 = g_90_l;
    *(int16_t *)&g12 = g_96_l;
    g13 = g_122_l;
    g33 = g_123_l;
    g14 = g_148_l;
    g15 = g_150_l;
    g16 = g_151_l;
    *(int16_t *)&g34 = g_152_l;
    *(int16_t *)&g17 = g_162_l;
    *(char *)&g35 = g_169_l;
    *(char *)&g18 = g_190_l;
    *(int16_t *)&g19 = g_193_l;
    *(int16_t *)&g20 = g_203_l;
    g21 = g_209_l;
    *(char *)&g22 = g_210_l;
    g23 = g_240_l;
    g24 = g_298_l;
    g25 = g_336_l;
    g26 = g_337_l;
    g27 = g_338_l;
    *(char *)&g28 = g_418_l;
    g29 = g_442_l;
    g30 = g_443_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3df0 - 0x3e4d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x3df0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3e50 - 0x3e90
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g31;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g36); // 0x3e85
    g31 = v1 / 256 ^ v2;
}

// Address range: 0x3e90 - 0x3e9d
int64_t _fini(void) {
    // 0x3e90
    int64_t result; // 0x3e90
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

