/*
 * C header for rlmc/generated/external_rlmc_fv_proto.json codogram module
 * Version: v0.9.0-3-g38b0680
 *
 * Auto-generated file! DO NOT MODIFY!
 */
#ifndef external_rlmc_fv_proto_GEN_H
#define external_rlmc_fv_proto_GEN_H

#if defined CPU && CPU == R4000
#include <inttypes.h>
#else
#include <stdint.h>
#endif

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#define fap_freq_request__BUFSIZE 4
#define fap_freq_request__TS 66
#define fap_freq_request__KOP 255

typedef struct fap_freq_request {

  uint8_t ist;     // 8 bits
  uint8_t ts;      // 8 bits
  uint8_t __temp1; // 8 bits
  uint8_t kop;     // 8 bits

} __attribute__((packed)) fap_freq_request;

int Marshal_fap_freq_request(fap_freq_request *c, void *buff, size_t size);
int Unmarshal_fap_freq_request(fap_freq_request *c, const void *buff,
                               size_t size);
int Is_fap_freq_request(void *buff, size_t size);

#define change_fap_freq__BUFSIZE 6
#define change_fap_freq__TS 66
#define change_fap_freq__KOP 1

typedef struct change_fap_freq {

  uint8_t ist;      // 8 bits
  uint8_t ts;       // 8 bits
  uint8_t __temp1;  // 8 bits
  uint8_t kop;      // 8 bits
  uint8_t fap;      // 8 bits
  uint8_t fap_freq; // 8 bits

} __attribute__((packed)) change_fap_freq;

int Marshal_change_fap_freq(change_fap_freq *c, void *buff, size_t size);
int Unmarshal_change_fap_freq(change_fap_freq *c, const void *buff,
                              size_t size);
int Is_change_fap_freq(void *buff, size_t size);

#define change_fap_freq_kvit__BUFSIZE 6
#define change_fap_freq_kvit__TS 66
#define change_fap_freq_kvit__KOM_KOP 1

typedef struct change_fap_freq_kvit {

  uint8_t ist;      // 8 bits
  uint8_t ts;       // 8 bits
  uint8_t __temp1;  // 8 bits
  uint8_t kom_kop;  // 8 bits
  uint8_t fap;      // 8 bits
  uint8_t fap_freq; // 8 bits

} __attribute__((packed)) change_fap_freq_kvit;

int Marshal_change_fap_freq_kvit(change_fap_freq_kvit *c, void *buff,
                                 size_t size);
int Unmarshal_change_fap_freq_kvit(change_fap_freq_kvit *c, const void *buff,
                                   size_t size);
int Is_change_fap_freq_kvit(void *buff, size_t size);

#define command_to_server_fv_to_change_data_mls__BUFSIZE 30
#define command_to_server_fv_to_change_data_mls__TS 255
#define command_to_server_fv_to_change_data_mls__ok 0
#define command_to_server_fv_to_change_data_mls__kk1 1
#define command_to_server_fv_to_change_data_mls__kk2 2
#define command_to_server_fv_to_change_data_mls__kk3 3
#define command_to_server_fv_to_change_data_mls__kk4 4
#define command_to_server_fv_to_change_data_mls__kk5 5
#define command_to_server_fv_to_change_data_mls__kk6 6
#define command_to_server_fv_to_change_data_mls__kk7 7
#define command_to_server_fv_to_change_data_mls__kk8 8
#define command_to_server_fv_to_change_data_mls__PM 0
#define command_to_server_fv_to_change_data_mls__PDM 1
#define command_to_server_fv_to_change_data_mls__PKM 2

