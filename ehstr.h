#ifndef EHSTR_H
#define EHSTR_H

/*
  unsigned to big-endian binary
  represents a binary value as a string of zeros and ones
*/
char *utob(char *buf, size_t buf_szie, unsigned long val, size_t bits);

/*
  big-endian binary to unsigned
  convert a string of zeros and ones as a binary value
*/
unsigned long btou(const char *buf, size_t buf_size);

/*
  reverse a string in place
  e.g. to convert "0111" from big-endian to little-endian "1110"
*/
void revstr(char *str, size_t buf_size);

/*
  mostly for c89 compat
*/
#if _POSIX_C_SOURCE < 200809L
size_t strnlen(const char *str, size_t buf_size);
#endif

/*
  globals for controlling strictness and errors
  ... I guess globals are better than #define
*/
unsigned int set_ehstr_strict_utob(unsigned int new_val);
unsigned int set_ehstr_strict_btou(unsigned int new_val);
unsigned int set_ehstr_strict_revstr(unsigned int new_val);

#endif /* EHSTR_H */
