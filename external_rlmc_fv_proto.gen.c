/*
 * C implementation for rlmc/generated/external_rlmc_fv_proto.json codogram module.
 * Version: v0.9.0-3-g38b0680
 *
 * Auto-generated file! DO NOT MODIFY!
 */

#include <string.h>
#ifndef WIN32
  #include <arpa/inet.h>
#elif WIN32
  #include <ws2spi.h>
#endif


#include "external_rlmc_fv_proto.gen.h"

#define MASK(start, end) ( \
  (((1 << (start - end + 1)) - 1) << end) \
)


int Marshal_fap_freq_request(fap_freq_request *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 4 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 66;
  c->kop = 255;
  memcpy((uint8_t*)ch, c, 4);

  return 0;
}

int Unmarshal_fap_freq_request(fap_freq_request *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 4 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  memcpy(c, ch, 4);

  return 0;
}


int Is_fap_freq_request(void *buff, size_t size) {
  uint8_t ts = 0;
  uint8_t kop = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 4 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);
  kop |= (ch[3]>>0)&MASK(7, 0);

  if (ts == 66 && kop == 255) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_change_fap_freq(change_fap_freq *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 6 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 66;
  c->kop = 1;
  memcpy((uint8_t*)ch, c, 6);

  return 0;
}

int Unmarshal_change_fap_freq(change_fap_freq *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 6 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  memcpy(c, ch, 6);

  return 0;
}


int Is_change_fap_freq(void *buff, size_t size) {
  uint8_t ts = 0;
  uint8_t kop = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 6 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);
  kop |= (ch[3]>>0)&MASK(7, 0);

  if (ts == 66 && kop == 1) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_change_fap_freq_kvit(change_fap_freq_kvit *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 6 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 66;
  c->kom_kop = 1;
  memcpy((uint8_t*)ch, c, 6);

  return 0;
}

int Unmarshal_change_fap_freq_kvit(change_fap_freq_kvit *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 6 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  memcpy(c, ch, 6);

  return 0;
}