typedef struct command_to_server_fv_to_change_data_mls {

  uint8_t ist;                 // 8 bits
  uint8_t ts;                  // 8 bits
  uint8_t sel_control_com_6_0; // 7 bits
  uint8_t sel_enter_AK_6_0;    // 7 bits
  uint8_t N_k_t;               // 4 bits
  uint8_t N_strobe_contr;      // 4 bits
  uint8_t regime;              // 5 bits
  uint8_t R_P;                 // 3 bits
  uint8_t N_fr_kuk;            // 4 bits
  uint8_t N_row_kuk;           // 3 bits
  uint8_t N_col_kuk;           // 6 bits
  uint8_t key_caru_sel;        // 1 bits
  uint8_t key_fap_sel;         // 1 bits
  uint8_t key_dist_sel;        // 1 bits
  uint8_t key_caru_unsel;      // 1 bits
  uint8_t key_fap_unsel;       // 1 bits
  uint8_t key_dist_unsel;      // 1 bits
  uint8_t mshu_ok_caru_sel;    // 1 bits
  uint8_t mshu_ok_fap_sel;     // 1 bits
  uint8_t mshu_ok_dist_sel;    // 1 bits
  uint8_t mshu_ok_et_sel;      // 1 bits
  uint8_t mshu_ok_caru_unsel;  // 1 bits
  uint8_t mshu_ok_fap_unsel;   // 1 bits
  uint8_t mshu_ok_dist_unsel;  // 1 bits
  uint8_t mshu_ok_et_unsel;    // 1 bits
  uint8_t mod_et_sel;          // 1 bits
  uint8_t mod_et_unsel;        // 1 bits
  uint8_t mshu_kk_col0;        // 1 bits
  uint8_t mshu_kk_col1;        // 1 bits
  uint8_t mshu_kk_col2;        // 1 bits
  uint8_t mshu_kk_col3;        // 1 bits
  uint8_t mshu_kk_col4;        // 1 bits
  uint8_t mshu_kk_col5;        // 1 bits
  uint8_t mshu_kk_col6;        // 1 bits
  uint8_t mshu_kk_col7;        // 1 bits
  uint8_t N_col_fap;           // 6 bits
  uint8_t N_row_fap;           // 3 bits
  uint8_t N_work_put_fap;      // 7 bits
  uint8_t delta_fap_ok;        // 6 bits
  uint8_t delta_fap_pr_l;      // 6 bits
  uint8_t K_att_ok;            // 3 bits
  uint8_t N_fr;                // 4 bits
  uint16_t delta_fx;           // 12 bits
  uint16_t delta_fy;           // 12 bits
  uint16_t delta_fx_pr_l;      // 9 bits
  uint8_t N_work_put;          // 7 bits
  uint8_t N_strobe;            // 3 bits
  uint8_t ok_kk_1_8;           // 4 bits
  uint8_t pm_pdm_pkm;          // 2 bits

} command_to_server_fv_to_change_data_mls;

int Marshal_command_to_server_fv_to_change_data_mls(
    command_to_server_fv_to_change_data_mls *c, void *buff, size_t size);
int Unmarshal_command_to_server_fv_to_change_data_mls(
    command_to_server_fv_to_change_data_mls *c, const void *buff, size_t size);
int Is_command_to_server_fv_to_change_data_mls(void *buff, size_t size);

#define response_words_mls__BUFSIZE 8
#define response_words_mls__TS 254

typedef struct response_words_mls {

  uint8_t ist;     // 8 bits
  uint8_t ts;      // 8 bits
  uint8_t addr;    // 5 bits
  uint16_t word_1; // 16 bits
  uint16_t word_2; // 16 bits

} response_words_mls;

int Marshal_response_words_mls(response_words_mls *c, void *buff, size_t size);
int Unmarshal_response_words_mls(response_words_mls *c, const void *buff,
                                 size_t size);
int Is_response_words_mls(void *buff, size_t size);

#define regime_key_fap_request__BUFSIZE 8
#define regime_key_fap_request__TS 19
#define regime_key_fap_request__KOP 1
#define regime_key_fap_request__pr 0
#define regime_key_fap_request__pd 1
#define regime_key_fap_request__kk 2
#define regime_key_fap_request__code_phase 0
#define regime_key_fap_request__katt 1
#define regime_key_fap_request__code_phase_pr_l 2

