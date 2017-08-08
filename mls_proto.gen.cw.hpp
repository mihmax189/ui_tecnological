/*
 * CPP header for rlmc/generated/mls_proto.json codogram module
 * Version: v0.9.0-3-g38b0680
 *
 * Auto-generated file! DO NOT MODIFY!
 */
#ifndef mls_proto_GEN_CW_HPP
#define mls_proto_GEN_CW_HPP

#include <QByteArray>

#include "mls_proto.gen.h"

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


class regime_key_fap : public Codogram {
public:
  regime_key_fap();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::regime_key_fap m;
  QByteArray buf;
  static const size_t bufsize;
};

class front_0_2 : public Codogram {
public:
  front_0_2();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::front_0_2 m;
  QByteArray buf;
  static const size_t bufsize;
};

class front_3_5 : public Codogram {
public:
  front_3_5();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::front_3_5 m;
  QByteArray buf;
  static const size_t bufsize;
};

class front_6_7 : public Codogram {
public:
  front_6_7();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::front_6_7 m;
  QByteArray buf;
  static const size_t bufsize;
};

class response_words : public Codogram {
public:
  response_words();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::response_words m;
  QByteArray buf;
  static const size_t bufsize;
};

class manage_time_distribution : public Codogram {
public:
  manage_time_distribution();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::manage_time_distribution m;
  QByteArray buf;
  static const size_t bufsize;
};

class manage_factory_fap : public Codogram {
public:
  manage_factory_fap();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::manage_factory_fap m;
  QByteArray buf;
  static const size_t bufsize;
};

class manage_regular_fap : public Codogram {
public:
  manage_regular_fap();
  bool marshal();
  bool unmarshal();
  bool checkBuf();
  const QByteArray& getBuf();
  void clearMessage();
  int msize();

  ::manage_regular_fap m;
  QByteArray buf;
  static const size_t bufsize;
};


}
#endif // mls_proto_GEN_CW_HPP
