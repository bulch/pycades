#ifndef PY_CRL_H
#define PY_CRL_H

#include "stdafx.h"
#include "CPPCadesCPCRL.h"

typedef struct {
    PyObject_HEAD
    NS_SHARED_PTR::shared_ptr<CryptoPro::PKI::CAdES::CPPCadesCPCRLObject> m_pCppCadesImpl;
} CRL;

extern PyTypeObject CRLType;
#endif