typedef struct regime_key_fap_request {

  uint8_t ist;          // 8 bits
  uint8_t ts;           // 8 bits
  uint8_t N_work_put;   // 8 bits
  uint8_t kop;          // 8 bits
  uint8_t num_data;     // 8 bits
  uint8_t num_fragment; // 8 bits
  uint8_t N_k_t;        // 8 bits
  uint8_t __temp1;      // 8 bits

} __attribute__((packed)) regime_key_fap_request;

int Marshal_regime_key_fap_request(regime_key_fap_request *c, void *buff,
                                   size_t size);
int Unmarshal_regime_key_fap_request(regime_key_fap_request *c,
                                     const void *buff, size_t size);
int Is_regime_key_fap_request(void *buff, size_t size);

#define regime_key_fap_antPR_kvit__BUFSIZE 68
#define regime_key_fap_antPR_kvit__TS 253
#define regime_key_fap_antPR_kvit__codes_in_cols_OFFSET 4
#define regime_key_fap_antPR_kvit__codes_in_cols_SIZE 64

typedef struct regime_key_fap_antPR_kvit {

  uint8_t ist;             // 8 bits
  uint8_t ts;              // 8 bits
  uint8_t number_fragment; // 8 bits
  uint8_t number_row;      // 8 bits
  uint8_t codes_in_cols[64];

} __attribute__((packed)) regime_key_fap_antPR_kvit;

int Marshal_regime_key_fap_antPR_kvit(regime_key_fap_antPR_kvit *c, void *buff,
                                      size_t size);
int Unmarshal_regime_key_fap_antPR_kvit(regime_key_fap_antPR_kvit *c,
                                        const void *buff, size_t size);
int Is_regime_key_fap_antPR_kvit(void *buff, size_t size);

#define regime_key_fap_antPD_kvit__BUFSIZE 58
#define regime_key_fap_antPD_kvit__TS 252
#define regime_key_fap_antPD_kvit__codes_in_cols_OFFSET 4
#define regime_key_fap_antPD_kvit__codes_in_cols_SIZE 54

typedef struct regime_key_fap_antPD_kvit {

  uint8_t ist;             // 8 bits
  uint8_t ts;              // 8 bits
  uint8_t number_fragment; // 8 bits
  uint8_t number_row;      // 8 bits
  uint8_t codes_in_cols[54];

} __attribute__((packed)) regime_key_fap_antPD_kvit;

int Marshal_regime_key_fap_antPD_kvit(regime_key_fap_antPD_kvit *c, void *buff,
                                      size_t size);
int Unmarshal_regime_key_fap_antPD_kvit(regime_key_fap_antPD_kvit *c,
                                        const void *buff, size_t size);
int Is_regime_key_fap_antPD_kvit(void *buff, size_t size);

#define codes_phases_antPR__BUFSIZE 69
#define codes_phases_antPR__TS 251
#define codes_phases_antPR__codes_in_cols_OFFSET 5
#define codes_phases_antPR__codes_in_cols_SIZE 64

typedef struct codes_phases_antPR {

  uint8_t ist;             // 8 bits
  uint8_t ts;              // 8 bits
  uint8_t number_fragment; // 8 bits
  uint8_t work_put;        // 8 bits
  uint8_t number_row;      // 8 bits
  uint8_t codes_in_cols[64];

} __attribute__((packed)) codes_phases_antPR;

int Marshal_codes_phases_antPR(codes_phases_antPR *c, void *buff, size_t size);
int Unmarshal_codes_phases_antPR(codes_phases_antPR *c, const void *buff,
                                 size_t size);
int Is_codes_phases_antPR(void *buff, size_t size);

