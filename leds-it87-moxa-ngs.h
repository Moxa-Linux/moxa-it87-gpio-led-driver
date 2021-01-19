/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef __LEDS_IT87_MOXA_NGS_H
#define __LEDS_IT87_MOXA_NGS_H

enum it87xx_board {
	IT87XX_BOARD_MOXA_V_2201,
	IT87XX_BOARD_MOXA_DA_820C,
	IT87XX_BOARD_MOXA_DA_682C,
	IT87XX_BOARD_MOXA_DA_681A,
	IT87XX_BOARD_MOXA_DA_681C,
	IT87XX_BOARD_MOXA_WHL_CORE_TEST,

	IT87XX_BOARD_UNKNOWN,
	IT87XX_BOARD_NO
};

#define IT87XX_BOARD_MAX_NAME 30

struct it87xx_board_type {
	enum it87xx_board board;
	char *board_name;
};

struct it87xx_board_type_list {
	struct it87xx_board_type board;
	char *model_name;
};

struct it87xx_board_store {
	enum it87xx_board board;
	char name[IT87XX_BOARD_MAX_NAME];
};

static const struct it87xx_board_type_list it87xx_board_type_list_models[] = {
	/* V Series */
	{{IT87XX_BOARD_MOXA_V_2201, "Moxa V2201"}, "V2201-E1-T"},
	{{IT87XX_BOARD_MOXA_V_2201, "Moxa V2201"}, "V2201-E1-T-LX"},
	{{IT87XX_BOARD_MOXA_V_2201, "Moxa V2201"}, "V2201-E1-T-W7E"},
	{{IT87XX_BOARD_MOXA_V_2201, "Moxa V2201"}, "V2201-E1-W-T"},
	{{IT87XX_BOARD_MOXA_V_2201, "Moxa V2201"}, "V2201-E2-T"},
	{{IT87XX_BOARD_MOXA_V_2201, "Moxa V2201"}, "V2201-E2-W-T"},
	{{IT87XX_BOARD_MOXA_V_2201, "Moxa V2201"}, "V2201-E4-T"},
	{{IT87XX_BOARD_MOXA_V_2201, "Moxa V2201"}, "V2201-E4-W-T"},
	{{IT87XX_BOARD_MOXA_V_2201, "Moxa V2201"}, "V2201-E4-W-T-LX"},

	/* DA-820C Series */
	{{IT87XX_BOARD_MOXA_DA_820C, "Moxa DA820C"}, "DA-820C-KL3-H-T"},
	{{IT87XX_BOARD_MOXA_DA_820C, "Moxa DA820C"}, "DA-820C-KL3-HH-T"},
	{{IT87XX_BOARD_MOXA_DA_820C, "Moxa DA820C"}, "DA-820C-KL5-H-T"},
	{{IT87XX_BOARD_MOXA_DA_820C, "Moxa DA820C"}, "DA-820C-KL5-HH-T"},
	{{IT87XX_BOARD_MOXA_DA_820C, "Moxa DA820C"}, "DA-820C-KLXL-H-T"},
	{{IT87XX_BOARD_MOXA_DA_820C, "Moxa DA820C"}, "DA-820C-KLXL-HH-T"},
	{{IT87XX_BOARD_MOXA_DA_820C, "Moxa DA820C"}, "DA-820C-KL7-H"},
	{{IT87XX_BOARD_MOXA_DA_820C, "Moxa DA820C"}, "DA-820C-KL7-HH"},
	{{IT87XX_BOARD_MOXA_DA_820C, "Moxa DA820C"}, "DA-820C-KLXM-H"},
	{{IT87XX_BOARD_MOXA_DA_820C, "Moxa DA820C"}, "DA-820C-KLXM-HH"},

	/* DA-682C Series */
	{{IT87XX_BOARD_MOXA_DA_682C, "Moxa DA682C"}, "DA-682C-KL1-H-T"},
	{{IT87XX_BOARD_MOXA_DA_682C, "Moxa DA682C"}, "DA-682C-KL1-HH-T"},
	{{IT87XX_BOARD_MOXA_DA_682C, "Moxa DA682C"}, "DA-682C-KL3-H-T"},
	{{IT87XX_BOARD_MOXA_DA_682C, "Moxa DA682C"}, "DA-682C-KL3-HH-T"},
	{{IT87XX_BOARD_MOXA_DA_682C, "Moxa DA682C"}, "DA-682C-KL5-H-T"},
	{{IT87XX_BOARD_MOXA_DA_682C, "Moxa DA682C"}, "DA-682C-KL5-HH-T"},
	{{IT87XX_BOARD_MOXA_DA_682C, "Moxa DA682C"}, "DA-682C-KL7-H-T"},
	{{IT87XX_BOARD_MOXA_DA_682C, "Moxa DA682C"}, "DA-682C-KL7-HH-T"},

	/* DA-681A CN Series */
	{{IT87XX_BOARD_MOXA_DA_681A, "Moxa DA681A"}, "DA-681A-I-DPP-WL1 (CN)"},
	{{IT87XX_BOARD_MOXA_DA_681A, "Moxa DA681A"}, "DA-681A-I-SP-WL1 (CN)"},

	/* DA-681C Series */
	{{IT87XX_BOARD_MOXA_DA_681C, "Moxa DA681C"}, "DA-681C-KL1-H-T"},
	{{IT87XX_BOARD_MOXA_DA_681C, "Moxa DA681C"}, "DA-681C-KL1-HH-T"},
	{{IT87XX_BOARD_MOXA_DA_681C, "Moxa DA681C"}, "DA-681C-KL3-H-T"},
	{{IT87XX_BOARD_MOXA_DA_681C, "Moxa DA681C"}, "DA-681C-KL3-HH-T"},

	/* Whiskeylake test */
	{{IT87XX_BOARD_MOXA_WHL_CORE_TEST, "Moxa WHL-CORE-TEST"}, "WHL-CORE-TEST"},
	
	{{0}, 0},
};

static const struct it87xx_board_type it87xx_board_unknown[] = {
	{IT87XX_BOARD_UNKNOWN, "Unknown Board"},
};

#define IT87XX_GPIO_DRIVER "gpio-it87"

#endif /* __LEDS_IT87_MOXA_NGS_H */
