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
int32_t set_var(int32_t g_2_l, int32_t g_5_l, int32_t g_17_l, char g_20_l, int16_t g_64_l, int32_t g_88_l, int32_t g_89_l, int16_t g_90_l, int16_t g_93_l, int32_t g_126_l, int32_t g_151_l, int16_t g_176_l, int32_t g_177_l, int16_t g_194_l, int32_t g_239_l, char g_253_l, int32_t g_275_l, int32_t g_297_l, int32_t g_317_l, char g_373_l, char g_408_l, char g_442_l, int32_t g_445_l, int32_t g_446_l, int32_t g_456_l, int32_t g_457_l, int32_t g_458_l, char g_478_l, char g_479_l, char g_488_l, char g_534_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x6fe0
int32_t g2 = 0x40d7f825; // 0x7020
int32_t g3 = -0x3162fa46; // 0x7024
int32_t g4 = -1; // 0x7028
int32_t g5 = 58; // 0x702c
int32_t g6 = 1; // 0x7030
int32_t g7 = 2; // 0x7034
int16_t g8 = -9; // 0x7038
int16_t g9 = -0x47e4; // 0x703a
int32_t g10 = 0x828d0e3; // 0x703c
int32_t g11 = 1; // 0x7040
int32_t g12 = -0x7c084da0; // 0x7044
int32_t g13 = 0x10001; // 0x7048
int32_t g14 = -0x7ffff; // 0x704a
int32_t g15 = -8; // 0x704c
int32_t g16 = -0x7984cf02; // 0x7050
int32_t g17 = 0x6901ff; // 0x7054
char g18 = 1; // 0x7055
int32_t g19 = 0x10069; // 0x7056
int32_t g20 = 1; // 0x7058
int32_t g21 = -0x561d707; // 0x705c
int32_t g22 = -0x53566108; // 0x7060
int32_t g23 = 0x15397d0a; // 0x7064
int32_t g24 = -1246; // 0x7068
int64_t g25; // 0x7069
int64_t g26; // 0x706a
int64_t g27; // 0x706b
int32_t g28 = -1; // 0x706c
int64_t g29 = 0; // 0x7070
int32_t g30 = 0; // 0x7080
int32_t g31 = 0; // 0x7084
int32_t g32 = 0; // 0x7088
int32_t g33 = 0; // 0x708c
int32_t g34 = 0; // 0x7090
int32_t * g35 = NULL; // 0x70a0
int32_t g36;

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
        result = &g36;
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
    return &g29;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g29 != 0) {
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
    *(char *)&g29 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s515retdec.c
// Address range: 0x1150 - 0x1472
// Line range:    443 - 482
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
    transparent_crc(g4, "g_17", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_20", v1);
    transparent_crc((int32_t)*(int16_t *)&g30, "g_64", v1);
    transparent_crc(g6, "g_88", v1);
    transparent_crc(g7, "g_89", v1);
    transparent_crc((int32_t)g8, "g_90", v1);
    transparent_crc((int32_t)g9, "g_93", v1);
    transparent_crc(g10, "g_126", v1);
    transparent_crc(g31, "g_151", v1);
    transparent_crc((int32_t)*(int16_t *)&g11, "g_176", v1);
    transparent_crc(g12, "g_177", v1);
    transparent_crc((int32_t)*(int16_t *)&g13, "g_194", v1);
    transparent_crc(g32, "g_239", v1);
    transparent_crc((int32_t)*(char *)&g14, "g_253", v1);
    transparent_crc(g15, "g_275", v1);
    transparent_crc(g33, "g_297", v1);
    transparent_crc(g16, "g_317", v1);
    transparent_crc((int32_t)*(char *)&g17, "g_373", v1);
    transparent_crc((int32_t)g18, "g_408", v1);
    transparent_crc((int32_t)*(char *)&g19, "g_442", v1);
    transparent_crc(g20, "g_445", v1);
    transparent_crc(g21, "g_446", v1);
    transparent_crc(g34, "g_456", v1);
    transparent_crc(g22, "g_457", v1);
    transparent_crc(g23, "g_458", v1);
    transparent_crc((int32_t)*(char *)&g24, "g_478", v1);
    transparent_crc((int32_t)*(char *)0x7069, "g_479", v1);
    transparent_crc((int32_t)*(char *)0x706a, "g_488", v1);
    transparent_crc((int32_t)*(char *)0x706b, "g_534", v1);
    platform_main_end(-1 - *(int32_t *)0x706c, v1);
    return (int32_t)&g36 ^ (int32_t)&g36;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1480 - 0x1486
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1480
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1490 - 0x1525
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x14f9
        int32_t v2 = i; // 0x1490
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x14c6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1504
        *(int32_t *)(4 * i + (int64_t)&g35) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s515retdec.c
// Address range: 0x1530 - 0x4024
// Line range:    68 - 436
int32_t func_1(void) {
    // 0x1530
    set_var(1, -0x3162fa46, -1, 58, 0, 1, 2, -9, -0x47e4, 0x828d0e3, 0, 1, -0x7c084da0, 1, 0, 1, -8, 0, -0x7984cf02, -1, 1, 105, 1, -0x561d707, 0, -0x53566108, 0x15397d0a, 34, -5, -1, -43);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4030 - 0x4075
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x4030
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x4054
        printf("...checksum after hashing %s : %X\n", vname, -1 - g28);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x4080 - 0x40a5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x4080
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s515retdec.c
// Address range: 0x40b0 - 0x429b
// Line range:    58 - 60
int32_t set_var(int32_t g_2_l, int32_t g_5_l, int32_t g_17_l, char g_20_l, int16_t g_64_l, int32_t g_88_l, int32_t g_89_l, int16_t g_90_l, int16_t g_93_l, int32_t g_126_l, int32_t g_151_l, int16_t g_176_l, int32_t g_177_l, int16_t g_194_l, int32_t g_239_l, char g_253_l, int32_t g_275_l, int32_t g_297_l, int32_t g_317_l, char g_373_l, char g_408_l, char g_442_l, int32_t g_445_l, int32_t g_446_l, int32_t g_456_l, int32_t g_457_l, int32_t g_458_l, char g_478_l, char g_479_l, char g_488_l, char g_534_l) {
    // 0x40b0
    g2 = g_2_l;
    g3 = g_5_l;
    g4 = g_17_l;
    *(char *)&g5 = g_20_l;
    *(int16_t *)&g30 = g_64_l;
    g6 = g_88_l;
    g7 = g_89_l;
    g8 = g_90_l;
    g9 = g_93_l;
    g10 = g_126_l;
    g31 = g_151_l;
    *(int16_t *)&g11 = g_176_l;
    g12 = g_177_l;
    *(int16_t *)&g13 = g_194_l;
    g32 = g_239_l;
    *(char *)&g14 = g_253_l;
    g15 = g_275_l;
    g33 = g_297_l;
    g16 = g_317_l;
    *(char *)&g17 = g_373_l;
    g18 = g_408_l;
    *(char *)&g19 = g_442_l;
    g20 = g_445_l;
    g21 = g_446_l;
    g34 = g_456_l;
    g22 = g_457_l;
    g23 = g_458_l;
    *(char *)&g24 = g_478_l;
    *(char *)&g25 = g_479_l;
    *(char *)&g26 = g_488_l;
    *(char *)&g27 = g_534_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x42a0 - 0x42fd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x42a0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x4300 - 0x4340
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g28;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g35); // 0x4335
    g28 = v1 / 256 ^ v2;
}

// Address range: 0x4340 - 0x434d
int64_t _fini(void) {
    // 0x4340
    int64_t result; // 0x4340
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

