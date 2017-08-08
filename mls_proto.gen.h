/*
 * C header for rlmc/generated/mls_proto.json codogram module
 * Version: v0.9.0-3-g38b0680
 *
 * Auto-generated file! DO NOT MODIFY!
 */
#ifndef mls_proto_GEN_H
#define mls_proto_GEN_H

#if defined CPU && CPU == R4000
#include <inttypes.h>
#else
#include <stdint.h>
#endif

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#define regime_key_fap__BUFSIZE 56
#define regime_key_fap__ADDR 255
#define regime_key_fap__BIT_REC_TRANS 0
#define regime_key_fap__SUB_ADDR 1
#define regime_key_fap__COUNT_WORD 27

typedef struct regime_key_fap {

  uint8_t addr;                // 5 bits
  uint8_t bit_rec_trans;       // 1 bits
  uint8_t sub_addr;            // 5 bits
  uint8_t count_word;          // 5 bits
  uint8_t N_strobe_contr;      // 4 bits
  uint8_t N_k_t;               // 4 bits
  uint8_t regime;              // 5 bits
  uint8_t R_P;                 // 3 bits
  uint8_t N_col_kuk;           // 6 bits
  uint8_t N_row_kuk;           // 3 bits
  uint8_t N_fr_kuk;            // 4 bits
  uint8_t N_col_fap;           // 6 bits
  uint8_t N_row_fap;           // 3 bits
  uint8_t N_work_put_fap;      // 7 bits
  uint8_t mshu_ok_et_unsel;    // 1 bits
  uint8_t delta_fap_pr_l_ok0;  // 6 bits
  uint8_t K_att_ok0;           // 3 bits
  uint8_t delta_fap_ok0;       // 6 bits
  uint8_t mshu_ok_dist_unsel;  // 1 bits
  uint8_t delta_fap_pr_l_ok1;  // 6 bits
  uint8_t K_att_ok1;           // 3 bits
  uint8_t delta_fap_ok1;       // 6 bits
  uint8_t mshu_ok_fap_unsel;   // 1 bits
  uint8_t delta_fap_pr_l_ok2;  // 6 bits
  uint8_t K_att_ok2;           // 3 bits
  uint8_t delta_fap_ok2;       // 6 bits
  uint8_t mshu_ok_caru_unsel;  // 1 bits
  uint8_t delta_fap_pr_l_ok3;  // 6 bits
  uint8_t K_att_ok3;           // 3 bits
  uint8_t delta_fap_ok3;       // 6 bits
  uint8_t mshu_ok_et_sel;      // 1 bits
  uint8_t delta_fap_pr_l_ok4;  // 6 bits
  uint8_t K_att_ok4;           // 3 bits
  uint8_t delta_fap_ok4;       // 6 bits
  uint8_t mshu_ok_dist_sel;    // 1 bits
  uint8_t delta_fap_pr_l_ok5;  // 6 bits
  uint8_t K_att_ok5;           // 3 bits
  uint8_t delta_fap_ok5;       // 6 bits
  uint8_t mshu_ok_fap_sel;     // 1 bits
  uint8_t delta_fap_pr_l_ok6;  // 6 bits
  uint8_t K_att_ok6;           // 3 bits
  uint8_t delta_fap_ok6;       // 6 bits
  uint8_t mshu_ok_caru_sel;    // 1 bits
  uint8_t delta_fap_pr_l_ok7;  // 6 bits
  uint8_t K_att_ok7;           // 3 bits
  uint8_t delta_fap_ok7;       // 6 bits
  uint8_t key_dist_unsel;      // 1 bits
  uint8_t delta_fap_pr_l_ok8;  // 6 bits
  uint8_t K_att_ok8;           // 3 bits
  uint8_t delta_fap_ok8;       // 6 bits
  uint8_t key_fap_unsel;       // 1 bits
  uint8_t delta_fap_pr_l_ok9;  // 6 bits
  uint8_t K_att_ok9;           // 3 bits
  uint8_t delta_fap_ok9;       // 6 bits
  uint8_t key_caru_unsel;      // 1 bits
  uint8_t delta_fap_pr_l_ok10; // 6 bits
  uint8_t K_att_ok10;          // 3 bits
  uint8_t delta_fap_ok10;      // 6 bits
  uint8_t key_dist_sel;        // 1 bits
  uint8_t delta_fap_pr_l_ok11; // 6 bits
  uint8_t K_att_ok11;          // 3 bits
  uint8_t delta_fap_ok11;      // 6 bits
  uint8_t key_fap_sel;         // 1 bits
  uint8_t delta_fap_pr_l_ok12; // 6 bits
  uint8_t K_att_ok12;          // 3 bits
  uint8_t delta_fap_ok12;      // 6 bits
  uint8_t key_caru_sel;        // 1 bits
  uint8_t delta_fap_pr_l_ok13; // 6 bits
  uint8_t K_att_ok13;          // 3 bits
  uint8_t delta_fap_ok13;      // 6 bits
  uint8_t mod_et_unsel;        // 1 bits
  uint8_t delta_fap_pr_l_ok14; // 6 bits
  uint8_t K_att_ok14;          // 3 bits
  uint8_t delta_fap_ok14;      // 6 bits
  uint8_t mod_et_sel;          // 1 bits
  uint8_t delta_fap_pr_l_ok15; // 6 bits
  uint8_t K_att_ok15;          // 3 bits
  uint8_t delta_fap_ok15;      // 6 bits
  uint8_t mshu_kk_col0;        // 1 bits
  uint8_t K_att_kk0;           // 3 bits
  uint8_t delta_fap_kk0;       // 6 bits
  uint8_t delta_fap_pd0;       // 6 bits
  uint8_t mshu_kk_col1;        // 1 bits
  uint8_t K_att_kk1;           // 3 bits
  uint8_t delta_fap_kk1;       // 6 bits
  uint8_t delta_fap_pd1;       // 6 bits
  uint8_t mshu_kk_col2;        // 1 bits
  uint8_t K_att_kk2;           // 3 bits
  uint8_t delta_fap_kk2;       // 6 bits
  uint8_t delta_fap_pd2;       // 6 bits
  uint8_t mshu_kk_col3;        // 1 bits
  uint8_t K_att_kk3;           // 3 bits
  uint8_t delta_fap_kk3;       // 6 bits
  uint8_t sel_enter_AK_5_0;    // 6 bits
  uint8_t mshu_kk_col4;        // 1 bits
  uint8_t K_att_kk4;           // 3 bits
  uint8_t delta_fap_kk4;       // 6 bits
  uint8_t sel_enter_AK_6;      // 6 bits
  uint8_t mshu_kk_col5;        // 1 bits
  uint8_t K_att_kk5;           // 3 bits
  uint8_t delta_fap_kk5;       // 6 bits
  uint8_t sel_control_com_5_0; // 6 bits
  uint8_t mshu_kk_col6;        // 1 bits
  uint8_t K_att_kk6;           // 3 bits
  uint8_t delta_fap_kk6;       // 6 bits
  uint8_t sel_control_com_6;   // 6 bits
  uint8_t mshu_kk_col7;        // 1 bits
  uint8_t K_att_kk7;           // 3 bits
  uint8_t delta_fap_kk7;       // 6 bits

} regime_key_fap;

