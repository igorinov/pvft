/**
 *  Copyright (C) 2016 Ivan Gorinov
 *  License: MIT
 */

#ifndef __pvft_h
#define __pvft_h

#define Re(a) (a).re
#define Im(a) (a).im

typedef struct {
	double re;
	double im;
} complex_d;

typedef struct {
	float re;
	float im;
} complex_s;


#ifdef __cplusplus
extern "C" {
#endif

int fft_setup_s(complex_s *cs, int n, int inverse);
int fft_setup_d(complex_d *cs, int n, int inverse);

int fft_complex_s(const complex_s *ss, complex_s *out, const complex_s *in, int n);
int fft_complex_d(const complex_d *ss, complex_d *out, const complex_d *in, int n);

int fft_real_s(const complex_s *cs, complex_s *out, const float *in, int n);
int fft_real_d(const complex_d *cs, complex_d *out, const double *in, int n);

int dft_complex_step_s(const complex_s *cs, complex_s *output, const complex_s *input, int n, int in_step);
int dft_complex_step_d(const complex_d *cs, complex_d *output, const complex_d *input, int n, int in_step);

int dft_real_step_s(const complex_s *cs, complex_s *output, const float *input, int n, int in_step);
int dft_real_step_d(const complex_d *cs, complex_d *output, const double *input, int n, int in_step);

int dft_complex_s(const complex_s *cs, complex_s *output, const complex_s *input, int n);
int dft_complex_d(const complex_d *cs, complex_d *output, const complex_d *input, int n);

int bit_reverse(int i, int bits);

#ifdef __cplusplus
}
#endif

#endif  /* __pvft_h */