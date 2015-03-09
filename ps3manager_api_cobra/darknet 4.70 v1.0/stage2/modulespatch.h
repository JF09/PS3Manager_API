#ifndef __MODULESPATCH_H__
#define __MODULESPATCH_H__

#include <lv2/process.h>
#include <lv2/thread.h>

// BIG WARNING: self offsets need to add 0x10000 for address shown in IDA, but not sprxs!

#if defined(FIRMWARE_4_70) // Ported by Darkjiros & Blue Rabbit 27/02/2015 

#define VSH_HASH			0xa0027042002e3a65 // DARKNET CEX 4.70
#define BASIC_PLUGINS_HASH		 0xb59824e20001f849 //
#define EXPLORE_PLUGIN_HASH		0xacf4af2b000ec54f //
#define EXPLORE_CATEGORY_GAME_HASH	0x9cb378e600056add //  
#define BDP_DISC_CHECK_PLUGIN_HASH	0xb8b7a5f9000031a0 //The same as 4.66, 4.70
#define PS1_EMU_HASH			0x7a6cbdbf0009aa43 //
#define PS1_NETEMU_HASH			0x7a300dd2000be26f //
#define GAME_EXT_PLUGIN_HASH		0xe274af7b0001e6c9 //
#define PSP_EMULATOR_HASH		0x7be641f500023793 //The same as 4.66, 4.70
#define EMULATOR_API_HASH		0xa9f5b37a0001bb45 //
#define PEMUCORELIB_HASH		0xf349a563000c0d6c // 
#define EMULATOR_DRM_HASH		0xa324dc4a00005399 //The same as 4.66, 4.70
#define EMULATOR_DRM_DATA_HASH		0x75c390860001b75f //The same as 4.66, 4.70
#define LIBSYSUTIL_SAVEDATA_PSP_HASH	0x57bbc3b800003212 //The same as 4.66, 4.70
#define LIBFS_EXTERNAL_HASH		0x5bc7bce800006477 //The same as 4.66, 4.70

/* vsh */
#define vsh_text_size	            0x6B0000 // The same as 4.55, 4.66, 4.70
//#define elf1_func1 		0x5EF5E4
//#define elf1_func1_offset 	0x00
//#define elf1_func2 		0x245390
//#define elf1_func2_offset 	0x14 
#define game_update_offset	0x270DFC
#define ps2tonet_patch          	0xC4B14
#define ps2tonet_size_patch       0xC4B08
#define psp_drm_patch1           0x24265C
#define psp_drm_patch2          	0x2430FC 
#define psp_drm_patch3          	0x242D38
#define psp_drm_patch4          	0x243544
#define psp_drm_patchA          	0x242778
#define psp_drm_patchB          	0x243018
#define psp_drm_patchC          	0x2421B0
#define psp_drm_patchD          	0x242760
#define psp_drm_patchE          	0x242764
#define psp_drm_patchF          	0x243130 
#define revision_offset		0x65DD40
#define revision_offset2	0x6FF058
#define spoof_version_patch	0xB8E28
#define psn_spoof_version_patch	0x1A3948
#define vmode_patch_offset       0x445630

/* basic_plugins */ 
#define ps1emu_type_check_offset		0x1F78C 
#define pspemu_path_offset		0x4A9A8 // NPIA00005 serch
#define psptrans_path_offset		0x4B5D8 // BLUS30020 serch

/* nas_plugin */
//#define elf2_func1 			0x2E818
//#define elf2_func1_offset		0x374 // The same as 4.66, 4.70
//#define geohot_pkg_offset		0x3174 // The same as 4.66, 4.70

/* explore_plugin */
#define app_home_offset		0x250B90
#define ps2_nonbw_offset		0xDD97C 

/* explore_category_game */
#define ps2_nonbw_offset2		0x68324

/* bdp_disccheck_plugin */ //The same as 4.66, 4.70
#define dvd_video_region_check_offset	0x152C 

