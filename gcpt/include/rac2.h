// -----
// buttons
// -----

#define PAD_LEFT            0x8000
#define PAD_DOWN            0x4000
#define PAD_RIGHT           0x2000
#define PAD_UP              0x1000
#define PAD_START           0x0800
#define PAD_R3              0x0400
#define PAD_L3              0x0200
#define PAD_SELECT          0x0100
#define PAD_SQUARE          0x0080
#define PAD_CROSS           0x0040
#define PAD_CIRCLE          0x0020
#define PAD_TRIANGLE        0x0010
#define PAD_R1              0x0008
#define PAD_L1              0x0004
#define PAD_R2              0x0002
#define PAD_L2              0x0001

enum Planets {
    ARANOS_TUTORIAL,
    OOZLA,
    MAKTAR,
    ENDAKO,
    BARLOW,
    FELTZIN,
    NOTAK,
    SIBERIUS,
    TABORA,
    DOBBO,
    HRUGIS,
    JOBA,
    TODANO,
    BOLDAN,
    ARANOS_REVISIT,
    GORN,
    SNIVELAK,
    SMOLG,
    DAMOSEL,
    GRELBIN,
    YEEDIL,
    MUSEUM,
    DOBBO_ORBIT,
    DAMOSEL_ORBIT,
    SHIP_SHACK,
    WUPASH,
    JAMMING_ARRAY
};



// -----
// types
// -----

typedef struct {
    float x;
    float y;
    float z;
    float w;
} vec4;

// -----
// functions
// -----

// Used for formatting strings.
// Arguments: destination, formatting, ...
#define sprintf ((void (*)(char*, char*, ...))0x0115da8)

// Arguments: posX, posY, color, text, ???
#define draw_text_aranos ((void (*)(int, int, u64, char*, int))0x2e9a10)

// Gets current PS2 clock time.
// Arguments: destination
#define sceCdReadClock ((int (*)(unsigned int*))0x1256d8)

#define udivdi3 ((u64 (*)(u64, u64))0x121b20)

#define umoddi3 ((u32 (*)(u32, s32))0x1220f0)

// #define getTextSprite ((u64 (*)(u64))0x002e67a0)
//                               posX posY //clr//text, length //style    //ptr
// #define guiDrawTextEx ((void (*)(int, int, u64, char*, int, uint64_t, int*))0x002e9230)
#define createPopup ((void(*)(char*, uint64_t))0x30dd70)

// player

// current bolt count.
#define bolt_count (*((int*)0x1A79F8))

// current raritanium count.
#define raritanium_count (*((int*)0x1A79FC))

// current armor equipped.
#define current_armor (*((int*)0x1A7A18))

// current position of ratchet.
#define player_pos (*((vec4*)0x189EA0))

// number of challenge modes you have. 1 byte.
#define challenge_mode (*((char*)0x1A7A0A))

// current planet
#define current_planet (*((char*)0x1A79F0))

// The buttons that are currently pressed.
#define down_buttons (*((unsigned int*)0x138320))

// The buttons that were pressed this frame.
#define pressed_buttons (*((unsigned int*)0x138324))

// The buttons that were released this frame.
#define released_buttons (*((unsigned int*)0x138328))


#define game_state (*((unsigned int*)0x1A8F00))


/*
typedef u64 (*GetTextSpritesFunc)(u64);
const uint64_t guiGetTextSpriteAddresses[] = {
    0x2e67a0,   // ARANOS_TUTORIAL
    0x2DBEE8,   // OOZLA
    0x2E9C30,   // MAKTAR
    0x2E72A0,   // ENDAKO
    0x306F78,   // BARLOW
    0x2FEF40,   // FELTZIN
    0x325E00,   // NOTAK
    0x2DC778,   // SIBERIUS
    0x2F2568,   // TABORA
    0x2E2828,   // DOBBO
    0x301440,   // HRUGIS
    0x2F8580,   // JOBA
    0x2E9E30,   // TODANO
    0x2F1208,   // BOLDAN
    0x2EE0A0,   // ARANOS_REVISIT
    0x2FF540,   // GORN
    0x2DF9F8,   // SNIVELAK
    0x2E77D8,   // SMOLG
    0x300FC8,   // DAMOSEL
    0x2E41C0,   // GRELBIN
    0x2FA720,   // YEEDIL
    0x2ED5D0,   // MUSEUM
    0x2EC970,   // DOBBO_ORBIT
    0x2F1050,   // DAMOSEL_ORBIT
    0x2E5738,   // SHIP_SHACK
    0x2F98C0,   // WUPASH
    0x2E6DB8    // JAMMING_ARRAY
};
*/