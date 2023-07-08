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
int32_t set_var(int16_t g_6_l, int32_t g_10_l, int16_t g_12_l, int32_t g_13_l, char g_32_l, char g_33_l, int32_t g_59_l, int32_t g_85_l, int32_t g_90_l, char g_105_l, int32_t g_108_l, int32_t g_128_l, int32_t g_129_l, int16_t g_148_l, int32_t g_150_l, char g_151_l, int32_t g_165_l, int16_t g_189_l, int16_t g_204_l, int32_t g_205_l, int16_t g_281_l, int32_t g_313_l, int32_t g_349_l, char g_350_l, int16_t g_369_l, int32_t g_381_l, int32_t g_423_l, int32_t g_440_l, int32_t g_460_l, int32_t g_500_l, char g_502_l, int32_t g_504_l, int32_t g_505_l, int32_t g_507_l, int32_t g_550_l, int32_t g_551_l, int32_t g_570_l, int32_t g_676_l, int32_t g_698_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x6fe0
int16_t g2 = -0x30d2; // 0x7020
int32_t g3 = 8; // 0x7024
int32_t g4 = 1; // 0x7028
int32_t g5 = -6; // 0x702c
int32_t g6 = 0xf3ff; // 0x7030
int32_t g7 = 0x80000f3; // 0x7031
int32_t g8 = 8; // 0x7034
int32_t g9 = -0x4d16f179; // 0x7038
int32_t g10 = 82; // 0x703c
int32_t g11 = 0x5a14429f; // 0x7040
int32_t g12 = -6; // 0x7044
int32_t g13 = 6; // 0x7048
int32_t g14 = 0xfffd; // 0x704c
int32_t g15 = 0x480e9666; // 0x7050
int32_t g16 = 1; // 0x7054
int32_t g17 = -0x43b810f; // 0x7058
int32_t g18 = 0xcff165e; // 0x705c
int32_t g19 = -0x35adf301; // 0x705e
int32_t g20 = -0x66b435ae; // 0x7060
int16_t g21 = 0x619b; // 0x7064
int32_t g22 = -0x6edf43de; // 0x7068
int32_t g23 = -8; // 0x706c
int32_t g24 = 0x58310081; // 0x7070
int32_t g25 = 0x35831; // 0x7072
int32_t g26 = 3; // 0x7074
int32_t g27 = 0x27a3c4ab; // 0x7078
int32_t g28 = 9; // 0x707c
int32_t g29 = 0x7d05b849; // 0x7080
int32_t g30 = 1; // 0x7084
char g31 = 47; // 0x7088
int32_t g32 = 0xa700e2; // 0x708c
int32_t g33 = -1; // 0x7090
int32_t g34 = 1; // 0x7094
int32_t g35 = 0x7f397508; // 0x7098
int32_t g36 = 0x14fbd77c; // 0x709c
int32_t g37 = -1; // 0x70a0
int32_t g38 = -1; // 0x70a4
int32_t g39 = -0x336b8f5f; // 0x70a8
int32_t g40 = -1; // 0x70ac
int64_t g41 = 0; // 0x70b0
int32_t g42 = 0; // 0x70c0
int32_t * g43 = NULL; // 0x70d0
int32_t g44;

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
        result = &g44;
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
    return &g41;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g41 != 0) {
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
    *(char *)&g41 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s274r2.c
// Address range: 0x1150 - 0x1517
// Line range:    483 - 530
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
    transparent_crc((int32_t)g2, "g_6", v1);
    transparent_crc(g3, "g_10", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_12", v1);
    transparent_crc(g5, "g_13", v1);
    transparent_crc((int32_t)*(char *)&g6, "g_32", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_33", v1);
    transparent_crc(g8, "g_59", v1);
    transparent_crc(g9, "g_85", v1);
    transparent_crc(g42, "g_90", v1);
    transparent_crc((int32_t)*(char *)&g10, "g_105", v1);
    transparent_crc(g11, "g_108", v1);
    transparent_crc(g12, "g_128", v1);
    transparent_crc(g13, "g_129", v1);
    transparent_crc((int32_t)*(int16_t *)&g14, "g_148", v1);
    transparent_crc(g15, "g_150", v1);
    transparent_crc((int32_t)*(char *)&g16, "g_151", v1);
    transparent_crc(g17, "g_165", v1);
    transparent_crc((int32_t)*(int16_t *)&g18, "g_189", v1);
    transparent_crc((int32_t)*(int16_t *)&g19, "g_204", v1);
    transparent_crc(g20, "g_205", v1);
    transparent_crc((int32_t)g21, "g_281", v1);
    transparent_crc(g22, "g_313", v1);
    transparent_crc(g23, "g_349", v1);
    transparent_crc((int32_t)*(char *)&g24, "g_350", v1);
    transparent_crc((int32_t)*(int16_t *)&g25, "g_369", v1);
    transparent_crc(g26, "g_381", v1);
    transparent_crc(g27, "g_423", v1);
    transparent_crc(g28, "g_440", v1);
    transparent_crc(g29, "g_460", v1);
    transparent_crc(g30, "g_500", v1);
    transparent_crc((int32_t)g31, "g_502", v1);
    transparent_crc(g32, "g_504", v1);
    transparent_crc(g33, "g_505", v1);
    transparent_crc(g34, "g_507", v1);
    transparent_crc(g35, "g_550", v1);
    transparent_crc(g36, "g_551", v1);
    transparent_crc(g37, "g_570", v1);
    transparent_crc(g38, "g_676", v1);
    transparent_crc(g39, "g_698", v1);
    platform_main_end(-1 - *(int32_t *)0x70ac, v1);
    return (int32_t)&g44 ^ (int32_t)&g44;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1520 - 0x1526
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1520
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1530 - 0x15c5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1599
        int32_t v2 = i; // 0x1530
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1566
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x15a4
        *(int32_t *)(4 * i + (int64_t)&g43) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s274r2.c
// Address range: 0x15d0 - 0x4a35
// Line range:    76 - 476
int32_t func_1(void) {
    // 0x473d
    set_var(-0x30d2, 8, 1300, 1, 24, 15, 8, -0x4d16f179, 0, 82, 0x5a14429f, -7, 6, -3, 0x480e9667, 1, -0x43b810f, 0x165e, 3327, -0x66b435ae, 0x619b, -0x6edf43de, -7, -127, 0x5831, 2, 0x27a3c4ab, 9, 0x7d05b84a, 1, 47, 0xa700e2, -1, 0, 0x7f397508, 0x14fbd77b, -1, -1, -0x336b8f5f);
    return -3;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4a40 - 0x4a85
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x4a40
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x4a64
        printf("...checksum after hashing %s : %X\n", vname, -1 - g40);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x4a90 - 0x4ab5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x4a90
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s274r2.c
// Address range: 0x4ac0 - 0x4d6a
// Line range:    66 - 68
int32_t set_var(int16_t g_6_l, int32_t g_10_l, int16_t g_12_l, int32_t g_13_l, char g_32_l, char g_33_l, int32_t g_59_l, int32_t g_85_l, int32_t g_90_l, char g_105_l, int32_t g_108_l, int32_t g_128_l, int32_t g_129_l, int16_t g_148_l, int32_t g_150_l, char g_151_l, int32_t g_165_l, int16_t g_189_l, int16_t g_204_l, int32_t g_205_l, int16_t g_281_l, int32_t g_313_l, int32_t g_349_l, char g_350_l, int16_t g_369_l, int32_t g_381_l, int32_t g_423_l, int32_t g_440_l, int32_t g_460_l, int32_t g_500_l, char g_502_l, int32_t g_504_l, int32_t g_505_l, int32_t g_507_l, int32_t g_550_l, int32_t g_551_l, int32_t g_570_l, int32_t g_676_l, int32_t g_698_l) {
    // 0x4ac0
    g2 = g_6_l;
    g3 = g_10_l;
    *(int16_t *)&g4 = g_12_l;
    g5 = g_13_l;
    *(char *)&g6 = g_32_l;
    *(char *)&g7 = g_33_l;
    g8 = g_59_l;
    g9 = g_85_l;
    g42 = g_90_l;
    *(char *)&g10 = g_105_l;
    g11 = g_108_l;
    g12 = g_128_l;
    g13 = g_129_l;
    *(int16_t *)&g14 = g_148_l;
    g15 = g_150_l;
    *(char *)&g16 = g_151_l;
    g17 = g_165_l;
    *(int16_t *)&g18 = g_189_l;
    *(int16_t *)&g19 = g_204_l;
    g20 = g_205_l;
    g21 = g_281_l;
    g22 = g_313_l;
    g23 = g_349_l;
    *(char *)&g24 = g_350_l;
    *(int16_t *)&g25 = g_369_l;
    g26 = g_381_l;
    g27 = g_423_l;
    g28 = g_440_l;
    g29 = g_460_l;
    g30 = g_500_l;
    g31 = g_502_l;
    g32 = g_504_l;
    g33 = g_505_l;
    g34 = g_507_l;
    g35 = g_550_l;
    g36 = g_551_l;
    g37 = g_570_l;
    g38 = g_676_l;
    g39 = g_698_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4d70 - 0x4dcd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x4d70
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4dd0 - 0x4e10
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g40;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g43); // 0x4e05
    g40 = v1 / 256 ^ v2;
}

// Address range: 0x4e10 - 0x4e1d
int64_t _fini(void) {
    // 0x4e10
    int64_t result; // 0x4e10
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