/* ps1_emu */ //The same as 4.66, 4.70
#define ps1_emu_get_region_offset		0x3E74 

/* ps1_netemu */ //The same as 4.66, 4.70
#define ps1_netemu_get_region_offset	0xA440C

/* game_ext_plugin */
#define sfo_check_offset		 0x23ED0
#define ps2_nonbw_offset3		 0x17004 // The same as 4.66, 4.70
#define ps_region_error_offset 		 0x68C4 // The same as 4.66, 4.70

/* psp_emulator */ //The same as 4.66, 4.70
#define psp_set_psp_mode_offset		0x1C18 

/* emulator_api */ //The same as 4.66, 4.70
#define psp_read			0x102D8
#define psp_read_header		0x1125C
#define psp_drm_patch5		0x11080 
#define psp_drm_patch6		0x110B0 
#define psp_drm_patch7		0x110C8
#define psp_drm_patch8		0x110CC
#define psp_drm_patch9		0x1120C 
#define psp_drm_patch11		0x11210
#define psp_drm_patch12		0x11220
#define psp_product_id_patch1		0x11320 
#define psp_product_id_patch3		0x115F8 
#define umd_mutex_offset		(0x64480+0x38C) 

/* pemucorelib */ // The same as 4.66, 4.70
#define psp_eboot_dec_patch		0x5E6BC
#define psp_prx_patch			0x577D8
#define psp_savedata_bind_patch1		0x7A4BC
#define psp_savedata_bind_patch2		0x7A514 
#define psp_savedata_bind_patch3		0x7A030 
#define psp_extra_savedata_patch		0x87540
#define psp_prometheus_patch		0x12EA28 
#define prx_patch_call_lr		0x5892C

/* emulator_drm */ //The same as 4.66, 4.70 
#define psp_drm_tag_overwrite		0x4C68
#define psp_drm_key_overwrite		(0x27600-0xBE80) 

/* libsysutil_savedata_psp */ //The same as 4.66, 4.70
#define psp_savedata_patch1		0x46CC
#define psp_savedata_patch2		0x46A4
#define psp_savedata_patch3		0x4504
#define psp_savedata_patch4		0x453C
#define psp_savedata_patch5		0x4550
#define psp_savedata_patch6		0x46B8

/* libfs (external */ // The same as 4.55,4.66, 4.70
#define aio_copy_root_offset		0xD658

#endif /* FIRMWARE */


typedef struct
{
	uint32_t offset;
	uint32_t data;
	uint8_t *condition;
} SprxPatch;

extern uint8_t condition_ps2softemu;
extern uint8_t condition_apphome;
extern uint8_t condition_psp_iso;
extern uint8_t condition_psp_dec;
extern uint8_t condition_psp_keys;
extern uint8_t condition_psp_change_emu;
extern uint8_t condition_psp_prometheus;

extern uint8_t block_peek;

extern process_t vsh_process;
extern uint8_t safe_mode;

/* Functions for kernel */
void modules_patch_init(void);
void do_spoof_patches(void);
void load_boot_plugins(void);
int prx_load_vsh_plugin(unsigned int slot, char *path, void *arg, uint32_t arg_size);
int prx_unload_vsh_plugin(unsigned int slot);

/* Syscalls */
int sys_vsh_spoof_version(char *version_str);
int sys_prx_load_vsh_plugin(unsigned int slot, char *path, void *arg, uint32_t arg_size);
int sys_prx_unload_vsh_plugin(unsigned int slot);
int sys_thread_create_ex(sys_ppu_thread_t *thread, void *entry, uint64_t arg, int prio, uint64_t stacksize, uint64_t flags, const char *threadname);

///////////// PS3MAPI BEGIN //////////////

void unhook_all_modules(void);
int ps3mapi_unload_vsh_plugin(char* name);

///////////// PS3MAPI END //////////////

#endif /* __MODULESPATCH_H__ */

