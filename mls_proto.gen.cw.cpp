/*
 * CPP implementation for rlmc/generated/mls_proto.json codogram module
 * Version: v0.9.0-3-g38b0680
 *
 * Auto-generated file! DO NOT MODIFY!
 */

#include "mls_proto.gen.cw.hpp"

Codograms::regime_key_fap::regime_key_fap() {
  buf.fill(0, regime_key_fap__BUFSIZE);
  clearMessage();
}

const size_t Codograms::regime_key_fap::bufsize = regime_key_fap__BUFSIZE;

bool Codograms::regime_key_fap::marshal() {
  if (Marshal_regime_key_fap(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::regime_key_fap::unmarshal() {
  if (Unmarshal_regime_key_fap(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::regime_key_fap::checkBuf() {
  if (Is_regime_key_fap(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::regime_key_fap::getBuf() { return buf; }

void Codograms::regime_key_fap::clearMessage() { memset(&m, 0, sizeof(m)); }

int Codograms::regime_key_fap::msize() { return sizeof(m); }

Codograms::front_0_2::front_0_2() {
  buf.fill(0, front_0_2__BUFSIZE);
  clearMessage();
}

const size_t Codograms::front_0_2::bufsize = front_0_2__BUFSIZE;

bool Codograms::front_0_2::marshal() {
  if (Marshal_front_0_2(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::front_0_2::unmarshal() {
  if (Unmarshal_front_0_2(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::front_0_2::checkBuf() {
  if (Is_front_0_2(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::front_0_2::getBuf() { return buf; }

void Codograms::front_0_2::clearMessage() { memset(&m, 0, sizeof(m)); }

int Codograms::front_0_2::msize() { return sizeof(m); }

Codograms::front_3_5::front_3_5() {
  buf.fill(0, front_3_5__BUFSIZE);
  clearMessage();
}

const size_t Codograms::front_3_5::bufsize = front_3_5__BUFSIZE;

bool Codograms::front_3_5::marshal() {
  if (Marshal_front_3_5(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::front_3_5::unmarshal() {
  if (Unmarshal_front_3_5(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::front_3_5::checkBuf() {
  if (Is_front_3_5(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::front_3_5::getBuf() { return buf; }

void Codograms::front_3_5::clearMessage() { memset(&m, 0, sizeof(m)); }

int Codograms::front_3_5::msize() { return sizeof(m); }

Codograms::front_6_7::front_6_7() {
  buf.fill(0, front_6_7__BUFSIZE);
  clearMessage();
}

const size_t Codograms::front_6_7::bufsize = front_6_7__BUFSIZE;

bool Codograms::front_6_7::marshal() {
  if (Marshal_front_6_7(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::front_6_7::unmarshal() {
  if (Unmarshal_front_6_7(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::front_6_7::checkBuf() {
  if (Is_front_6_7(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::front_6_7::getBuf() { return buf; }

void Codograms::front_6_7::clearMessage() { memset(&m, 0, sizeof(m)); }

int Codograms::front_6_7::msize() { return sizeof(m); }

Codograms::response_words::response_words() {
  buf.fill(0, response_words__BUFSIZE);
  clearMessage();
}

const size_t Codograms::response_words::bufsize = response_words__BUFSIZE;

bool Codograms::response_words::marshal() {
  if (Marshal_response_words(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::response_words::unmarshal() {
  if (Unmarshal_response_words(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::response_words::checkBuf() {
  if (Is_response_words(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::response_words::getBuf() { return buf; }

void Codograms::response_words::clearMessage() { memset(&m, 0, sizeof(m)); }

int Codograms::response_words::msize() { return sizeof(m); }

Codograms::manage_time_distribution::manage_time_distribution() {
  buf.fill(0, manage_time_distribution__BUFSIZE);
  clearMessage();
}

const size_t Codograms::manage_time_distribution::bufsize =
    manage_time_distribution__BUFSIZE;

bool Codograms::manage_time_distribution::marshal() {
  if (Marshal_manage_time_distribution(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::manage_time_distribution::unmarshal() {
  if (Unmarshal_manage_time_distribution(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::manage_time_distribution::checkBuf() {
  if (Is_manage_time_distribution(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::manage_time_distribution::getBuf() { return buf; }

void Codograms::manage_time_distribution::clearMessage() {
  memset(&m, 0, sizeof(m));
}

int Codograms::manage_time_distribution::msize() { return sizeof(m); }

Codograms::manage_factory_fap::manage_factory_fap() {
  buf.fill(0, manage_factory_fap__BUFSIZE);
  clearMessage();
}

const size_t Codograms::manage_factory_fap::bufsize =
    manage_factory_fap__BUFSIZE;

bool Codograms::manage_factory_fap::marshal() {
  if (Marshal_manage_factory_fap(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::manage_factory_fap::unmarshal() {
  if (Unmarshal_manage_factory_fap(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::manage_factory_fap::checkBuf() {
  if (Is_manage_factory_fap(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::manage_factory_fap::getBuf() { return buf; }

void Codograms::manage_factory_fap::clearMessage() { memset(&m, 0, sizeof(m)); }

int Codograms::manage_factory_fap::msize() { return sizeof(m); }

Codograms::manage_regular_fap::manage_regular_fap() {
  buf.fill(0, manage_regular_fap__BUFSIZE);
  clearMessage();
}

const size_t Codograms::manage_regular_fap::bufsize =
    manage_regular_fap__BUFSIZE;

bool Codograms::manage_regular_fap::marshal() {
  if (Marshal_manage_regular_fap(&m, buf.data(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::manage_regular_fap::unmarshal() {
  if (Unmarshal_manage_regular_fap(&m, buf.constData(), buf.size()))
    return false;
  else
    return true;
}

bool Codograms::manage_regular_fap::checkBuf() {
  if (Is_manage_regular_fap(buf.data(), buf.size()))
    return true;
  else
    return false;
}

const QByteArray &Codograms::manage_regular_fap::getBuf() { return buf; }

void Codograms::manage_regular_fap::clearMessage() { memset(&m, 0, sizeof(m)); }

int Codograms::manage_regular_fap::msize() { return sizeof(m); }