int Is_change_fap_freq_kvit(void *buff, size_t size) {
  uint8_t ts = 0;
  uint8_t kom_kop = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 6 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);
  kom_kop |= (ch[3]>>0)&MASK(7, 0);

  if (ts == 66 && kom_kop == 1) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_command_to_server_fv_to_change_data_mls(command_to_server_fv_to_change_data_mls *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 30 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 255;
  ch[0] |= (c->ist<<0)&MASK(7, 0);
  ch[1] |= (c->ts<<0)&MASK(7, 0);
  ch[2] |= (c->sel_control_com_6_0<<0)&MASK(6, 0);
  ch[3] |= (c->sel_enter_AK_6_0<<0)&MASK(6, 0);
  ch[4] |= (c->N_k_t<<4)&MASK(7, 4);
  ch[4] |= (c->N_strobe_contr<<0)&MASK(3, 0);
  ch[5] |= (c->regime<<3)&MASK(7, 3);
  ch[5] |= (c->R_P<<0)&MASK(2, 0);
  ch[6] |= (c->N_fr_kuk<<4)&MASK(7, 4);
  ch[6] |= (c->N_row_kuk<<1)&MASK(3, 1);
  ch[6] |= (c->N_col_kuk>>5)&MASK(0, 0);
  ch[7] |= (c->N_col_kuk<<3)&MASK(7, 3);
  ch[8] |= (c->key_caru_sel<<7)&MASK(7, 7);
  ch[8] |= (c->key_fap_sel<<6)&MASK(6, 6);
  ch[8] |= (c->key_dist_sel<<5)&MASK(5, 5);
  ch[9] |= (c->key_caru_unsel<<7)&MASK(7, 7);
  ch[9] |= (c->key_fap_unsel<<6)&MASK(6, 6);
  ch[9] |= (c->key_dist_unsel<<5)&MASK(5, 5);
  ch[10] |= (c->mshu_ok_caru_sel<<7)&MASK(7, 7);
  ch[10] |= (c->mshu_ok_fap_sel<<6)&MASK(6, 6);
  ch[10] |= (c->mshu_ok_dist_sel<<5)&MASK(5, 5);
  ch[10] |= (c->mshu_ok_et_sel<<4)&MASK(4, 4);
  ch[11] |= (c->mshu_ok_caru_unsel<<7)&MASK(7, 7);
  ch[11] |= (c->mshu_ok_fap_unsel<<6)&MASK(6, 6);
  ch[11] |= (c->mshu_ok_dist_unsel<<5)&MASK(5, 5);
  ch[11] |= (c->mshu_ok_et_unsel<<4)&MASK(4, 4);
  ch[12] |= (c->mod_et_sel<<7)&MASK(7, 7);
  ch[12] |= (c->mod_et_unsel<<6)&MASK(6, 6);
  ch[14] |= (c->mshu_kk_col0<<7)&MASK(7, 7);
  ch[14] |= (c->mshu_kk_col1<<6)&MASK(6, 6);
  ch[14] |= (c->mshu_kk_col2<<5)&MASK(5, 5);
  ch[14] |= (c->mshu_kk_col3<<4)&MASK(4, 4);
  ch[15] |= (c->mshu_kk_col4<<7)&MASK(7, 7);
  ch[15] |= (c->mshu_kk_col5<<6)&MASK(6, 6);
  ch[15] |= (c->mshu_kk_col6<<5)&MASK(5, 5);
  ch[15] |= (c->mshu_kk_col7<<4)&MASK(4, 4);
  ch[16] |= (c->N_col_fap<<2)&MASK(7, 2);
  ch[16] |= (c->N_row_fap>>1)&MASK(1, 0);
  ch[17] |= (c->N_row_fap<<7)&MASK(7, 7);
  ch[17] |= (c->N_work_put_fap<<0)&MASK(6, 0);
  ch[18] |= (c->delta_fap_ok<<2)&MASK(7, 2);
  ch[18] |= (c->delta_fap_pr_l>>4)&MASK(1, 0);
  ch[19] |= (c->delta_fap_pr_l<<4)&MASK(7, 4);
  ch[19] |= (c->K_att_ok<<1)&MASK(3, 1);
  ch[20] |= (c->N_fr<<4)&MASK(7, 4);
  ch[22] |= (c->delta_fx>>4)&MASK(7, 0);
  ch[23] |= (c->delta_fx<<4)&MASK(7, 4);
  ch[24] |= (c->delta_fy>>4)&MASK(7, 0);
  ch[25] |= (c->delta_fy<<4)&MASK(7, 4);
  ch[26] |= (c->delta_fx_pr_l>>1)&MASK(7, 0);
  ch[27] |= (c->delta_fx_pr_l<<7)&MASK(7, 7);
  ch[27] |= (c->N_work_put<<0)&MASK(6, 0);
  ch[28] |= (c->N_strobe<<5)&MASK(7, 5);
  ch[28] |= (c->ok_kk_1_8<<1)&MASK(4, 1);
  ch[28] |= (c->pm_pdm_pkm>>1)&MASK(0, 0);
  ch[29] |= (c->pm_pdm_pkm<<7)&MASK(7, 7);


  return 0;
}

