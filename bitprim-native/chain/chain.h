#ifndef BITPRIM_PY_CHAIN_H_
#define BITPRIM_PY_CHAIN_H_

#include <Python.h>
#include <bitprim/nodecint.h>
#include "../utils.h"

//void chain_fetch_block_handler(chain_t chain, void* ctx, int error , block_t block, size_t h);

PyObject * bitprim_native_chain_fetch_block_by_height(PyObject* self, PyObject* args);


PyObject * bitprim_native_chain_fetch_block_by_hash(PyObject* self, PyObject* args);

// -------------------------------------------------------------------
// fetch_merkle_block
// -------------------------------------------------------------------

//void chain_fetch_merkle_block_handler(chain_t chain, void* ctx, int error , merkle_block_t merkle, size_t h);

PyObject * bitprim_native_chain_fetch_merkle_block_by_height(PyObject* self, PyObject* args);

PyObject * bitprim_native_chain_fetch_merkle_block_by_hash(PyObject* self, PyObject* args);

// -------------------------------------------------------------------
// fetch block header
// -------------------------------------------------------------------

//void chain_fetch_block_header_handler(chain_t chain, void* ctx, int error , header_t header, size_t h);

PyObject * bitprim_native_chain_fetch_block_header_by_height(PyObject* self, PyObject* args);

PyObject * bitprim_native_chain_fetch_block_header_by_hash(PyObject* self, PyObject* args);

PyObject* bitprim_native_chain_fetch_last_height(PyObject* self, PyObject* args);

PyObject* bitprim_native_chain_fetch_history(PyObject* self, PyObject* args);

PyObject* bitprim_native_chain_fetch_block_height(PyObject* self, PyObject* args);

PyObject* bitprim_native_chain_fetch_stealth(PyObject* self, PyObject* args);

#endif
