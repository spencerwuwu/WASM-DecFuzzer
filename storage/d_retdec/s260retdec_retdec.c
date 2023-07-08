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
int32_t set_var(int16_t g_10_l, char g_11_l, int32_t g_12_l, int16_t g_29_l, int32_t g_63_l, int32_t g_64_l, int32_t g_65_l, int32_t g_75_l, int32_t g_76_l, int32_t g_87_l, char g_107_l, int32_t g_146_l, int16_t g_174_l, int32_t g_175_l, int32_t g_185_l, int16_t g_213_l, int32_t g_216_l, int32_t g_217_l, int16_t g_218_l, int32_t g_344_l, int32_t g_345_l, int32_t g_417_l, int32_t g_418_l, int16_t g_420_l, int16_t g_421_l, int32_t g_423_l, int32_t g_425_l, int32_t g_443_l, int16_t g_451_l, int16_t g_482_l, char g_507_l, char g_533_l, int32_t g_536_l, int16_t g_537_l, int16_t g_553_l, int32_t g_588_l, char g_613_l, int16_t g_614_l, int32_t g_615_l, int32_t g_616_l, int32_t g_617_l, char g_680_l, int32_t g_750_l, int32_t g_766_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x9fe0
int16_t g2 = -0x3346; // 0xa020
int32_t g3 = 3; // 0xa024
int32_t g4 = 1; // 0xa028
int32_t g5 = -0x397cc1e6; // 0xa02c
int32_t g6 = 0x6e91f131; // 0xa030
int32_t g7 = 0x577dc965; // 0xa034
int32_t g8 = -0x7241a7c4; // 0xa038
int32_t g9 = 0x72cc6491; // 0xa03c
int32_t g10 = 1; // 0xa040
int32_t g11 = 0x62eb4ce5; // 0xa044
int32_t g12 = 0x7742; // 0xa048
int32_t g13 = -0x3a7f373a; // 0xa04c
int32_t g14 = 0x59ab2abf; // 0xa050
int16_t g15 = 0x2569; // 0xa054
int32_t g16 = -0x4e7cfffd; // 0xa056
int32_t g17 = 0x2c7b183; // 0xa058
int32_t g18 = -0x61c41fc0; // 0xa05c
int32_t g19 = 0x5496351c; // 0xa060
int32_t g20 = -8; // 0xa064
int32_t g21 = 0x1daf3044; // 0xa068
int16_t g22 = 0x1daf; // 0xa06a
int32_t g23 = -2; // 0xa06c
int32_t g24 = -1; // 0xa070
int32_t g25 = 0x74e24a5d; // 0xa074
int32_t g26 = -10; // 0xa078
int32_t g27 = 0xffffff; // 0xa07a
int32_t g28 = 255; // 0xa07c
int32_t g29 = 0x95cb5b3; // 0xa080
int16_t g30 = 0x2ac8; // 0xa084
int32_t g31 = -0x2f7a0002; // 0xa086
int32_t g32 = -0x66892f7b; // 0xa088
int32_t g33 = -0x7ff59; // 0xa08c
int16_t g34 = -8; // 0xa08e
int32_t g35 = -0x487c5bf7; // 0xa090
int32_t g36 = 1; // 0xa094
int32_t g37 = -2; // 0xa098
int32_t g38 = 195; // 0xa09c
int32_t g39 = -0x1e64de6a; // 0xa0a0
int32_t g40 = 0x3680bf27; // 0xa0a4
int32_t g41 = -1; // 0xa0a8
int64_t g42 = 0; // 0xa0b0
int32_t g43 = 0; // 0xa0c0
int32_t g44 = 0; // 0xa0c4
int32_t g45 = 0; // 0xa0c8
int32_t g46 = 0; // 0xa0cc
int32_t g47 = 0; // 0xa0d0
int32_t * g48 = NULL; // 0xa0e0
int32_t g49;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x9fd0 != 0) {
        // 0x1014
        __gmon_start__();
        result = &g49;
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
    return &g42;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g42 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0xa018);
    }
    int64_t result2 = function_1080(); // 0x1118
    *(char *)&g42 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s260retdec.c
