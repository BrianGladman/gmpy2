/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * gmpy2_mpz_inplace.h                                                     *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Python interface to the GMP or MPIR, MPFR, and MPC multiple precision   *
 * libraries.                                                              *
 *                                                                         *
 * Copyright 2000 - 2009 Alex Martelli                                     *
 *                                                                         *
 * Copyright 2008 - 2021 Case Van Horsen                                   *
 *                                                                         *
 * This file is part of GMPY2.                                             *
 *                                                                         *
 * GMPY2 is free software: you can redistribute it and/or modify it under  *
 * the terms of the GNU Lesser General Public License as published by the  *
 * Free Software Foundation, either version 3 of the License, or (at your  *
 * option) any later version.                                              *
 *                                                                         *
 * GMPY2 is distributed in the hope that it will be useful, but WITHOUT    *
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or   *
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public    *
 * License for more details.                                               *
 *                                                                         *
 * You should have received a copy of the GNU Lesser General Public        *
 * License along with GMPY2; if not, see <http://www.gnu.org/licenses/>    *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef GMPY_MPZ_INPLACE_H
#define GMPY_MPZ_INPLACE_H

#ifdef __cplusplus
extern "C" {
#endif

static PyObject * GMPy_MPZ_IAdd_Slot(PyObject *self, PyObject *other);
static PyObject * GMPy_MPZ_ISub_Slot(PyObject *self, PyObject *other);
static PyObject * GMPy_MPZ_IMul_Slot(PyObject *self, PyObject *other);
static PyObject * GMPy_MPZ_IFloorDiv_Slot(PyObject *self, PyObject *other);
static PyObject * GMPy_MPZ_IRem_Slot(PyObject *self, PyObject *other);
static PyObject * GMPy_MPZ_IRshift_Slot(PyObject *self, PyObject *other);
static PyObject * GMPy_MPZ_ILshift_Slot(PyObject *self, PyObject *other);
static PyObject * GMPy_MPZ_IPow_Slot(PyObject *self, PyObject *other, PyObject *mod);

#ifdef __cplusplus
}
#endif
#endif