int Marshal_regime_key_fap(regime_key_fap *c, void *buff, size_t size);
int Unmarshal_regime_key_fap(regime_key_fap *c, const void *buff, size_t size);
int Is_regime_key_fap(void *buff, size_t size);

#define front_0_2__BUFSIZE 56
#define front_0_2__ADDR 255
#define front_0_2__BIT_REC_TRANS 0
#define front_0_2__SUB_ADDR 2
#define front_0_2__COUNT_WORD 27

typedef struct front_0_2 {

  uint8_t addr;                    // 5 bits
  uint8_t bit_rec_trans;           // 1 bits
  uint8_t sub_addr;                // 5 bits
  uint8_t count_word;              // 5 bits
  uint16_t delta_fx0_kk0;          // 9 bits
  uint8_t delta_fy0_pm_splitted0;  // 6 bits
  uint16_t delta_fx0_kk1;          // 9 bits
  uint8_t delta_fy0_pm_splitted1;  // 6 bits
  uint16_t delta_fx0_kk2;          // 9 bits
  uint8_t delta_fy0_pdm_splitted0; // 6 bits
  uint16_t delta_fx0_kk3;          // 9 bits
  uint8_t delta_fy0_pdm_splitted1; // 6 bits
  uint16_t delta_fx0_kk4;          // 9 bits
  uint8_t delta_fy0_pkm_splitted0; // 6 bits
  uint16_t delta_fx0_kk5;          // 9 bits
  uint8_t delta_fy0_pkm_splitted1; // 6 bits
  uint16_t delta_fx0_kk6;          // 9 bits
  uint8_t delta_fx0_ok_splitted0;  // 6 bits
  uint16_t delta_fx0_kk7;          // 9 bits
  uint8_t delta_fx0_ok_splitted1;  // 6 bits
  uint8_t N_work_put_0;            // 7 bits
  uint16_t delta_fx0_pr_l;         // 9 bits
  uint16_t delta_fx1_kk0;          // 9 bits
  uint8_t delta_fy1_pm_splitted0;  // 6 bits
  uint16_t delta_fx1_kk1;          // 9 bits
  uint8_t delta_fy1_pm_splitted1;  // 6 bits
  uint16_t delta_fx1_kk2;          // 9 bits
  uint8_t delta_fy1_pdm_splitted0; // 6 bits
  uint16_t delta_fx1_kk3;          // 9 bits
  uint8_t delta_fy1_pdm_splitted1; // 6 bits
  uint16_t delta_fx1_kk4;          // 9 bits
  uint8_t delta_fy1_pkm_splitted0; // 6 bits
  uint16_t delta_fx1_kk5;          // 9 bits
  uint8_t delta_fy1_pkm_splitted1; // 6 bits
  uint16_t delta_fx1_kk6;          // 9 bits
  uint8_t delta_fx1_ok_splitted0;  // 6 bits
  uint16_t delta_fx1_kk7;          // 9 bits
  uint8_t delta_fx1_ok_splitted1;  // 6 bits
  uint8_t N_work_put_1;            // 7 bits
  uint16_t delta_fx1_pr_l;         // 9 bits
  uint16_t delta_fx2_kk0;          // 9 bits
  uint8_t delta_fy2_pm_splitted0;  // 6 bits
  uint16_t delta_fx2_kk1;          // 9 bits
  uint8_t delta_fy2_pm_splitted1;  // 6 bits
  uint16_t delta_fx2_kk2;          // 9 bits
  uint8_t delta_fy2_pdm_splitted0; // 6 bits
  uint16_t delta_fx2_kk3;          // 9 bits
  uint8_t delta_fy2_pdm_splitted1; // 6 bits
  uint16_t delta_fx2_kk4;          // 9 bits
  uint8_t delta_fy2_pkm_splitted0; // 6 bits
  uint16_t delta_fx2_kk5;          // 9 bits
  uint8_t delta_fy2_pkm_splitted1; // 6 bits
  uint16_t delta_fx2_kk6;          // 9 bits
  uint8_t delta_fx2_ok_splitted0;  // 6 bits
  uint16_t delta_fx2_kk7;          // 9 bits
  uint8_t delta_fx2_ok_splitted1;  // 6 bits
  uint8_t N_work_put_2;            // 7 bits
  uint16_t delta_fx2_pr_l;         // 9 bits
  uint16_t delta_fy0_pm;           // splitted field
  uint16_t delta_fy0_pdm;          // splitted field
  uint16_t delta_fy0_pkm;          // splitted field
  uint16_t delta_fx0_ok;           // splitted field
  uint16_t delta_fy1_pm;           // splitted field
  uint16_t delta_fy1_pdm;          // splitted field
  uint16_t delta_fy1_pkm;          // splitted field
  uint16_t delta_fx1_ok;           // splitted field
  uint16_t delta_fy2_pm;           // splitted field
  uint16_t delta_fy2_pdm;          // splitted field
  uint16_t delta_fy2_pkm;          // splitted field
  uint16_t delta_fx2_ok;           // splitted field

} front_0_2;

