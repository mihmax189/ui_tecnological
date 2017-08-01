/*
 * CPP header for rlmc/generated/external_rlmc_fv_proto.json codogram module
 * Version: v0.9.0-3-g38b0680
 *
 * Auto-generated file! DO NOT MODIFY!
 */
#ifndef external_rlmc_fv_proto_GEN_CW_HPP
#define external_rlmc_fv_proto_GEN_CW_HPP

#include <QByteArray>

#include "external_rlmc_fv_proto.gen.h"

namespace Codograms {

#ifndef CLASS_CODOGRAM
#define CLASS_CODOGRAM
class Codogram {
public:
  virtual bool marshal() = 0;
  virtual bool unmarshal() = 0;
  virtual bool checkBuf() { return false; };
  virtual void clearMessage() = 0;
  virtual const QByteArray& getBuf() = 0;
  virtual ~Codogram() {};
};
#endif


class fap_freq_request : public Codogram {
public:
  fap_freq_request();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::fap_freq_request m;
  QByteArray buf;
  static const size_t bufsize;
};

class change_fap_freq : public Codogram {
public:
  change_fap_freq();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::change_fap_freq m;
  QByteArray buf;
  static const size_t bufsize;
};

class change_fap_freq_kvit : public Codogram {
public:
  change_fap_freq_kvit();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::change_fap_freq_kvit m;
  QByteArray buf;
  static const size_t bufsize;
};

class command_to_server_fv_to_change_data_mls : public Codogram {
public:
  command_to_server_fv_to_change_data_mls();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::command_to_server_fv_to_change_data_mls m;
  QByteArray buf;
  static const size_t bufsize;
};

class response_words_mls : public Codogram {
public:
  response_words_mls();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::response_words_mls m;
  QByteArray buf;
  static const size_t bufsize;
};

class regime_key_fap_request : public Codogram {
public:
  regime_key_fap_request();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::regime_key_fap_request m;
  QByteArray buf;
  static const size_t bufsize;
};

class regime_key_fap_antPR_kvit : public Codogram {
public:
  regime_key_fap_antPR_kvit();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::regime_key_fap_antPR_kvit m;
  QByteArray buf;
  static const size_t bufsize;
};

class regime_key_fap_antPD_kvit : public Codogram {
public:
  regime_key_fap_antPD_kvit();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::regime_key_fap_antPD_kvit m;
  QByteArray buf;
  static const size_t bufsize;
};

class codes_phases_antPR : public Codogram {
public:
  codes_phases_antPR();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::codes_phases_antPR m;
  QByteArray buf;
  static const size_t bufsize;
};

class codes_phases_antPD : public Codogram {
public:
  codes_phases_antPD();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::codes_phases_antPD m;
  QByteArray buf;
  static const size_t bufsize;
};

class send_regimes_strobe_data : public Codogram {
public:
  send_regimes_strobe_data();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::send_regimes_strobe_data m;
  QByteArray buf;
  static const size_t bufsize;
};

class read_regimes_strobe_data : public Codogram {
public:
  read_regimes_strobe_data();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::read_regimes_strobe_data m;
  QByteArray buf;
  static const size_t bufsize;
};

class regimes_strobe_request : public Codogram {
public:
  regimes_strobe_request();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::regimes_strobe_request m;
  QByteArray buf;
  static const size_t bufsize;
};

class fire_regimes_strobe : public Codogram {
public:
  fire_regimes_strobe();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::fire_regimes_strobe m;
  QByteArray buf;
  static const size_t bufsize;
};

class session_regimes_strobe : public Codogram {
public:
  session_regimes_strobe();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::session_regimes_strobe m;
  QByteArray buf;
  static const size_t bufsize;
};

class turn_ant_on_reception : public Codogram {
public:
  turn_ant_on_reception();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::turn_ant_on_reception m;
  QByteArray buf;
  static const size_t bufsize;
};

class control_modes_kvit : public Codogram {
public:
  control_modes_kvit();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::control_modes_kvit m;
  QByteArray buf;
  static const size_t bufsize;
};


}
#endif // external_rlmc_fv_proto_GEN_CW_HPP