int Unmarshal_command_to_server_fv_to_change_data_mls(command_to_server_fv_to_change_data_mls *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 30 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  c->ist |= (ch[0]>>0)&MASK(7, 0);
  c->ts |= (ch[1]>>0)&MASK(7, 0);
  c->sel_control_com_6_0 |= (ch[2]>>0)&MASK(6, 0);
  c->sel_enter_AK_6_0 |= (ch[3]>>0)&MASK(6, 0);
  c->N_k_t |= (ch[4]>>4)&MASK(3, 0);
  c->N_strobe_contr |= (ch[4]>>0)&MASK(3, 0);
  c->regime |= (ch[5]>>3)&MASK(4, 0);
  c->R_P |= (ch[5]>>0)&MASK(2, 0);
  c->N_fr_kuk |= (ch[6]>>4)&MASK(3, 0);
  c->N_row_kuk |= (ch[6]>>1)&MASK(2, 0);
  c->N_col_kuk |= (ch[6]<<5)&MASK(5, 5);
  c->N_col_kuk |= (ch[7]>>3)&MASK(4, 0);
  c->key_caru_sel |= (ch[8]>>7)&MASK(0, 0);
  c->key_fap_sel |= (ch[8]>>6)&MASK(0, 0);
  c->key_dist_sel |= (ch[8]>>5)&MASK(0, 0);
  c->key_caru_unsel |= (ch[9]>>7)&MASK(0, 0);
  c->key_fap_unsel |= (ch[9]>>6)&MASK(0, 0);
  c->key_dist_unsel |= (ch[9]>>5)&MASK(0, 0);
  c->mshu_ok_caru_sel |= (ch[10]>>7)&MASK(0, 0);
  c->mshu_ok_fap_sel |= (ch[10]>>6)&MASK(0, 0);
  c->mshu_ok_dist_sel |= (ch[10]>>5)&MASK(0, 0);
  c->mshu_ok_et_sel |= (ch[10]>>4)&MASK(0, 0);
  c->mshu_ok_caru_unsel |= (ch[11]>>7)&MASK(0, 0);
  c->mshu_ok_fap_unsel |= (ch[11]>>6)&MASK(0, 0);
  c->mshu_ok_dist_unsel |= (ch[11]>>5)&MASK(0, 0);
  c->mshu_ok_et_unsel |= (ch[11]>>4)&MASK(0, 0);
  c->mod_et_sel |= (ch[12]>>7)&MASK(0, 0);
  c->mod_et_unsel |= (ch[12]>>6)&MASK(0, 0);
  c->mshu_kk_col0 |= (ch[14]>>7)&MASK(0, 0);
  c->mshu_kk_col1 |= (ch[14]>>6)&MASK(0, 0);
  c->mshu_kk_col2 |= (ch[14]>>5)&MASK(0, 0);
  c->mshu_kk_col3 |= (ch[14]>>4)&MASK(0, 0);
  c->mshu_kk_col4 |= (ch[15]>>7)&MASK(0, 0);
  c->mshu_kk_col5 |= (ch[15]>>6)&MASK(0, 0);
  c->mshu_kk_col6 |= (ch[15]>>5)&MASK(0, 0);
  c->mshu_kk_col7 |= (ch[15]>>4)&MASK(0, 0);
  c->N_col_fap |= (ch[16]>>2)&MASK(5, 0);
  c->N_row_fap |= (ch[16]<<1)&MASK(2, 1);
  c->N_row_fap |= (ch[17]>>7)&MASK(0, 0);
  c->N_work_put_fap |= (ch[17]>>0)&MASK(6, 0);
  c->delta_fap_ok |= (ch[18]>>2)&MASK(5, 0);
  c->delta_fap_pr_l |= (ch[18]<<4)&MASK(5, 4);
  c->delta_fap_pr_l |= (ch[19]>>4)&MASK(3, 0);
  c->K_att_ok |= (ch[19]>>1)&MASK(2, 0);
  c->N_fr |= (ch[20]>>4)&MASK(3, 0);
  c->delta_fx |= (ch[22]<<4)&MASK(11, 4);
  c->delta_fx |= (ch[23]>>4)&MASK(3, 0);
  c->delta_fy |= (ch[24]<<4)&MASK(11, 4);
  c->delta_fy |= (ch[25]>>4)&MASK(3, 0);
  c->delta_fx_pr_l |= (ch[26]<<1)&MASK(8, 1);
  c->delta_fx_pr_l |= (ch[27]>>7)&MASK(0, 0);
  c->N_work_put |= (ch[27]>>0)&MASK(6, 0);
  c->N_strobe |= (ch[28]>>5)&MASK(2, 0);
  c->ok_kk_1_8 |= (ch[28]>>1)&MASK(3, 0);
  c->pm_pdm_pkm |= (ch[28]<<1)&MASK(1, 1);
  c->pm_pdm_pkm |= (ch[29]>>7)&MASK(0, 0);


  return 0;
}