int Marshal_front_0_2(front_0_2 *c, void *buff, size_t size);
int Unmarshal_front_0_2(front_0_2 *c, const void *buff, size_t size);
int Is_front_0_2(void *buff, size_t size);

#define front_3_5__BUFSIZE 56
#define front_3_5__ADDR 255
#define front_3_5__BIT_REC_TRANS 0
#define front_3_5__SUB_ADDR 3
#define front_3_5__COUNT_WORD 27

typedef struct front_3_5 {

  uint8_t addr;                    // 5 bits
  uint8_t bit_rec_trans;           // 1 bits
  uint8_t sub_addr;                // 5 bits
  uint8_t count_word;              // 5 bits
  uint16_t delta_fx3_kk0;          // 9 bits
  uint8_t delta_fy3_pm_splitted0;  // 6 bits
  uint16_t delta_fx3_kk1;          // 9 bits
  uint8_t delta_fy3_pm_splitted1;  // 6 bits
  uint16_t delta_fx3_kk2;          // 9 bits
  uint8_t delta_fy3_pdm_splitted0; // 6 bits
  uint16_t delta_fx3_kk3;          // 9 bits
  uint8_t delta_fy3_pdm_splitted1; // 6 bits
  uint16_t delta_fx3_kk4;          // 9 bits
  uint8_t delta_fy3_pkm_splitted0; // 6 bits
  uint16_t delta_fx3_kk5;          // 9 bits
  uint8_t delta_fy3_pkm_splitted1; // 6 bits
  uint16_t delta_fx3_kk6;          // 9 bits
  uint8_t delta_fx3_ok_splitted0;  // 6 bits
  uint16_t delta_fx3_kk7;          // 9 bits
  uint8_t delta_fx3_ok_splitted1;  // 6 bits
  uint8_t N_work_put_3;            // 7 bits
  uint16_t delta_fx3_pr_l;         // 9 bits
  uint16_t delta_fx4_kk0;          // 9 bits
  uint8_t delta_fy4_pm_splitted0;  // 6 bits
  uint16_t delta_fx4_kk1;          // 9 bits
  uint8_t delta_fy4_pm_splitted1;  // 6 bits
  uint16_t delta_fx4_kk2;          // 9 bits
  uint8_t delta_fy4_pdm_splitted0; // 6 bits
  uint16_t delta_fx4_kk3;          // 9 bits
  uint8_t delta_fy4_pdm_splitted1; // 6 bits
  uint16_t delta_fx4_kk4;          // 9 bits
  uint8_t delta_fy4_pkm_splitted0; // 6 bits
  uint16_t delta_fx4_kk5;          // 9 bits
  uint8_t delta_fy4_pkm_splitted1; // 6 bits
  uint16_t delta_fx4_kk6;          // 9 bits
  uint8_t delta_fx4_ok_splitted0;  // 6 bits
  uint16_t delta_fx4_kk7;          // 9 bits
  uint8_t delta_fx4_ok_splitted1;  // 6 bits
  uint8_t N_work_put_4;            // 7 bits
  uint16_t delta_fx4_pr_l;         // 9 bits
  uint16_t delta_fx5_kk0;          // 9 bits
  uint8_t delta_fy5_pm_splitted0;  // 6 bits
  uint16_t delta_fx5_kk1;          // 9 bits
  uint8_t delta_fy5_pm_splitted1;  // 6 bits
  uint16_t delta_fx5_kk2;          // 9 bits
  uint8_t delta_fy5_pdm_splitted0; // 6 bits
  uint16_t delta_fx5_kk3;          // 9 bits
  uint8_t delta_fy5_pdm_splitted1; // 6 bits
  uint16_t delta_fx5_kk4;          // 9 bits
  uint8_t delta_fy5_pkm_splitted0; // 6 bits
  uint16_t delta_fx5_kk5;          // 9 bits
  uint8_t delta_fy5_pkm_splitted1; // 6 bits
  uint16_t delta_fx5_kk6;          // 9 bits
  uint8_t delta_fx5_ok_splitted0;  // 6 bits
  uint16_t delta_fx5_kk7;          // 9 bits
  uint8_t delta_fx5_ok_splitted1;  // 6 bits
  uint8_t N_work_put_5;            // 7 bits
  uint16_t delta_fx5_pr_l;         // 9 bits
  uint16_t delta_fy3_pm;           // splitted field
  uint16_t delta_fy3_pdm;          // splitted field
  uint16_t delta_fy3_pkm;          // splitted field
  uint16_t delta_fx3_ok;           // splitted field
  uint16_t delta_fy4_pm;           // splitted field
  uint16_t delta_fy4_pdm;          // splitted field
  uint16_t delta_fy4_pkm;          // splitted field
  uint16_t delta_fx4_ok;           // splitted field
  uint16_t delta_fy5_pm;           // splitted field
  uint16_t delta_fy5_pdm;          // splitted field
  uint16_t delta_fy5_pkm;          // splitted field
  uint16_t delta_fx5_ok;           // splitted field

} front_3_5;

