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

Codograms::send_regimes_and_strobes_data::send_regimes_and_strobes_data() {
  buf.fill(0, send_regimes_and_strobes_data__BUFSIZE);
  clearMessage();
}

const size_t Codograms::send_regimes_and_strobes_data::bufsize =
    send_regimes_and_strobes_data__BUFSIZE;

bool Codograms::send_regimes_and_strobes_data::marshal() {
  if (Marshal_send_regimes_and_strobes_data(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::send_regimes_and_strobes_data::unmarshal() {
  if (Unmarshal_send_regimes_and_strobes_data(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::send_regimes_and_strobes_data::checkBuf() {
  if (Is_send_regimes_and_strobes_data(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::send_regimes_and_strobes_data::getBuf() {
  return buf;
}

void Codograms::send_regimes_and_strobes_data::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::send_regimes_and_strobes_data::msize() { return sizeof(m); }

Codograms::read_regimes_and_strobes_data::read_regimes_and_strobes_data() {
  buf.fill(0, read_regimes_and_strobes_data__BUFSIZE);
  clearMessage();
}

const size_t Codograms::read_regimes_and_strobes_data::bufsize =
    read_regimes_and_strobes_data__BUFSIZE;

bool Codograms::read_regimes_and_strobes_data::marshal() {
  if (Marshal_read_regimes_and_strobes_data(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::read_regimes_and_strobes_data::unmarshal() {
  if (Unmarshal_read_regimes_and_strobes_data(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::read_regimes_and_strobes_data::checkBuf() {
  if (Is_read_regimes_and_strobes_data(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::read_regimes_and_strobes_data::getBuf() {
  return buf;
}

void Codograms::read_regimes_and_strobes_data::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::read_regimes_and_strobes_data::msize() { return sizeof(m); }

Codograms::regimes_and_strobes_data_request::
    regimes_and_strobes_data_request() {
  buf.fill(0, regimes_and_strobes_data_request__BUFSIZE);
  clearMessage();
}

const size_t Codograms::regimes_and_strobes_data_request::bufsize =
    regimes_and_strobes_data_request__BUFSIZE;

bool Codograms::regimes_and_strobes_data_request::marshal() {
  if (Marshal_regimes_and_strobes_data_request(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::regimes_and_strobes_data_request::unmarshal() {
  if (Unmarshal_regimes_and_strobes_data_request(&m, buf.constData(),
                                                 buf.size()))
    return false;
  else
    return true;
}

bool Codograms::regimes_and_strobes_data_request::checkBuf() {
  if (Is_regimes_and_strobes_data_request(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::regimes_and_strobes_data_request::getBuf() {
  return buf;
}

void Codograms::regimes_and_strobes_data_request::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::regimes_and_strobes_data_request::msize() { return sizeof(m); }

Codograms::fire_regimes_and_strobes_data::fire_regimes_and_strobes_data() {
  buf.fill(0, fire_regimes_and_strobes_data__BUFSIZE);
  clearMessage();
}

const size_t Codograms::fire_regimes_and_strobes_data::bufsize =
    fire_regimes_and_strobes_data__BUFSIZE;

bool Codograms::fire_regimes_and_strobes_data::marshal() {
  if (Marshal_fire_regimes_and_strobes_data(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::fire_regimes_and_strobes_data::unmarshal() {
  if (Unmarshal_fire_regimes_and_strobes_data(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::fire_regimes_and_strobes_data::checkBuf() {
  if (Is_fire_regimes_and_strobes_data(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::fire_regimes_and_strobes_data::getBuf() {
  return buf;
}

void Codograms::fire_regimes_and_strobes_data::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::fire_regimes_and_strobes_data::msize() { return sizeof(m); }

Codograms::session_regimes_and_strobes::session_regimes_and_strobes() {
  buf.fill(0, session_regimes_and_strobes__BUFSIZE);
  clearMessage();
}

const size_t Codograms::session_regimes_and_strobes::bufsize =
    session_regimes_and_strobes__BUFSIZE;

bool Codograms::session_regimes_and_strobes::marshal() {
  if (Marshal_session_regimes_and_strobes(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::session_regimes_and_strobes::unmarshal() {
  if (Unmarshal_session_regimes_and_strobes(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::session_regimes_and_strobes::checkBuf() {
  if (Is_session_regimes_and_strobes(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::session_regimes_and_strobes::getBuf() {
  return buf;
}

void Codograms::session_regimes_and_strobes::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::session_regimes_and_strobes::msize() { return sizeof(m); }

Codograms::progress_indicator_process_regimes_and_strobes::
    progress_indicator_process_regimes_and_strobes() {
  buf.fill(0, progress_indicator_process_regimes_and_strobes__BUFSIZE);
  clearMessage();
}

const size_t
    Codograms::progress_indicator_process_regimes_and_strobes::bufsize =
        progress_indicator_process_regimes_and_strobes__BUFSIZE;

bool Codograms::progress_indicator_process_regimes_and_strobes::marshal() {
  if (Marshal_progress_indicator_process_regimes_and_strobes(&m, buf.data(),
                                                             buf.size()))
    return false;
  else
    return true;
}

bool Codograms::progress_indicator_process_regimes_and_strobes::unmarshal() {
  if (Unmarshal_progress_indicator_process_regimes_and_strobes(
          &m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::progress_indicator_process_regimes_and_strobes::checkBuf() {
  if (Is_progress_indicator_process_regimes_and_strobes(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &
Codograms::progress_indicator_process_regimes_and_strobes::getBuf() {
  return buf;
}

void Codograms::progress_indicator_process_regimes_and_strobes::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::progress_indicator_process_regimes_and_strobes::msize() {
  return sizeof(m);
}

Codograms::command_static_or_dynamic_work_mls::
    command_static_or_dynamic_work_mls() {
  buf.fill(0, command_static_or_dynamic_work_mls__BUFSIZE);
  clearMessage();
}

const size_t Codograms::command_static_or_dynamic_work_mls::bufsize =
    command_static_or_dynamic_work_mls__BUFSIZE;

bool Codograms::command_static_or_dynamic_work_mls::marshal() {
  if (Marshal_command_static_or_dynamic_work_mls(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::command_static_or_dynamic_work_mls::unmarshal() {
  if (Unmarshal_command_static_or_dynamic_work_mls(&m, buf.constData(),
                                                   buf.size()))
    return false;
  else
    return true;
}

bool Codograms::command_static_or_dynamic_work_mls::checkBuf() {
  if (Is_command_static_or_dynamic_work_mls(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::command_static_or_dynamic_work_mls::getBuf() {
  return buf;
}

void Codograms::command_static_or_dynamic_work_mls::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::command_static_or_dynamic_work_mls::msize() { return sizeof(m); }

Codograms::static_or_dynamic_work_mls_kvit::static_or_dynamic_work_mls_kvit() {
  buf.fill(0, static_or_dynamic_work_mls_kvit__BUFSIZE);
  clearMessage();
}

const size_t Codograms::static_or_dynamic_work_mls_kvit::bufsize =
    static_or_dynamic_work_mls_kvit__BUFSIZE;

bool Codograms::static_or_dynamic_work_mls_kvit::marshal() {
  if (Marshal_static_or_dynamic_work_mls_kvit(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::static_or_dynamic_work_mls_kvit::unmarshal() {
  if (Unmarshal_static_or_dynamic_work_mls_kvit(&m, buf.constData(),
                                                buf.size()))
    return false;
  else
    return true;
}

bool Codograms::static_or_dynamic_work_mls_kvit::checkBuf() {
  if (Is_static_or_dynamic_work_mls_kvit(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::static_or_dynamic_work_mls_kvit::getBuf() {
  return buf;
}

void Codograms::static_or_dynamic_work_mls_kvit::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::static_or_dynamic_work_mls_kvit::msize() { return sizeof(m); }

Codograms::static_or_dynamic_work_mls_request::
    static_or_dynamic_work_mls_request() {
  buf.fill(0, static_or_dynamic_work_mls_request__BUFSIZE);
  clearMessage();
}

const size_t Codograms::static_or_dynamic_work_mls_request::bufsize =
    static_or_dynamic_work_mls_request__BUFSIZE;

bool Codograms::static_or_dynamic_work_mls_request::marshal() {
  if (Marshal_static_or_dynamic_work_mls_request(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::static_or_dynamic_work_mls_request::unmarshal() {
  if (Unmarshal_static_or_dynamic_work_mls_request(&m, buf.constData(),
                                                   buf.size()))
    return false;
  else
    return true;
}

bool Codograms::static_or_dynamic_work_mls_request::checkBuf() {
  if (Is_static_or_dynamic_work_mls_request(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::static_or_dynamic_work_mls_request::getBuf() {
  return buf;
}

void Codograms::static_or_dynamic_work_mls_request::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::static_or_dynamic_work_mls_request::msize() { return sizeof(m); }

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