int Is_command_to_server_fv_to_change_data_mls(void *buff, size_t size) {
  uint8_t ts = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 30 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);

  if (ts == 255) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_response_words_mls(response_words_mls *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 8 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 254;
  ch[0] |= (c->ist<<0)&MASK(7, 0);
  ch[1] |= (c->ts<<0)&MASK(7, 0);
  ch[2] |= (c->addr<<3)&MASK(7, 3);
  ch[4] |= (c->word_1>>8)&MASK(7, 0);
  ch[5] |= (c->word_1<<0)&MASK(7, 0);
  ch[6] |= (c->word_2>>8)&MASK(7, 0);
  ch[7] |= (c->word_2<<0)&MASK(7, 0);


  return 0;
}

int Unmarshal_response_words_mls(response_words_mls *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 8 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  c->ist |= (ch[0]>>0)&MASK(7, 0);
  c->ts |= (ch[1]>>0)&MASK(7, 0);
  c->addr |= (ch[2]>>3)&MASK(4, 0);
  c->word_1 |= (ch[4]<<8)&MASK(15, 8);
  c->word_1 |= (ch[5]>>0)&MASK(7, 0);
  c->word_2 |= (ch[6]<<8)&MASK(15, 8);
  c->word_2 |= (ch[7]>>0)&MASK(7, 0);


  return 0;
}


int Is_response_words_mls(void *buff, size_t size) {
  uint8_t ts = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 8 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);

  if (ts == 254) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_regime_key_fap_request(regime_key_fap_request *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 8 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 19;
  c->kop = 1;
  memcpy((uint8_t*)ch, c, 8);

  return 0;
}

int Unmarshal_regime_key_fap_request(regime_key_fap_request *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 8 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  memcpy(c, ch, 8);

  return 0;
}


int Is_regime_key_fap_request(void *buff, size_t size) {
  uint8_t ts = 0;
  uint8_t kop = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 8 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);
  kop |= (ch[3]>>0)&MASK(7, 0);

  if (ts == 19 && kop == 1) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_regime_key_fap_antPR_kvit(regime_key_fap_antPR_kvit *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 68 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 253;
  memcpy((uint8_t*)ch, c, 68);

  return 0;
}

int Unmarshal_regime_key_fap_antPR_kvit(regime_key_fap_antPR_kvit *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 68 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  memcpy(c, ch, 68);

  return 0;
}


int Is_regime_key_fap_antPR_kvit(void *buff, size_t size) {
  uint8_t ts = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 68 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);

  if (ts == 253) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_regime_key_fap_antPD_kvit(regime_key_fap_antPD_kvit *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 58 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 252;
  memcpy((uint8_t*)ch, c, 58);

  return 0;
}

int Unmarshal_regime_key_fap_antPD_kvit(regime_key_fap_antPD_kvit *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 58 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  memcpy(c, ch, 58);

  return 0;
}


int Is_regime_key_fap_antPD_kvit(void *buff, size_t size) {
  uint8_t ts = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 58 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);

  if (ts == 252) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_codes_phases_antPR(codes_phases_antPR *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 69 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 251;
  memcpy((uint8_t*)ch, c, 69);

  return 0;
}

int Unmarshal_codes_phases_antPR(codes_phases_antPR *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 69 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  memcpy(c, ch, 69);

  return 0;
}


int Is_codes_phases_antPR(void *buff, size_t size) {
  uint8_t ts = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 69 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);

  if (ts == 251) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_codes_phases_antPD(codes_phases_antPD *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 68 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 250;
  memcpy((uint8_t*)ch, c, 68);

  return 0;
}

int Unmarshal_codes_phases_antPD(codes_phases_antPD *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 68 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  memcpy(c, ch, 68);

  return 0;
}


int Is_codes_phases_antPD(void *buff, size_t size) {
  uint8_t ts = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 68 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);

  if (ts == 250) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_send_regimes_strobe_data(send_regimes_strobe_data *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 32 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 249;
  ch[0] |= (c->ist<<0)&MASK(7, 0);
  ch[1] |= (c->ts<<0)&MASK(7, 0);
  ch[2] |= (c->regime<<3)&MASK(7, 3);
  ch[3] |= (c->strobe<<4)&MASK(7, 4);

  int i;
  for (i = 0; i < 14; ++i) {
    c->strobe_length_in_cols[i] = htons(c->strobe_length_in_cols[i]);
  }
  memcpy(&((uint8_t*)buff)[4], c->strobe_length_in_cols, 28);

  return 0;
}