int Marshal_front_3_5(front_3_5 *c, void *buff, size_t size);
int Unmarshal_front_3_5(front_3_5 *c, const void *buff, size_t size);
int Is_front_3_5(void *buff, size_t size);

#define front_6_7__BUFSIZE 38
#define front_6_7__ADDR 255
#define front_6_7__BIT_REC_TRANS 0
#define front_6_7__SUB_ADDR 4
#define front_6_7__COUNT_WORD 18

typedef struct front_6_7 {

  uint8_t addr;                    // 5 bits
  uint8_t bit_rec_trans;           // 1 bits
  uint8_t sub_addr;                // 5 bits
  uint8_t count_word;              // 5 bits
  uint16_t delta_fx6_kk0;          // 9 bits
  uint8_t delta_fy6_pm_splitted0;  // 6 bits
  uint16_t delta_fx6_kk1;          // 9 bits
  uint8_t delta_fy6_pm_splitted1;  // 6 bits
  uint16_t delta_fx6_kk2;          // 9 bits
  uint8_t delta_fy6_pdm_splitted0; // 6 bits
  uint16_t delta_fx6_kk3;          // 9 bits
  uint8_t delta_fy6_pdm_splitted1; // 6 bits
  uint16_t delta_fx6_kk4;          // 9 bits
  uint8_t delta_fy6_pkm_splitted0; // 6 bits
  uint16_t delta_fx6_kk5;          // 9 bits
  uint8_t delta_fy6_pkm_splitted1; // 6 bits
  uint16_t delta_fx6_kk6;          // 9 bits
  uint8_t delta_fx6_ok_splitted0;  // 6 bits
  uint16_t delta_fx6_kk7;          // 9 bits
  uint8_t delta_fx6_ok_splitted1;  // 6 bits
  uint8_t N_work_put_6;            // 7 bits
  uint16_t delta_fx6_pr_l;         // 9 bits
  uint16_t delta_fx7_kk0;          // 9 bits
  uint8_t delta_fy7_pm_splitted0;  // 6 bits
  uint16_t delta_fx7_kk1;          // 9 bits
  uint8_t delta_fy7_pm_splitted1;  // 6 bits
  uint16_t delta_fx7_kk2;          // 9 bits
  uint8_t delta_fy7_pdm_splitted0; // 6 bits
  uint16_t delta_fx7_kk3;          // 9 bits
  uint8_t delta_fy7_pdm_splitted1; // 6 bits
  uint16_t delta_fx7_kk4;          // 9 bits
  uint8_t delta_fy7_pkm_splitted0; // 6 bits
  uint16_t delta_fx7_kk5;          // 9 bits
  uint8_t delta_fy7_pkm_splitted1; // 6 bits
  uint16_t delta_fx7_kk6;          // 9 bits
  uint8_t delta_fx7_ok_splitted0;  // 6 bits
  uint16_t delta_fx7_kk7;          // 9 bits
  uint8_t delta_fx7_ok_splitted1;  // 6 bits
  uint8_t N_work_put_7;            // 7 bits
  uint16_t delta_fx7_pr_l;         // 9 bits
  uint16_t delta_fy6_pm;           // splitted field
  uint16_t delta_fy6_pdm;          // splitted field
  uint16_t delta_fy6_pkm;          // splitted field
  uint16_t delta_fx6_ok;           // splitted field
  uint16_t delta_fy7_pm;           // splitted field
  uint16_t delta_fy7_pdm;          // splitted field
  uint16_t delta_fy7_pkm;          // splitted field
  uint16_t delta_fx7_ok;           // splitted field

} front_6_7;