#define codes_phases_antPD__BUFSIZE 68
#define codes_phases_antPD__TS 250
#define codes_phases_antPD__codes_in_cols_OFFSET 4
#define codes_phases_antPD__codes_in_cols_SIZE 64

typedef struct codes_phases_antPD {

  uint8_t ist;             // 8 bits
  uint8_t ts;              // 8 bits
  uint8_t number_fragment; // 8 bits
  uint8_t number_row;      // 8 bits
  uint8_t codes_in_cols[64];

} __attribute__((packed)) codes_phases_antPD;

int Marshal_codes_phases_antPD(codes_phases_antPD *c, void *buff, size_t size);
int Unmarshal_codes_phases_antPD(codes_phases_antPD *c, const void *buff,
                                 size_t size);
int Is_codes_phases_antPD(void *buff, size_t size);

#define send_regimes_and_strobes_data__BUFSIZE 32
#define send_regimes_and_strobes_data__TS 249
#define send_regimes_and_strobes_data__strobe_length_in_cols_OFFSET 4
#define send_regimes_and_strobes_data__strobe_length_in_cols_SIZE 28

typedef struct send_regimes_and_strobes_data {

  uint8_t ist;    // 8 bits
  uint8_t ts;     // 8 bits
  uint8_t regime; // 5 bits
  uint8_t strobe; // 4 bits
  uint16_t strobe_length_in_cols[14];

} send_regimes_and_strobes_data;

int Marshal_send_regimes_and_strobes_data(send_regimes_and_strobes_data *c,
                                          void *buff, size_t size);
int Unmarshal_send_regimes_and_strobes_data(send_regimes_and_strobes_data *c,
                                            const void *buff, size_t size);
int Is_send_regimes_and_strobes_data(void *buff, size_t size);

#define read_regimes_and_strobes_data__BUFSIZE 32
#define read_regimes_and_strobes_data__TS 248
#define read_regimes_and_strobes_data__strobe_length_in_cols_OFFSET 4
#define read_regimes_and_strobes_data__strobe_length_in_cols_SIZE 28

typedef struct read_regimes_and_strobes_data {

  uint8_t ist;    // 8 bits
  uint8_t ts;     // 8 bits
  uint8_t regime; // 5 bits
  uint8_t strobe; // 4 bits
  uint16_t strobe_length_in_cols[14];

} read_regimes_and_strobes_data;

int Marshal_read_regimes_and_strobes_data(read_regimes_and_strobes_data *c,
                                          void *buff, size_t size);
int Unmarshal_read_regimes_and_strobes_data(read_regimes_and_strobes_data *c,
                                            const void *buff, size_t size);
int Is_read_regimes_and_strobes_data(void *buff, size_t size);

#define regimes_and_strobes_data_request__BUFSIZE 4
#define regimes_and_strobes_data_request__TS 247
#define regimes_and_strobes_data_request__REQUEST 1

typedef struct regimes_and_strobes_data_request {

  uint8_t ist;      // 8 bits
  uint8_t ts;       // 8 bits
  uint16_t request; // 16 bits

} __attribute__((packed)) regimes_and_strobes_data_request;

int Marshal_regimes_and_strobes_data_request(
    regimes_and_strobes_data_request *c, void *buff, size_t size);
int Unmarshal_regimes_and_strobes_data_request(
    regimes_and_strobes_data_request *c, const void *buff, size_t size);
int Is_regimes_and_strobes_data_request(void *buff, size_t size);

#define fire_regimes_and_strobes_data__BUFSIZE 4
#define fire_regimes_and_strobes_data__TS 246
#define fire_regimes_and_strobes_data__FIRE 1

typedef struct fire_regimes_and_strobes_data {

  uint8_t ist;   // 8 bits
  uint8_t ts;    // 8 bits
  uint16_t fire; // 16 bits

} __attribute__((packed)) fire_regimes_and_strobes_data;

int Marshal_fire_regimes_and_strobes_data(fire_regimes_and_strobes_data *c,
                                          void *buff, size_t size);