int Unmarshal_send_regimes_strobe_data(send_regimes_strobe_data *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 32 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  c->ist |= (ch[0]>>0)&MASK(7, 0);
  c->ts |= (ch[1]>>0)&MASK(7, 0);
  c->regime |= (ch[2]>>3)&MASK(4, 0);
  c->strobe |= (ch[3]>>4)&MASK(3, 0);

  memcpy(c->strobe_length_in_cols, &((uint8_t*)buff)[4], 28);
  int i;
  for (i = 0; i < 14; ++i) {
    c->strobe_length_in_cols[i] = ntohs(c->strobe_length_in_cols[i]);
  }

  return 0;
}


int Is_send_regimes_strobe_data(void *buff, size_t size) {
  uint8_t ts = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 32 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);

  if (ts == 249) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_read_regimes_strobe_data(read_regimes_strobe_data *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 32 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 248;
  ch[0] |= (c->ist<<0)&MASK(7, 0);
  ch[1] |= (c->ts<<0)&MASK(7, 0);
  ch[2] |= (c->regime<<3)&MASK(7, 3);
  ch[3] |= (c->strobe<<4)&MASK(7, 4);

  int i;
  for (i = 0; i < 14; ++i) {
    c->strobe_length_in_cols[i] = htons(c->strobe_length_in_cols[i]);
  }
  memcpy(&((uint8_t*)buff)[4], c->strobe_length_in_cols, 28);

  return 0;
}

int Unmarshal_read_regimes_strobe_data(read_regimes_strobe_data *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 32 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  c->ist |= (ch[0]>>0)&MASK(7, 0);
  c->ts |= (ch[1]>>0)&MASK(7, 0);
  c->regime |= (ch[2]>>3)&MASK(4, 0);
  c->strobe |= (ch[3]>>4)&MASK(3, 0);

  memcpy(c->strobe_length_in_cols, &((uint8_t*)buff)[4], 28);
  int i;
  for (i = 0; i < 14; ++i) {
    c->strobe_length_in_cols[i] = ntohs(c->strobe_length_in_cols[i]);
  }

  return 0;
}


int Is_read_regimes_strobe_data(void *buff, size_t size) {
  uint8_t ts = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 32 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);

  if (ts == 248) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_regimes_strobe_request(regimes_strobe_request *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 4 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 247;
  c->request = 1;
  c->request = htons(c->request);
  memcpy((uint8_t*)ch, c, 4);

  return 0;
}

int Unmarshal_regimes_strobe_request(regimes_strobe_request *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 4 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  memcpy(c, ch, 4);
  c->request = ntohs(c->request);

  return 0;
}


int Is_regimes_strobe_request(void *buff, size_t size) {
  uint8_t ts = 0;
  uint16_t request = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 4 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);
  request |= (ch[2]<<8)&MASK(15, 8);
  request |= (ch[3]>>0)&MASK(7, 0);

  if (ts == 247 && request == 1) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_fire_regimes_strobe(fire_regimes_strobe *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 4 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 246;
  c->fire = 1;
  c->fire = htons(c->fire);
  memcpy((uint8_t*)ch, c, 4);

  return 0;
}

int Unmarshal_fire_regimes_strobe(fire_regimes_strobe *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 4 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  memcpy(c, ch, 4);
  c->fire = ntohs(c->fire);

  return 0;
}


int Is_fire_regimes_strobe(void *buff, size_t size) {
  uint8_t ts = 0;
  uint16_t fire = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 4 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);
  fire |= (ch[2]<<8)&MASK(15, 8);
  fire |= (ch[3]>>0)&MASK(7, 0);

  if (ts == 246 && fire == 1) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_session_regimes_strobe(session_regimes_strobe *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 4 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 245;
  c->state = htons(c->state);
  memcpy((uint8_t*)ch, c, 4);

  return 0;
}

int Unmarshal_session_regimes_strobe(session_regimes_strobe *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 4 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  memcpy(c, ch, 4);
  c->state = ntohs(c->state);

  return 0;
}


