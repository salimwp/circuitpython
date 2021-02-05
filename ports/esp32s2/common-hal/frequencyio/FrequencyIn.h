/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 microDev
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MICROPY_INCLUDED_ESP32S2_COMMON_HAL_FREQUENCYIO_FREQUENCYIN_H
#define MICROPY_INCLUDED_ESP32S2_COMMON_HAL_FREQUENCYIO_FREQUENCYIN_H

#include "py/obj.h"
#include "peripherals/pcnt.h"
#include "peripherals/timer.h"

typedef struct {
    mp_obj_base_t base;
    pcnt_unit_t unit;
    timer_index_t timer;
    intr_handle_t handle;
    uint8_t pin;
    uint8_t multiplier;
    uint32_t frequency;
    uint16_t capture_period;
} frequencyio_frequencyin_obj_t;

#endif // MICROPY_INCLUDED_ESP32S2_COMMON_HAL_FREQUENCYIO_FREQUENCYIN_H
