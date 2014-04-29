#ifndef WRAPPERS_H_
#define WRAPPERS_H_
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>
#include <R_ext/Rdynload.h>
#include <Rmath.h>

#include <stdio.h>
#include "hdfFlow.h"


#define IS_SET(b, i, bit) ((b)[i] != 0 && ((b)[i] & (1 << (bit))))

void ERR(int e);

SEXP createFile(SEXP _fileName, SEXP _nEvent, SEXP _nChannel, SEXP _nSample, SEXP _dim);

SEXP writeSlice(SEXP _fileName, SEXP _mat, SEXP _chIndx, SEXP _sampleIndx);

SEXP readSlice(SEXP _fileName, SEXP _chIndx, SEXP _sampleIndx, SEXP _colnames);


SEXP bitarray_set(SEXP bits, SEXP _indx);
SEXP bitarray_getSetBitPos(SEXP bits);
SEXP bitarray_getBitStatus(SEXP bits);
SEXP bitarray_Flip(SEXP bits);


#endif /* WRAPPERS_H_ */