int Unmarshal_fire_regimes_and_strobes_data(fire_regimes_and_strobes_data *c,
                                            const void *buff, size_t size);
int Is_fire_regimes_and_strobes_data(void *buff, size_t size);

#define session_regimes_and_strobes__BUFSIZE 4
#define session_regimes_and_strobes__TS 245
#define session_regimes_and_strobes__end 0
#define session_regimes_and_strobes__begin 1

typedef struct session_regimes_and_strobes {

  uint8_t ist;    // 8 bits
  uint8_t ts;     // 8 bits
  uint16_t state; // 16 bits

} __attribute__((packed)) session_regimes_and_strobes;

int Marshal_session_regimes_and_strobes(session_regimes_and_strobes *c,
                                        void *buff, size_t size);
int Unmarshal_session_regimes_and_strobes(session_regimes_and_strobes *c,
                                          const void *buff, size_t size);
int Is_session_regimes_and_strobes(void *buff, size_t size);

#define progress_indicator_process_regimes_and_strobes__BUFSIZE 4
#define progress_indicator_process_regimes_and_strobes__TS 244
#define progress_indicator_process_regimes_and_strobes__write 0
#define progress_indicator_process_regimes_and_strobes__read 1
#define progress_indicator_process_regimes_and_strobes__fire 2
#define progress_indicator_process_regimes_and_strobes__none 3

typedef struct progress_indicator_process_regimes_and_strobes {

  uint8_t ist;      // 8 bits
  uint8_t ts;       // 8 bits
  uint8_t progress; // 8 bits
  uint8_t process;  // 8 bits

} __attribute__((packed)) progress_indicator_process_regimes_and_strobes;

int Marshal_progress_indicator_process_regimes_and_strobes(
    progress_indicator_process_regimes_and_strobes *c, void *buff, size_t size);
int Unmarshal_progress_indicator_process_regimes_and_strobes(
    progress_indicator_process_regimes_and_strobes *c, const void *buff,
    size_t size);
int Is_progress_indicator_process_regimes_and_strobes(void *buff, size_t size);

#define command_static_or_dynamic_work_mls__BUFSIZE 4
#define command_static_or_dynamic_work_mls__TS 244
#define command_static_or_dynamic_work_mls__static 0
#define command_static_or_dynamic_work_mls__dynamic 1

typedef struct command_static_or_dynamic_work_mls {

  uint8_t ist;   // 8 bits
  uint8_t ts;    // 8 bits
  uint16_t mode; // 16 bits

} __attribute__((packed)) command_static_or_dynamic_work_mls;

int Marshal_command_static_or_dynamic_work_mls(
    command_static_or_dynamic_work_mls *c, void *buff, size_t size);
int Unmarshal_command_static_or_dynamic_work_mls(
    command_static_or_dynamic_work_mls *c, const void *buff, size_t size);
int Is_command_static_or_dynamic_work_mls(void *buff, size_t size);

#define static_or_dynamic_work_mls_kvit__BUFSIZE 4
#define static_or_dynamic_work_mls_kvit__TS 243

typedef struct static_or_dynamic_work_mls_kvit {

  uint8_t ist;   // 8 bits
  uint8_t ts;    // 8 bits
  uint16_t mode; // 16 bits

} __attribute__((packed)) static_or_dynamic_work_mls_kvit;

int Marshal_static_or_dynamic_work_mls_kvit(static_or_dynamic_work_mls_kvit *c,
                                            void *buff, size_t size);
int Unmarshal_static_or_dynamic_work_mls_kvit(
    static_or_dynamic_work_mls_kvit *c, const void *buff, size_t size);
int Is_static_or_dynamic_work_mls_kvit(void *buff, size_t size);

#define static_or_dynamic_work_mls_request__BUFSIZE 2
#define static_or_dynamic_work_mls_request__TS 242