// Address range: 0x1150 - 0x158c
// Line range:    569 - 621
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
    transparent_crc((int32_t)g2, "g_10", v1);
    transparent_crc((int32_t)*(char *)&g43, "g_11", v1);
    transparent_crc(g3, "g_12", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_29", v1);
    transparent_crc(g5, "g_63", v1);
    transparent_crc(g44, "g_64", v1);
    transparent_crc(g6, "g_65", v1);
    transparent_crc(g7, "g_75", v1);
    transparent_crc(g8, "g_76", v1);
    transparent_crc(g9, "g_87", v1);
    transparent_crc((int32_t)*(char *)&g10, "g_107", v1);
    transparent_crc(g11, "g_146", v1);
    transparent_crc((int32_t)*(int16_t *)&g12, "g_174", v1);
    transparent_crc(g13, "g_175", v1);
    transparent_crc(g14, "g_185", v1);
    transparent_crc((int32_t)g15, "g_213", v1);
    transparent_crc(g45, "g_216", v1);
    transparent_crc(g46, "g_217", v1);
    transparent_crc((int32_t)*(int16_t *)&g16, "g_218", v1);
    transparent_crc(g17, "g_344", v1);
    transparent_crc(g18, "g_345", v1);
    transparent_crc(g19, "g_417", v1);
    transparent_crc(g20, "g_418", v1);
    transparent_crc((int32_t)*(int16_t *)&g21, "g_420", v1);
    transparent_crc((int32_t)g22, "g_421", v1);
    transparent_crc(g23, "g_423", v1);
    transparent_crc(g24, "g_425", v1);
    transparent_crc(g25, "g_443", v1);
    transparent_crc((int32_t)*(int16_t *)&g26, "g_451", v1);
    transparent_crc((int32_t)*(int16_t *)&g27, "g_482", v1);
    transparent_crc((int32_t)*(char *)&g47, "g_507", v1);
    transparent_crc((int32_t)*(char *)&g28, "g_533", v1);
    transparent_crc(g29, "g_536", v1);
    transparent_crc((int32_t)g30, "g_537", v1);
    transparent_crc((int32_t)*(int16_t *)&g31, "g_553", v1);
    transparent_crc(g32, "g_588", v1);
    transparent_crc((int32_t)*(char *)&g33, "g_613", v1);
    transparent_crc((int32_t)g34, "g_614", v1);
    transparent_crc(g35, "g_615", v1);
    transparent_crc(g36, "g_616", v1);
    transparent_crc(g37, "g_617", v1);
    transparent_crc((int32_t)*(char *)&g38, "g_680", v1);
    transparent_crc(g39, "g_750", v1);
    transparent_crc(g40, "g_766", v1);
    platform_main_end(-1 - *(int32_t *)0xa0a8, v1);
    return (int32_t)&g49 ^ (int32_t)&g49;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1590 - 0x1596
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1590
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x15a0 - 0x1635
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1609
        int32_t v2 = i; // 0x15a0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x15d6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1614
        *(int32_t *)(4 * i + (int64_t)&g48) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s260retdec.c
// Address range: 0x1640 - 0x707f
// Line range:    81 - 562
int32_t func_1(void) {
    // 0x1640
    set_var(-0x3346, -1, -0x2d4efe23, 1, -0x397cc1e6, 1, 1, 0x577dc965, -0x7241a7c4, 0x2d4efe22, 1, 0x62eb4ce5, 0x7742, -0x3a7f373a, 0x59ab2abf, 0x2569, 0, 0, 3, 0x2c7b183, -0x61c41fc0, 0x5496351c, -8, 0x3044, 0x1daf, -2, -1, 0x74e24a5d, -10, -1, 0, -1, 0x95cb5b3, 0x2ac8, -2, -0x66892f7b, -89, -8, -0x487c5bf7, 1, -2, -61, -0x1e64de6a, 0x3680bf27);
    return -0x2d4efe23;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x7080 - 0x70c5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x7080
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x70a4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g41);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x70d0 - 0x70f5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x70d0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s260retdec.c
// Address range: 0x7100 - 0x73dc
// Line range:    71 - 73
int32_t set_var(int16_t g_10_l, char g_11_l, int32_t g_12_l, int16_t g_29_l, int32_t g_63_l, int32_t g_64_l, int32_t g_65_l, int32_t g_75_l, int32_t g_76_l, int32_t g_87_l, char g_107_l, int32_t g_146_l, int16_t g_174_l, int32_t g_175_l, int32_t g_185_l, int16_t g_213_l, int32_t g_216_l, int32_t g_217_l, int16_t g_218_l, int32_t g_344_l, int32_t g_345_l, int32_t g_417_l, int32_t g_418_l, int16_t g_420_l, int16_t g_421_l, int32_t g_423_l, int32_t g_425_l, int32_t g_443_l, int16_t g_451_l, int16_t g_482_l, char g_507_l, char g_533_l, int32_t g_536_l, int16_t g_537_l, int16_t g_553_l, int32_t g_588_l, char g_613_l, int16_t g_614_l, int32_t g_615_l, int32_t g_616_l, int32_t g_617_l, char g_680_l, int32_t g_750_l, int32_t g_766_l) {
    // 0x7100
    g2 = g_10_l;
    *(char *)&g43 = g_11_l;
    g3 = g_12_l;
    *(int16_t *)&g4 = g_29_l;
    g5 = g_63_l;
    g44 = g_64_l;
    g6 = g_65_l;
    g7 = g_75_l;
    g8 = g_76_l;
    g9 = g_87_l;
    *(char *)&g10 = g_107_l;
    g11 = g_146_l;
    *(int16_t *)&g12 = g_174_l;
    g13 = g_175_l;
    g14 = g_185_l;
    g15 = g_213_l;
    g45 = g_216_l;
    g46 = g_217_l;
    *(int16_t *)&g16 = g_218_l;
    g17 = g_344_l;
    g18 = g_345_l;
    g19 = g_417_l;
    g20 = g_418_l;
    *(int16_t *)&g21 = g_420_l;
    g22 = g_421_l;
    g23 = g_423_l;
    g24 = g_425_l;
    g25 = g_443_l;
    *(int16_t *)&g26 = g_451_l;
    *(int16_t *)&g27 = g_482_l;
    *(char *)&g47 = g_507_l;
    *(char *)&g28 = g_533_l;
    g29 = g_536_l;
    g30 = g_537_l;
    *(int16_t *)&g31 = g_553_l;
    g32 = g_588_l;
    *(char *)&g33 = g_613_l;
    g34 = g_614_l;
    g35 = g_615_l;
    g36 = g_616_l;
    g37 = g_617_l;
    *(char *)&g38 = g_680_l;
    g39 = g_750_l;
    g40 = g_766_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x73e0 - 0x743d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x73e0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x7440 - 0x7480
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g41;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g48); // 0x7475
    g41 = v1 / 256 ^ v2;
}

// Address range: 0x7480 - 0x748d
int64_t _fini(void) {
    // 0x7480
    int64_t result; // 0x7480
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

