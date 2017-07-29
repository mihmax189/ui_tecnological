/*
 * CPP implementation for rlmc/generated/external_rlmc_fv_proto.json codogram
 * module
 * Version: v0.9.0-3-g38b0680
 *
 * Auto-generated file! DO NOT MODIFY!
 */

#include "external_rlmc_fv_proto.gen.cw.hpp"

Codograms::fap_freq_request::fap_freq_request() {
  buf.fill(0, fap_freq_request__BUFSIZE);
  clearMessage();
}

const size_t Codograms::fap_freq_request::bufsize = fap_freq_request__BUFSIZE;

bool Codograms::fap_freq_request::marshal() {
  if (Marshal_fap_freq_request(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::fap_freq_request::unmarshal() {
  if (Unmarshal_fap_freq_request(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::fap_freq_request::checkBuf() {
  if (Is_fap_freq_request(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::fap_freq_request::getBuf() { return buf; }

void Codograms::fap_freq_request::clearMessage() { memset(&m, 0, sizeof(m)); }

int Codograms::fap_freq_request::msize() { return sizeof(m); }

Codograms::change_fap_freq::change_fap_freq() {
  buf.fill(0, change_fap_freq__BUFSIZE);
  clearMessage();
}

const size_t Codograms::change_fap_freq::bufsize = change_fap_freq__BUFSIZE;

bool Codograms::change_fap_freq::marshal() {
  if (Marshal_change_fap_freq(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::change_fap_freq::unmarshal() {
  if (Unmarshal_change_fap_freq(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::change_fap_freq::checkBuf() {
  if (Is_change_fap_freq(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::change_fap_freq::getBuf() { return buf; }

void Codograms::change_fap_freq::clearMessage() { memset(&m, 0, sizeof(m)); }

int Codograms::change_fap_freq::msize() { return sizeof(m); }

Codograms::change_fap_freq_kvit::change_fap_freq_kvit() {
  buf.fill(0, change_fap_freq_kvit__BUFSIZE);
  clearMessage();
}

const size_t Codograms::change_fap_freq_kvit::bufsize =
    change_fap_freq_kvit__BUFSIZE;

bool Codograms::change_fap_freq_kvit::marshal() {
  if (Marshal_change_fap_freq_kvit(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::change_fap_freq_kvit::unmarshal() {
  if (Unmarshal_change_fap_freq_kvit(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::change_fap_freq_kvit::checkBuf() {
  if (Is_change_fap_freq_kvit(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::change_fap_freq_kvit::getBuf() { return buf; }

void Codograms::change_fap_freq_kvit::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::change_fap_freq_kvit::msize() { return sizeof(m); }

Codograms::command_to_server_fv_to_change_data_mls::
    command_to_server_fv_to_change_data_mls() {
  buf.fill(0, command_to_server_fv_to_change_data_mls__BUFSIZE);
  clearMessage();
}

const size_t Codograms::command_to_server_fv_to_change_data_mls::bufsize =
    command_to_server_fv_to_change_data_mls__BUFSIZE;

bool Codograms::command_to_server_fv_to_change_data_mls::marshal() {
  if (Marshal_command_to_server_fv_to_change_data_mls(&m, buf.data(),
                                                      buf.size()))
    return false;
  else
    return true;
}

bool Codograms::command_to_server_fv_to_change_data_mls::unmarshal() {
  if (Unmarshal_command_to_server_fv_to_change_data_mls(&m, buf.constData(),
                                                        buf.size()))
    return false;
  else
    return true;
}

bool Codograms::command_to_server_fv_to_change_data_mls::checkBuf() {
  if (Is_command_to_server_fv_to_change_data_mls(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::command_to_server_fv_to_change_data_mls::getBuf() {
  return buf;
}

void Codograms::command_to_server_fv_to_change_data_mls::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::command_to_server_fv_to_change_data_mls::msize() {
  return sizeof(m);
}

Codograms::response_words_mls::response_words_mls() {
  buf.fill(0, response_words_mls__BUFSIZE);
  clearMessage();
}

const size_t Codograms::response_words_mls::bufsize =
    response_words_mls__BUFSIZE;

bool Codograms::response_words_mls::marshal() {
  if (Marshal_response_words_mls(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::response_words_mls::unmarshal() {
  if (Unmarshal_response_words_mls(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::response_words_mls::checkBuf() {
  if (Is_response_words_mls(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::response_words_mls::getBuf() { return buf; }

void Codograms::response_words_mls::clearMessage() { memset(&m, 0, sizeof(m)); }

int Codograms::response_words_mls::msize() { return sizeof(m); }

Codograms::regime_key_fap_request::regime_key_fap_request() {
  buf.fill(0, regime_key_fap_request__BUFSIZE);
  clearMessage();
}

const size_t Codograms::regime_key_fap_request::bufsize =
    regime_key_fap_request__BUFSIZE;

bool Codograms::regime_key_fap_request::marshal() {
  if (Marshal_regime_key_fap_request(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::regime_key_fap_request::unmarshal() {
  if (Unmarshal_regime_key_fap_request(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::regime_key_fap_request::checkBuf() {
  if (Is_regime_key_fap_request(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::regime_key_fap_request::getBuf() { return buf; }

void Codograms::regime_key_fap_request::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::regime_key_fap_request::msize() { return sizeof(m); }

Codograms::regime_key_fap_antPR_kvit::regime_key_fap_antPR_kvit() {
  buf.fill(0, regime_key_fap_antPR_kvit__BUFSIZE);
  clearMessage();
}

const size_t Codograms::regime_key_fap_antPR_kvit::bufsize =
    regime_key_fap_antPR_kvit__BUFSIZE;

bool Codograms::regime_key_fap_antPR_kvit::marshal() {
  if (Marshal_regime_key_fap_antPR_kvit(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::regime_key_fap_antPR_kvit::unmarshal() {
  if (Unmarshal_regime_key_fap_antPR_kvit(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::regime_key_fap_antPR_kvit::checkBuf() {
  if (Is_regime_key_fap_antPR_kvit(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::regime_key_fap_antPR_kvit::getBuf() { return buf; }

void Codograms::regime_key_fap_antPR_kvit::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::regime_key_fap_antPR_kvit::msize() { return sizeof(m); }

Codograms::regime_key_fap_antPD_kvit::regime_key_fap_antPD_kvit() {
  buf.fill(0, regime_key_fap_antPD_kvit__BUFSIZE);
  clearMessage();
}

const size_t Codograms::regime_key_fap_antPD_kvit::bufsize =
    regime_key_fap_antPD_kvit__BUFSIZE;

bool Codograms::regime_key_fap_antPD_kvit::marshal() {
  if (Marshal_regime_key_fap_antPD_kvit(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::regime_key_fap_antPD_kvit::unmarshal() {
  if (Unmarshal_regime_key_fap_antPD_kvit(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::regime_key_fap_antPD_kvit::checkBuf() {
  if (Is_regime_key_fap_antPD_kvit(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::regime_key_fap_antPD_kvit::getBuf() { return buf; }

void Codograms::regime_key_fap_antPD_kvit::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::regime_key_fap_antPD_kvit::msize() { return sizeof(m); }

Codograms::codes_phases_antPR::codes_phases_antPR() {
  buf.fill(0, codes_phases_antPR__BUFSIZE);
  clearMessage();
}

const size_t Codograms::codes_phases_antPR::bufsize =
    codes_phases_antPR__BUFSIZE;

bool Codograms::codes_phases_antPR::marshal() {
  if (Marshal_codes_phases_antPR(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::codes_phases_antPR::unmarshal() {
  if (Unmarshal_codes_phases_antPR(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::codes_phases_antPR::checkBuf() {
  if (Is_codes_phases_antPR(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::codes_phases_antPR::getBuf() { return buf; }

void Codograms::codes_phases_antPR::clearMessage() { memset(&m, 0, sizeof(m)); }

int Codograms::codes_phases_antPR::msize() { return sizeof(m); }

Codograms::codes_phases_antPD::codes_phases_antPD() {
  buf.fill(0, codes_phases_antPD__BUFSIZE);
  clearMessage();
}

const size_t Codograms::codes_phases_antPD::bufsize =
    codes_phases_antPD__BUFSIZE;

bool Codograms::codes_phases_antPD::marshal() {
  if (Marshal_codes_phases_antPD(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::codes_phases_antPD::unmarshal() {
  if (Unmarshal_codes_phases_antPD(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::codes_phases_antPD::checkBuf() {
  if (Is_codes_phases_antPD(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::codes_phases_antPD::getBuf() { return buf; }

void Codograms::codes_phases_antPD::clearMessage() { memset(&m, 0, sizeof(m)); }

int Codograms::codes_phases_antPD::msize() { return sizeof(m); }

Codograms::send_read_regimes_strobe_data::send_read_regimes_strobe_data() {
  buf.fill(0, send_read_regimes_strobe_data__BUFSIZE);
  clearMessage();
}

const size_t Codograms::send_read_regimes_strobe_data::bufsize =
    send_read_regimes_strobe_data__BUFSIZE;

bool Codograms::send_read_regimes_strobe_data::marshal() {
  if (Marshal_send_read_regimes_strobe_data(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::send_read_regimes_strobe_data::unmarshal() {
  if (Unmarshal_send_read_regimes_strobe_data(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

const QByteArray &Codograms::send_read_regimes_strobe_data::getBuf() {
  return buf;
}

void Codograms::send_read_regimes_strobe_data::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::send_read_regimes_strobe_data::msize() { return sizeof(m); }

Codograms::regimes_strobe_request::regimes_strobe_request() {
  buf.fill(0, regimes_strobe_request__BUFSIZE);
  clearMessage();
}

const size_t Codograms::regimes_strobe_request::bufsize =
    regimes_strobe_request__BUFSIZE;

bool Codograms::regimes_strobe_request::marshal() {
  if (Marshal_regimes_strobe_request(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::regimes_strobe_request::unmarshal() {
  if (Unmarshal_regimes_strobe_request(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::regimes_strobe_request::checkBuf() {
  if (Is_regimes_strobe_request(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::regimes_strobe_request::getBuf() { return buf; }

void Codograms::regimes_strobe_request::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::regimes_strobe_request::msize() { return sizeof(m); }

Codograms::fire_regimes_strobe::fire_regimes_strobe() {
  buf.fill(0, fire_regimes_strobe__BUFSIZE);
  clearMessage();
}

const size_t Codograms::fire_regimes_strobe::bufsize =
    fire_regimes_strobe__BUFSIZE;

bool Codograms::fire_regimes_strobe::marshal() {
  if (Marshal_fire_regimes_strobe(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::fire_regimes_strobe::unmarshal() {
  if (Unmarshal_fire_regimes_strobe(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::fire_regimes_strobe::checkBuf() {
  if (Is_fire_regimes_strobe(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::fire_regimes_strobe::getBuf() { return buf; }

void Codograms::fire_regimes_strobe::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::fire_regimes_strobe::msize() { return sizeof(m); }

Codograms::turn_ant_on_reception::turn_ant_on_reception() {
  buf.fill(0, turn_ant_on_reception__BUFSIZE);
  clearMessage();
}

const size_t Codograms::turn_ant_on_reception::bufsize =
    turn_ant_on_reception__BUFSIZE;

bool Codograms::turn_ant_on_reception::marshal() {
  if (Marshal_turn_ant_on_reception(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::turn_ant_on_reception::unmarshal() {
  if (Unmarshal_turn_ant_on_reception(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::turn_ant_on_reception::checkBuf() {
  if (Is_turn_ant_on_reception(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::turn_ant_on_reception::getBuf() { return buf; }

void Codograms::turn_ant_on_reception::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::turn_ant_on_reception::msize() { return sizeof(m); }

Codograms::control_modes_kvit::control_modes_kvit() {
  buf.fill(0, control_modes_kvit__BUFSIZE);
  clearMessage();
}

const size_t Codograms::control_modes_kvit::bufsize =
    control_modes_kvit__BUFSIZE;

bool Codograms::control_modes_kvit::marshal() {
  if (Marshal_control_modes_kvit(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::control_modes_kvit::unmarshal() {
  if (Unmarshal_control_modes_kvit(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::control_modes_kvit::checkBuf() {
  if (Is_control_modes_kvit(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::control_modes_kvit::getBuf() { return buf; }

void Codograms::control_modes_kvit::clearMessage() { memset(&m, 0, sizeof(m)); }

int Codograms::control_modes_kvit::msize() { return sizeof(m); }