typedef struct static_or_dynamic_work_mls_request {

  uint8_t ist; // 8 bits
  uint8_t ts;  // 8 bits

} __attribute__((packed)) static_or_dynamic_work_mls_request;

int Marshal_static_or_dynamic_work_mls_request(
    static_or_dynamic_work_mls_request *c, void *buff, size_t size);
int Unmarshal_static_or_dynamic_work_mls_request(
    static_or_dynamic_work_mls_request *c, const void *buff, size_t size);
int Is_static_or_dynamic_work_mls_request(void *buff, size_t size);

#define turn_ant_on_reception__BUFSIZE 4
#define turn_ant_on_reception__TS 15
#define turn_ant_on_reception__off 0
#define turn_ant_on_reception__on 1
#define turn_ant_on_reception__KOP 1

typedef struct turn_ant_on_reception {

  uint8_t ist;       // 8 bits
  uint8_t ts;        // 8 bits
  uint8_t condition; // 8 bits
  uint8_t kop;       // 8 bits

} __attribute__((packed)) turn_ant_on_reception;

int Marshal_turn_ant_on_reception(turn_ant_on_reception *c, void *buff,
                                  size_t size);
int Unmarshal_turn_ant_on_reception(turn_ant_on_reception *c, const void *buff,
                                    size_t size);
int Is_turn_ant_on_reception(void *buff, size_t size);

#define control_modes_kvit__BUFSIZE 14
#define control_modes_kvit__TS 15
#define control_modes_kvit__mode_turned_on_successfully 0
#define control_modes_kvit__No_mls 1
#define control_modes_kvit__error_executing_command 2
#define control_modes_kvit__incorrect_code 3
#define control_modes_kvit__disconnect_ant 1
#define control_modes_kvit__turn_on_modes_FAP 3
#define control_modes_kvit__set_el_ray_on_azimuth 4
#define control_modes_kvit__set_el_ray_on_elev_angle 5
#define control_modes_kvit__turn_on_regular_mode_control 6
#define control_modes_kvit__turn_on_technological_mode 7
#define control_modes_kvit__off 0
#define control_modes_kvit__on 1
#define control_modes_kvit__off 0
#define control_modes_kvit__on 1
#define control_modes_kvit__off 0
#define control_modes_kvit__on 1
#define control_modes_kvit__off 0
#define control_modes_kvit__on 1
#define control_modes_kvit__regular 0
#define control_modes_kvit__manual 1
#define control_modes_kvit__regular 0
#define control_modes_kvit__manual 1

typedef struct control_modes_kvit {

  uint8_t ist;                      // 8 bits
  uint8_t ts;                       // 8 bits
  uint8_t error_code;               // 4 bits
  uint8_t kom_kop;                  // 8 bits
  uint8_t number_submode;           // 4 bits
  uint8_t number_mode;              // 4 bits
  uint8_t static_mode;              // 1 bits
  uint8_t synphase_front;           // 1 bits
  uint8_t regular_mode;             // 1 bits
  uint8_t turn_on_ant_on_rec;       // 1 bits
  uint8_t number_fragment;          // 4 bits
  uint8_t number_channel_in_module; // 4 bits
  uint8_t number_module;            // 8 bits
  union {
    uint16_t electronic_azimuth;
    float _electronic_azimuth;
  }; // 16 bits
  union {
    uint16_t electronic_elevation_angle;
    float _electronic_elevation_angle;
  };                           // 16 bits
  uint8_t set_elevation_angle; // 1 bits
  uint8_t set_azimuth;         // 1 bits

} control_modes_kvit;

int Marshal_control_modes_kvit(control_modes_kvit *c, void *buff, size_t size);
int Unmarshal_control_modes_kvit(control_modes_kvit *c, const void *buff,
                                 size_t size);
int Is_control_modes_kvit(void *buff, size_t size);

#ifdef __cplusplus
}
#endif

#endif // external_rlmc_fv_proto_GEN_H