int Is_session_regimes_strobe(void *buff, size_t size) {
  uint8_t ts = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 4 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);

  if (ts == 245) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_turn_ant_on_reception(turn_ant_on_reception *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 4 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 15;
  c->kop = 1;
  memcpy((uint8_t*)ch, c, 4);

  return 0;
}

int Unmarshal_turn_ant_on_reception(turn_ant_on_reception *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 4 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  memcpy(c, ch, 4);

  return 0;
}


int Is_turn_ant_on_reception(void *buff, size_t size) {
  uint8_t ts = 0;
  uint8_t kop = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 4 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);
  kop |= (ch[3]>>0)&MASK(7, 0);

  if (ts == 15 && kop == 1) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_control_modes_kvit(control_modes_kvit *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 14 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->ts = 15;
  ch[0] |= (c->ist<<0)&MASK(7, 0);
  ch[1] |= (c->ts<<0)&MASK(7, 0);
  ch[2] |= (c->error_code<<0)&MASK(3, 0);
  ch[3] |= (c->kom_kop<<0)&MASK(7, 0);
  ch[4] |= (c->number_submode<<4)&MASK(7, 4);
  ch[4] |= (c->number_mode<<0)&MASK(3, 0);
  ch[5] |= (c->static_mode<<4)&MASK(4, 4);
  ch[5] |= (c->synphase_front<<3)&MASK(3, 3);
  ch[5] |= (c->regular_mode<<2)&MASK(2, 2);
  ch[5] |= (c->turn_on_ant_on_rec<<0)&MASK(0, 0);
  ch[6] |= (c->number_fragment<<4)&MASK(7, 4);
  ch[6] |= (c->number_channel_in_module<<0)&MASK(3, 0);
  ch[7] |= (c->number_module<<0)&MASK(7, 0);
  ch[8] |= (c->electronic_azimuth>>8)&MASK(7, 0);
  ch[9] |= (c->electronic_azimuth<<0)&MASK(7, 0);
  ch[10] |= (c->electronic_elevation_angle>>8)&MASK(7, 0);
  ch[11] |= (c->electronic_elevation_angle<<0)&MASK(7, 0);
  ch[13] |= (c->set_elevation_angle<<1)&MASK(1, 1);
  ch[13] |= (c->set_azimuth<<0)&MASK(0, 0);


  return 0;
}

int Unmarshal_control_modes_kvit(control_modes_kvit *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 14 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  c->ist |= (ch[0]>>0)&MASK(7, 0);
  c->ts |= (ch[1]>>0)&MASK(7, 0);
  c->error_code |= (ch[2]>>0)&MASK(3, 0);
  c->kom_kop |= (ch[3]>>0)&MASK(7, 0);
  c->number_submode |= (ch[4]>>4)&MASK(3, 0);
  c->number_mode |= (ch[4]>>0)&MASK(3, 0);
  c->static_mode |= (ch[5]>>4)&MASK(0, 0);
  c->synphase_front |= (ch[5]>>3)&MASK(0, 0);
  c->regular_mode |= (ch[5]>>2)&MASK(0, 0);
  c->turn_on_ant_on_rec |= (ch[5]>>0)&MASK(0, 0);
  c->number_fragment |= (ch[6]>>4)&MASK(3, 0);
  c->number_channel_in_module |= (ch[6]>>0)&MASK(3, 0);
  c->number_module |= (ch[7]>>0)&MASK(7, 0);
  c->electronic_azimuth |= (ch[8]<<8)&MASK(15, 8);
  c->electronic_azimuth |= (ch[9]>>0)&MASK(7, 0);
  c->electronic_elevation_angle |= (ch[10]<<8)&MASK(15, 8);
  c->electronic_elevation_angle |= (ch[11]>>0)&MASK(7, 0);
  c->set_elevation_angle |= (ch[13]>>1)&MASK(0, 0);
  c->set_azimuth |= (ch[13]>>0)&MASK(0, 0);


  return 0;
}


int Is_control_modes_kvit(void *buff, size_t size) {
  uint8_t ts = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 14 || buff == NULL) return 0;

  ts |= (ch[1]>>0)&MASK(7, 0);

  if (ts == 15) {
    return 1;
  } else {
    return 0;
  }
}