int Marshal_front_6_7(front_6_7 *c, void *buff, size_t size);
int Unmarshal_front_6_7(front_6_7 *c, const void *buff, size_t size);
int Is_front_6_7(void *buff, size_t size);

#define response_words__BUFSIZE 6
#define response_words__BIT_REC_TRANS 1
#define response_words__SUB_ADDR 1
#define response_words__COUNT_WORD 2

typedef struct response_words {

  uint8_t addr;          // 5 bits
  uint8_t bit_rec_trans; // 1 bits
  uint8_t sub_addr;      // 5 bits
  uint8_t count_word;    // 5 bits
  uint16_t word_1;       // 16 bits
  uint16_t word_2;       // 16 bits

} response_words;

int Marshal_response_words(response_words *c, void *buff, size_t size);
int Unmarshal_response_words(response_words *c, const void *buff, size_t size);
int Is_response_words(void *buff, size_t size);

#define manage_time_distribution__BUFSIZE 10
#define manage_time_distribution__COUNT_WORD 4
#define manage_time_distribution__SUB_ADDR 16
#define manage_time_distribution__BIT_REC_TRANS 0
#define manage_time_distribution__ADDR 255

typedef struct manage_time_distribution {

  uint8_t count_word;     // 5 bits
  uint8_t sub_addr;       // 5 bits
  uint8_t bit_rec_trans;  // 1 bits
  uint8_t addr;           // 5 bits
  uint8_t sel_enter_AK;   // 7 bits
  uint8_t strobe;         // 4 bits
  uint8_t regime;         // 5 bits
  uint8_t R_P;            // 3 bits
  uint16_t strobe_length; // 16 bits
  uint8_t write_flash;    // 4 bits
  uint8_t rw;             // 1 bits
  uint8_t N_mod;          // 6 bits

} manage_time_distribution;

int Marshal_manage_time_distribution(manage_time_distribution *c, void *buff,
                                     size_t size);
int Unmarshal_manage_time_distribution(manage_time_distribution *c,
                                       const void *buff, size_t size);
int Is_manage_time_distribution(void *buff, size_t size);

#define manage_factory_fap__BUFSIZE 8
#define manage_factory_fap__ADDR 255
#define manage_factory_fap__BIT_REC_TRANS 0
#define manage_factory_fap__SUB_ADDR 17
#define manage_factory_fap__COUNT_WORD 3

typedef struct manage_factory_fap {

  uint8_t addr;          // 5 bits
  uint8_t bit_rec_trans; // 1 bits
  uint8_t sub_addr;      // 5 bits
  uint8_t count_word;    // 5 bits
  uint8_t sel_enter_AK;  // 7 bits
  uint8_t N_fr;          // 5 bits
  uint8_t R_P;           // 3 bits
  uint8_t delta_fap;     // 6 bits
  uint8_t Nf;            // 3 bits
  uint8_t N_row;         // 3 bits
  uint8_t N_col;         // 6 bits
  uint8_t rw;            // 1 bits
  uint8_t write_flash;   // 4 bits

} manage_factory_fap;

int Marshal_manage_factory_fap(manage_factory_fap *c, void *buff, size_t size);
int Unmarshal_manage_factory_fap(manage_factory_fap *c, const void *buff,
                                 size_t size);
int Is_manage_factory_fap(void *buff, size_t size);

#define manage_regular_fap__BUFSIZE 10
#define manage_regular_fap__ADDR 255
#define manage_regular_fap__BIT_REC_TRANS 0
#define manage_regular_fap__SUB_ADDR 18
#define manage_regular_fap__COUNT_WORD 4

typedef struct manage_regular_fap {

  uint8_t addr;           // 5 bits
  uint8_t bit_rec_trans;  // 1 bits
  uint8_t sub_addr;       // 5 bits
  uint8_t count_word;     // 5 bits
  uint8_t sel_enter_AK;   // 7 bits
  uint8_t N_fr;           // 5 bits
  uint8_t R_P;            // 3 bits
  uint8_t delta_fap;      // 6 bits
  uint8_t K_att;          // 3 bits
  uint8_t delta_fap_pr_l; // 6 bits
  uint8_t N_wp;           // 6 bits
  uint8_t N_row;          // 3 bits
  uint8_t N_col;          // 6 bits
  uint8_t rw;             // 1 bits
  uint8_t write_flash;    // 4 bits

} manage_regular_fap;

int Marshal_manage_regular_fap(manage_regular_fap *c, void *buff, size_t size);
int Unmarshal_manage_regular_fap(manage_regular_fap *c, const void *buff,
                                 size_t size);
int Is_manage_regular_fap(void *buff, size_t size);

#ifdef __cplusplus
}
#endif

#endif // mls_proto_GEN_H
