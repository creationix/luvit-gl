
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __clock_t clock_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef long unsigned int size_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));
typedef int register_t __attribute__ ((__mode__ (__word__)));
typedef int __sig_atomic_t;
typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
typedef __sigset_t sigset_t;
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
typedef __suseconds_t suseconds_t;
typedef long int __fd_mask;
typedef struct
  {
    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];
  } fd_set;
typedef __fd_mask fd_mask;
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
typedef __blksize_t blksize_t;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef unsigned long int pthread_t;
typedef union
{
  char __size[56];
  long int __align;
} pthread_attr_t;
typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    int __spins;
    __pthread_list_t __list;
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;
typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;
    unsigned int __flags;
  } __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;
typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
};
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
struct _IO_FILE {
  int _flags;
  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);
typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);
typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);
typedef int __io_close_fn (void *__cookie);
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_peekc_locked (_IO_FILE *__fp);
extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);
extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);
extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
typedef __gnuc_va_list va_list;
typedef _G_fpos_t fpos_t;
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern int remove (__const char *__filename) __attribute__ ((__nothrow__ , __leaf__));
extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__ , __leaf__));
extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) __attribute__ ((__nothrow__ , __leaf__));
extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;
extern int fclose (FILE *__stream);
extern int fflush (FILE *__stream);
extern int fflush_unlocked (FILE *__stream);
extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;
extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));
extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);
extern int printf (__const char *__restrict __format, ...);
extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);
extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));
extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;
extern int scanf (__const char *__restrict __format, ...) ;
extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int fscanf (FILE *__restrict __stream, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")
                               ;
extern int scanf (__const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (__const char *__restrict __s, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))
                      ;
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
extern int getchar (void);
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);
extern int fputc_unlocked (int __c, FILE *__stream);
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
extern int getw (FILE *__stream);
extern int putw (int __w, FILE *__stream);
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
extern char *gets (char *__s) ;
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;
extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;
extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);
extern int puts (__const char *__s);
extern int ungetc (int __c, FILE *__stream);
extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
extern int fseek (FILE *__stream, long int __off, int __whence);
extern long int ftell (FILE *__stream) ;
extern void rewind (FILE *__stream);
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
extern __off_t ftello (FILE *__stream) ;
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void perror (__const char *__s);
extern int sys_nerr;
extern __const char *__const sys_errlist[];
extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *popen (__const char *__command, __const char *__modes) ;
extern int pclose (FILE *__stream);
extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
typedef int wchar_t;
union wait
  {
    int w_status;
    struct
      {
 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;
      } __wait_terminated;
    struct
      {
 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;
      } __wait_stopped;
  };
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
typedef struct
  {
    int quot;
    int rem;
  } div_t;
typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;
__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;
extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;
extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));
extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));
extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };
extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));
extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));
extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));
extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));
extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };
extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;
extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;
extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));
extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));
extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));
extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern char *getenv (__const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int system (__const char *__command) ;
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;
typedef int (*__compar_fn_t) (__const void *, __const void *);
extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;
extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;
extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;
extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__)) ;
extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));
extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));
extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
typedef long int ptrdiff_t;
extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
typedef struct __locale_struct
{
  struct __locale_data *__locales[13];
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
} *__locale_t;
typedef __locale_t locale_t;
extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));
extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strnlen (__const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))
                        __attribute__ ((__nonnull__ (2)));
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));
extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long int uint64_t;
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;
typedef long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long int uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
typedef int __gwchar_t;
typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern intmax_t strtoimax (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));
extern uintmax_t strtoumax (__const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));
extern intmax_t wcstoimax (__const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
extern uintmax_t wcstoumax (__const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
extern __const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const));
extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));
extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));
extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));
extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
typedef void *iconv_t;
extern iconv_t iconv_open (__const char *__tocode, __const char *__fromcode);
extern size_t iconv (iconv_t __cd, char **__restrict __inbuf,
       size_t *__restrict __inbytesleft,
       char **__restrict __outbuf,
       size_t *__restrict __outbytesleft);
extern int iconv_close (iconv_t __cd);
typedef enum {
 SDL_FALSE = 0,
 SDL_TRUE = 1
} SDL_bool;
typedef int8_t Sint8;
typedef uint8_t Uint8;
typedef int16_t Sint16;
typedef uint16_t Uint16;
typedef int32_t Sint32;
typedef uint32_t Uint32;
typedef int64_t Sint64;
typedef uint64_t Uint64;
typedef int SDL_dummy_uint8[(sizeof(Uint8) == 1) * 2 - 1];
typedef int SDL_dummy_sint8[(sizeof(Sint8) == 1) * 2 - 1];
typedef int SDL_dummy_uint16[(sizeof(Uint16) == 2) * 2 - 1];
typedef int SDL_dummy_sint16[(sizeof(Sint16) == 2) * 2 - 1];
typedef int SDL_dummy_uint32[(sizeof(Uint32) == 4) * 2 - 1];
typedef int SDL_dummy_sint32[(sizeof(Sint32) == 4) * 2 - 1];
typedef int SDL_dummy_uint64[(sizeof(Uint64) == 8) * 2 - 1];
typedef int SDL_dummy_sint64[(sizeof(Sint64) == 8) * 2 - 1];
typedef enum {
 DUMMY_ENUM_VALUE
} SDL_DUMMY_ENUM;
typedef int SDL_dummy_enum[(sizeof(SDL_DUMMY_ENUM) == sizeof(int)) * 2 - 1];
extern __attribute__ ((visibility("default"))) void * SDL_revcpy(void *dst, const void *src, size_t len);
extern __attribute__ ((visibility("default"))) size_t SDL_strlcpy(char *dst, const char *src, size_t maxlen);
extern __attribute__ ((visibility("default"))) size_t SDL_strlcat(char *dst, const char *src, size_t maxlen);
extern __attribute__ ((visibility("default"))) char * SDL_strrev(char *string);
extern __attribute__ ((visibility("default"))) char * SDL_strupr(char *string);
extern __attribute__ ((visibility("default"))) char * SDL_strlwr(char *string);
extern __attribute__ ((visibility("default"))) char * SDL_ltoa(long value, char *string, int radix);
extern __attribute__ ((visibility("default"))) char * SDL_ultoa(unsigned long value, char *string, int radix);
extern __attribute__ ((visibility("default"))) char* SDL_lltoa(Sint64 value, char *string, int radix);
extern __attribute__ ((visibility("default"))) char* SDL_ulltoa(Uint64 value, char *string, int radix);
extern __attribute__ ((visibility("default"))) size_t SDL_iconv(iconv_t cd, const char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft);
extern __attribute__ ((visibility("default"))) char * SDL_iconv_string(const char *tocode, const char *fromcode, const char *inbuf, size_t inbytesleft);
extern __attribute__ ((visibility("default"))) void SDL_SetError(const char *fmt, ...);
extern __attribute__ ((visibility("default"))) char * SDL_GetError(void);
extern __attribute__ ((visibility("default"))) void SDL_ClearError(void);
typedef enum {
 SDL_ENOMEM,
 SDL_EFREAD,
 SDL_EFWRITE,
 SDL_EFSEEK,
 SDL_UNSUPPORTED,
 SDL_LASTERROR
} SDL_errorcode;
extern __attribute__ ((visibility("default"))) void SDL_Error(SDL_errorcode code);
static __inline__ Uint16 SDL_Swap16(Uint16 x)
{
 __asm__("xchgb %b0,%h0" : "=Q" (x) : "0" (x));
 return x;
}
static __inline__ Uint32 SDL_Swap32(Uint32 x)
{
 __asm__("bswapl %0" : "=r" (x) : "0" (x));
 return x;
}
static __inline__ Uint64 SDL_Swap64(Uint64 x)
{
 __asm__("bswapq %0" : "=r" (x) : "0" (x));
 return x;
}
struct SDL_mutex;
typedef struct SDL_mutex SDL_mutex;
extern __attribute__ ((visibility("default"))) SDL_mutex * SDL_CreateMutex(void);
extern __attribute__ ((visibility("default"))) int SDL_mutexP(SDL_mutex *mutex);
extern __attribute__ ((visibility("default"))) int SDL_mutexV(SDL_mutex *mutex);
extern __attribute__ ((visibility("default"))) void SDL_DestroyMutex(SDL_mutex *mutex);
struct SDL_semaphore;
typedef struct SDL_semaphore SDL_sem;
extern __attribute__ ((visibility("default"))) SDL_sem * SDL_CreateSemaphore(Uint32 initial_value);
extern __attribute__ ((visibility("default"))) void SDL_DestroySemaphore(SDL_sem *sem);
extern __attribute__ ((visibility("default"))) int SDL_SemWait(SDL_sem *sem);
extern __attribute__ ((visibility("default"))) int SDL_SemTryWait(SDL_sem *sem);
extern __attribute__ ((visibility("default"))) int SDL_SemWaitTimeout(SDL_sem *sem, Uint32 ms);
extern __attribute__ ((visibility("default"))) int SDL_SemPost(SDL_sem *sem);
extern __attribute__ ((visibility("default"))) Uint32 SDL_SemValue(SDL_sem *sem);
struct SDL_cond;
typedef struct SDL_cond SDL_cond;
extern __attribute__ ((visibility("default"))) SDL_cond * SDL_CreateCond(void);
extern __attribute__ ((visibility("default"))) void SDL_DestroyCond(SDL_cond *cond);
extern __attribute__ ((visibility("default"))) int SDL_CondSignal(SDL_cond *cond);
extern __attribute__ ((visibility("default"))) int SDL_CondBroadcast(SDL_cond *cond);
extern __attribute__ ((visibility("default"))) int SDL_CondWait(SDL_cond *cond, SDL_mutex *mut);
extern __attribute__ ((visibility("default"))) int SDL_CondWaitTimeout(SDL_cond *cond, SDL_mutex *mutex, Uint32 ms);
struct SDL_Thread;
typedef struct SDL_Thread SDL_Thread;
extern __attribute__ ((visibility("default"))) SDL_Thread * SDL_CreateThread(int ( *fn)(void *), void *data);
extern __attribute__ ((visibility("default"))) Uint32 SDL_ThreadID(void);
extern __attribute__ ((visibility("default"))) Uint32 SDL_GetThreadID(SDL_Thread *thread);
extern __attribute__ ((visibility("default"))) void SDL_WaitThread(SDL_Thread *thread, int *status);
extern __attribute__ ((visibility("default"))) void SDL_KillThread(SDL_Thread *thread);
typedef struct SDL_RWops {
 int ( *seek)(struct SDL_RWops *context, int offset, int whence);
 int ( *read)(struct SDL_RWops *context, void *ptr, int size, int maxnum);
 int ( *write)(struct SDL_RWops *context, const void *ptr, int size, int num);
 int ( *close)(struct SDL_RWops *context);
 Uint32 type;
 union {
     struct {
  int autoclose;
   FILE *fp;
     } stdio;
     struct {
  Uint8 *base;
   Uint8 *here;
  Uint8 *stop;
     } mem;
     struct {
  void *data1;
     } unknown;
 } hidden;
} SDL_RWops;
extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_RWFromFile(const char *file, const char *mode);
extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_RWFromFP(FILE *fp, int autoclose);
extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_RWFromMem(void *mem, int size);
extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_RWFromConstMem(const void *mem, int size);
extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_AllocRW(void);
extern __attribute__ ((visibility("default"))) void SDL_FreeRW(SDL_RWops *area);
extern __attribute__ ((visibility("default"))) Uint16 SDL_ReadLE16(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) Uint16 SDL_ReadBE16(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) Uint32 SDL_ReadLE32(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) Uint32 SDL_ReadBE32(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) Uint64 SDL_ReadLE64(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) Uint64 SDL_ReadBE64(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int SDL_WriteLE16(SDL_RWops *dst, Uint16 value);
extern __attribute__ ((visibility("default"))) int SDL_WriteBE16(SDL_RWops *dst, Uint16 value);
extern __attribute__ ((visibility("default"))) int SDL_WriteLE32(SDL_RWops *dst, Uint32 value);
extern __attribute__ ((visibility("default"))) int SDL_WriteBE32(SDL_RWops *dst, Uint32 value);
extern __attribute__ ((visibility("default"))) int SDL_WriteLE64(SDL_RWops *dst, Uint64 value);
extern __attribute__ ((visibility("default"))) int SDL_WriteBE64(SDL_RWops *dst, Uint64 value);
typedef struct SDL_AudioSpec {
 int freq;
 Uint16 format;
 Uint8 channels;
 Uint8 silence;
 Uint16 samples;
 Uint16 padding;
 Uint32 size;
 void ( *callback)(void *userdata, Uint8 *stream, int len);
 void *userdata;
} SDL_AudioSpec;
typedef struct SDL_AudioCVT {
 int needed;
 Uint16 src_format;
 Uint16 dst_format;
 double rate_incr;
 Uint8 *buf;
 int len;
 int len_cvt;
 int len_mult;
 double len_ratio;
 void ( *filters[10])(struct SDL_AudioCVT *cvt, Uint16 format);
 int filter_index;
} SDL_AudioCVT;
extern __attribute__ ((visibility("default"))) int SDL_AudioInit(const char *driver_name);
extern __attribute__ ((visibility("default"))) void SDL_AudioQuit(void);
extern __attribute__ ((visibility("default"))) char * SDL_AudioDriverName(char *namebuf, int maxlen);
extern __attribute__ ((visibility("default"))) int SDL_OpenAudio(SDL_AudioSpec *desired, SDL_AudioSpec *obtained);
typedef enum {
 SDL_AUDIO_STOPPED = 0,
 SDL_AUDIO_PLAYING,
 SDL_AUDIO_PAUSED
} SDL_audiostatus;
extern __attribute__ ((visibility("default"))) SDL_audiostatus SDL_GetAudioStatus(void);
extern __attribute__ ((visibility("default"))) void SDL_PauseAudio(int pause_on);
extern __attribute__ ((visibility("default"))) SDL_AudioSpec * SDL_LoadWAV_RW(SDL_RWops *src, int freesrc, SDL_AudioSpec *spec, Uint8 **audio_buf, Uint32 *audio_len);
extern __attribute__ ((visibility("default"))) void SDL_FreeWAV(Uint8 *audio_buf);
extern __attribute__ ((visibility("default"))) int SDL_BuildAudioCVT(SDL_AudioCVT *cvt,
  Uint16 src_format, Uint8 src_channels, int src_rate,
  Uint16 dst_format, Uint8 dst_channels, int dst_rate);
extern __attribute__ ((visibility("default"))) int SDL_ConvertAudio(SDL_AudioCVT *cvt);
extern __attribute__ ((visibility("default"))) void SDL_MixAudio(Uint8 *dst, const Uint8 *src, Uint32 len, int volume);
extern __attribute__ ((visibility("default"))) void SDL_LockAudio(void);
extern __attribute__ ((visibility("default"))) void SDL_UnlockAudio(void);
extern __attribute__ ((visibility("default"))) void SDL_CloseAudio(void);
typedef enum {
 CD_TRAYEMPTY,
 CD_STOPPED,
 CD_PLAYING,
 CD_PAUSED,
 CD_ERROR = -1
} CDstatus;
typedef struct SDL_CDtrack {
 Uint8 id;
 Uint8 type;
 Uint16 unused;
 Uint32 length;
 Uint32 offset;
} SDL_CDtrack;
typedef struct SDL_CD {
 int id;
 CDstatus status;
 int numtracks;
 int cur_track;
 int cur_frame;
 SDL_CDtrack track[99 +1];
} SDL_CD;
extern __attribute__ ((visibility("default"))) int SDL_CDNumDrives(void);
extern __attribute__ ((visibility("default"))) const char * SDL_CDName(int drive);
extern __attribute__ ((visibility("default"))) SDL_CD * SDL_CDOpen(int drive);
extern __attribute__ ((visibility("default"))) CDstatus SDL_CDStatus(SDL_CD *cdrom);
extern __attribute__ ((visibility("default"))) int SDL_CDPlayTracks(SDL_CD *cdrom,
  int start_track, int start_frame, int ntracks, int nframes);
extern __attribute__ ((visibility("default"))) int SDL_CDPlay(SDL_CD *cdrom, int start, int length);
extern __attribute__ ((visibility("default"))) int SDL_CDPause(SDL_CD *cdrom);
extern __attribute__ ((visibility("default"))) int SDL_CDResume(SDL_CD *cdrom);
extern __attribute__ ((visibility("default"))) int SDL_CDStop(SDL_CD *cdrom);
extern __attribute__ ((visibility("default"))) int SDL_CDEject(SDL_CD *cdrom);
extern __attribute__ ((visibility("default"))) void SDL_CDClose(SDL_CD *cdrom);
extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasRDTSC(void);
extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasMMX(void);
extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasMMXExt(void);
extern __attribute__ ((visibility("default"))) SDL_bool SDL_Has3DNow(void);
extern __attribute__ ((visibility("default"))) SDL_bool SDL_Has3DNowExt(void);
extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasSSE(void);
extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasSSE2(void);
extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasAltiVec(void);
extern __attribute__ ((visibility("default"))) Uint8 SDL_GetAppState(void);
typedef enum {
 SDLK_UNKNOWN = 0,
 SDLK_FIRST = 0,
 SDLK_BACKSPACE = 8,
 SDLK_TAB = 9,
 SDLK_CLEAR = 12,
 SDLK_RETURN = 13,
 SDLK_PAUSE = 19,
 SDLK_ESCAPE = 27,
 SDLK_SPACE = 32,
 SDLK_EXCLAIM = 33,
 SDLK_QUOTEDBL = 34,
 SDLK_HASH = 35,
 SDLK_DOLLAR = 36,
 SDLK_AMPERSAND = 38,
 SDLK_QUOTE = 39,
 SDLK_LEFTPAREN = 40,
 SDLK_RIGHTPAREN = 41,
 SDLK_ASTERISK = 42,
 SDLK_PLUS = 43,
 SDLK_COMMA = 44,
 SDLK_MINUS = 45,
 SDLK_PERIOD = 46,
 SDLK_SLASH = 47,
 SDLK_0 = 48,
 SDLK_1 = 49,
 SDLK_2 = 50,
 SDLK_3 = 51,
 SDLK_4 = 52,
 SDLK_5 = 53,
 SDLK_6 = 54,
 SDLK_7 = 55,
 SDLK_8 = 56,
 SDLK_9 = 57,
 SDLK_COLON = 58,
 SDLK_SEMICOLON = 59,
 SDLK_LESS = 60,
 SDLK_EQUALS = 61,
 SDLK_GREATER = 62,
 SDLK_QUESTION = 63,
 SDLK_AT = 64,
 SDLK_LEFTBRACKET = 91,
 SDLK_BACKSLASH = 92,
 SDLK_RIGHTBRACKET = 93,
 SDLK_CARET = 94,
 SDLK_UNDERSCORE = 95,
 SDLK_BACKQUOTE = 96,
 SDLK_a = 97,
 SDLK_b = 98,
 SDLK_c = 99,
 SDLK_d = 100,
 SDLK_e = 101,
 SDLK_f = 102,
 SDLK_g = 103,
 SDLK_h = 104,
 SDLK_i = 105,
 SDLK_j = 106,
 SDLK_k = 107,
 SDLK_l = 108,
 SDLK_m = 109,
 SDLK_n = 110,
 SDLK_o = 111,
 SDLK_p = 112,
 SDLK_q = 113,
 SDLK_r = 114,
 SDLK_s = 115,
 SDLK_t = 116,
 SDLK_u = 117,
 SDLK_v = 118,
 SDLK_w = 119,
 SDLK_x = 120,
 SDLK_y = 121,
 SDLK_z = 122,
 SDLK_DELETE = 127,
 SDLK_WORLD_0 = 160,
 SDLK_WORLD_1 = 161,
 SDLK_WORLD_2 = 162,
 SDLK_WORLD_3 = 163,
 SDLK_WORLD_4 = 164,
 SDLK_WORLD_5 = 165,
 SDLK_WORLD_6 = 166,
 SDLK_WORLD_7 = 167,
 SDLK_WORLD_8 = 168,
 SDLK_WORLD_9 = 169,
 SDLK_WORLD_10 = 170,
 SDLK_WORLD_11 = 171,
 SDLK_WORLD_12 = 172,
 SDLK_WORLD_13 = 173,
 SDLK_WORLD_14 = 174,
 SDLK_WORLD_15 = 175,
 SDLK_WORLD_16 = 176,
 SDLK_WORLD_17 = 177,
 SDLK_WORLD_18 = 178,
 SDLK_WORLD_19 = 179,
 SDLK_WORLD_20 = 180,
 SDLK_WORLD_21 = 181,
 SDLK_WORLD_22 = 182,
 SDLK_WORLD_23 = 183,
 SDLK_WORLD_24 = 184,
 SDLK_WORLD_25 = 185,
 SDLK_WORLD_26 = 186,
 SDLK_WORLD_27 = 187,
 SDLK_WORLD_28 = 188,
 SDLK_WORLD_29 = 189,
 SDLK_WORLD_30 = 190,
 SDLK_WORLD_31 = 191,
 SDLK_WORLD_32 = 192,
 SDLK_WORLD_33 = 193,
 SDLK_WORLD_34 = 194,
 SDLK_WORLD_35 = 195,
 SDLK_WORLD_36 = 196,
 SDLK_WORLD_37 = 197,
 SDLK_WORLD_38 = 198,
 SDLK_WORLD_39 = 199,
 SDLK_WORLD_40 = 200,
 SDLK_WORLD_41 = 201,
 SDLK_WORLD_42 = 202,
 SDLK_WORLD_43 = 203,
 SDLK_WORLD_44 = 204,
 SDLK_WORLD_45 = 205,
 SDLK_WORLD_46 = 206,
 SDLK_WORLD_47 = 207,
 SDLK_WORLD_48 = 208,
 SDLK_WORLD_49 = 209,
 SDLK_WORLD_50 = 210,
 SDLK_WORLD_51 = 211,
 SDLK_WORLD_52 = 212,
 SDLK_WORLD_53 = 213,
 SDLK_WORLD_54 = 214,
 SDLK_WORLD_55 = 215,
 SDLK_WORLD_56 = 216,
 SDLK_WORLD_57 = 217,
 SDLK_WORLD_58 = 218,
 SDLK_WORLD_59 = 219,
 SDLK_WORLD_60 = 220,
 SDLK_WORLD_61 = 221,
 SDLK_WORLD_62 = 222,
 SDLK_WORLD_63 = 223,
 SDLK_WORLD_64 = 224,
 SDLK_WORLD_65 = 225,
 SDLK_WORLD_66 = 226,
 SDLK_WORLD_67 = 227,
 SDLK_WORLD_68 = 228,
 SDLK_WORLD_69 = 229,
 SDLK_WORLD_70 = 230,
 SDLK_WORLD_71 = 231,
 SDLK_WORLD_72 = 232,
 SDLK_WORLD_73 = 233,
 SDLK_WORLD_74 = 234,
 SDLK_WORLD_75 = 235,
 SDLK_WORLD_76 = 236,
 SDLK_WORLD_77 = 237,
 SDLK_WORLD_78 = 238,
 SDLK_WORLD_79 = 239,
 SDLK_WORLD_80 = 240,
 SDLK_WORLD_81 = 241,
 SDLK_WORLD_82 = 242,
 SDLK_WORLD_83 = 243,
 SDLK_WORLD_84 = 244,
 SDLK_WORLD_85 = 245,
 SDLK_WORLD_86 = 246,
 SDLK_WORLD_87 = 247,
 SDLK_WORLD_88 = 248,
 SDLK_WORLD_89 = 249,
 SDLK_WORLD_90 = 250,
 SDLK_WORLD_91 = 251,
 SDLK_WORLD_92 = 252,
 SDLK_WORLD_93 = 253,
 SDLK_WORLD_94 = 254,
 SDLK_WORLD_95 = 255,
 SDLK_KP0 = 256,
 SDLK_KP1 = 257,
 SDLK_KP2 = 258,
 SDLK_KP3 = 259,
 SDLK_KP4 = 260,
 SDLK_KP5 = 261,
 SDLK_KP6 = 262,
 SDLK_KP7 = 263,
 SDLK_KP8 = 264,
 SDLK_KP9 = 265,
 SDLK_KP_PERIOD = 266,
 SDLK_KP_DIVIDE = 267,
 SDLK_KP_MULTIPLY = 268,
 SDLK_KP_MINUS = 269,
 SDLK_KP_PLUS = 270,
 SDLK_KP_ENTER = 271,
 SDLK_KP_EQUALS = 272,
 SDLK_UP = 273,
 SDLK_DOWN = 274,
 SDLK_RIGHT = 275,
 SDLK_LEFT = 276,
 SDLK_INSERT = 277,
 SDLK_HOME = 278,
 SDLK_END = 279,
 SDLK_PAGEUP = 280,
 SDLK_PAGEDOWN = 281,
 SDLK_F1 = 282,
 SDLK_F2 = 283,
 SDLK_F3 = 284,
 SDLK_F4 = 285,
 SDLK_F5 = 286,
 SDLK_F6 = 287,
 SDLK_F7 = 288,
 SDLK_F8 = 289,
 SDLK_F9 = 290,
 SDLK_F10 = 291,
 SDLK_F11 = 292,
 SDLK_F12 = 293,
 SDLK_F13 = 294,
 SDLK_F14 = 295,
 SDLK_F15 = 296,
 SDLK_NUMLOCK = 300,
 SDLK_CAPSLOCK = 301,
 SDLK_SCROLLOCK = 302,
 SDLK_RSHIFT = 303,
 SDLK_LSHIFT = 304,
 SDLK_RCTRL = 305,
 SDLK_LCTRL = 306,
 SDLK_RALT = 307,
 SDLK_LALT = 308,
 SDLK_RMETA = 309,
 SDLK_LMETA = 310,
 SDLK_LSUPER = 311,
 SDLK_RSUPER = 312,
 SDLK_MODE = 313,
 SDLK_COMPOSE = 314,
 SDLK_HELP = 315,
 SDLK_PRINT = 316,
 SDLK_SYSREQ = 317,
 SDLK_BREAK = 318,
 SDLK_MENU = 319,
 SDLK_POWER = 320,
 SDLK_EURO = 321,
 SDLK_UNDO = 322,
 SDLK_LAST
} SDLKey;
typedef enum {
 KMOD_NONE = 0x0000,
 KMOD_LSHIFT= 0x0001,
 KMOD_RSHIFT= 0x0002,
 KMOD_LCTRL = 0x0040,
 KMOD_RCTRL = 0x0080,
 KMOD_LALT = 0x0100,
 KMOD_RALT = 0x0200,
 KMOD_LMETA = 0x0400,
 KMOD_RMETA = 0x0800,
 KMOD_NUM = 0x1000,
 KMOD_CAPS = 0x2000,
 KMOD_MODE = 0x4000,
 KMOD_RESERVED = 0x8000
} SDLMod;
typedef struct SDL_keysym {
 Uint8 scancode;
 SDLKey sym;
 SDLMod mod;
 Uint16 unicode;
} SDL_keysym;
extern __attribute__ ((visibility("default"))) int SDL_EnableUNICODE(int enable);
extern __attribute__ ((visibility("default"))) int SDL_EnableKeyRepeat(int delay, int interval);
extern __attribute__ ((visibility("default"))) void SDL_GetKeyRepeat(int *delay, int *interval);
extern __attribute__ ((visibility("default"))) Uint8 * SDL_GetKeyState(int *numkeys);
extern __attribute__ ((visibility("default"))) SDLMod SDL_GetModState(void);
extern __attribute__ ((visibility("default"))) void SDL_SetModState(SDLMod modstate);
extern __attribute__ ((visibility("default"))) char * SDL_GetKeyName(SDLKey key);
typedef struct SDL_Rect {
 Sint16 x, y;
 Uint16 w, h;
} SDL_Rect;
typedef struct SDL_Color {
 Uint8 r;
 Uint8 g;
 Uint8 b;
 Uint8 unused;
} SDL_Color;
typedef struct SDL_Palette {
 int ncolors;
 SDL_Color *colors;
} SDL_Palette;
typedef struct SDL_PixelFormat {
 SDL_Palette *palette;
 Uint8 BitsPerPixel;
 Uint8 BytesPerPixel;
 Uint8 Rloss;
 Uint8 Gloss;
 Uint8 Bloss;
 Uint8 Aloss;
 Uint8 Rshift;
 Uint8 Gshift;
 Uint8 Bshift;
 Uint8 Ashift;
 Uint32 Rmask;
 Uint32 Gmask;
 Uint32 Bmask;
 Uint32 Amask;
 Uint32 colorkey;
 Uint8 alpha;
} SDL_PixelFormat;
typedef struct SDL_Surface {
 Uint32 flags;
 SDL_PixelFormat *format;
 int w, h;
 Uint16 pitch;
 void *pixels;
 int offset;
 struct private_hwdata *hwdata;
 SDL_Rect clip_rect;
 Uint32 unused1;
 Uint32 locked;
 struct SDL_BlitMap *map;
 unsigned int format_version;
 int refcount;
} SDL_Surface;
typedef int (*SDL_blit)(struct SDL_Surface *src, SDL_Rect *srcrect,
   struct SDL_Surface *dst, SDL_Rect *dstrect);
typedef struct SDL_VideoInfo {
 Uint32 hw_available :1;
 Uint32 wm_available :1;
 Uint32 UnusedBits1 :6;
 Uint32 UnusedBits2 :1;
 Uint32 blit_hw :1;
 Uint32 blit_hw_CC :1;
 Uint32 blit_hw_A :1;
 Uint32 blit_sw :1;
 Uint32 blit_sw_CC :1;
 Uint32 blit_sw_A :1;
 Uint32 blit_fill :1;
 Uint32 UnusedBits3 :16;
 Uint32 video_mem;
 SDL_PixelFormat *vfmt;
 int current_w;
 int current_h;
} SDL_VideoInfo;
typedef struct SDL_Overlay {
 Uint32 format;
 int w, h;
 int planes;
 Uint16 *pitches;
 Uint8 **pixels;
 struct private_yuvhwfuncs *hwfuncs;
 struct private_yuvhwdata *hwdata;
 Uint32 hw_overlay :1;
 Uint32 UnusedBits :31;
} SDL_Overlay;
typedef enum {
    SDL_GL_RED_SIZE,
    SDL_GL_GREEN_SIZE,
    SDL_GL_BLUE_SIZE,
    SDL_GL_ALPHA_SIZE,
    SDL_GL_BUFFER_SIZE,
    SDL_GL_DOUBLEBUFFER,
    SDL_GL_DEPTH_SIZE,
    SDL_GL_STENCIL_SIZE,
    SDL_GL_ACCUM_RED_SIZE,
    SDL_GL_ACCUM_GREEN_SIZE,
    SDL_GL_ACCUM_BLUE_SIZE,
    SDL_GL_ACCUM_ALPHA_SIZE,
    SDL_GL_STEREO,
    SDL_GL_MULTISAMPLEBUFFERS,
    SDL_GL_MULTISAMPLESAMPLES,
    SDL_GL_ACCELERATED_VISUAL,
    SDL_GL_SWAP_CONTROL
} SDL_GLattr;
extern __attribute__ ((visibility("default"))) int SDL_VideoInit(const char *driver_name, Uint32 flags);
extern __attribute__ ((visibility("default"))) void SDL_VideoQuit(void);
extern __attribute__ ((visibility("default"))) char * SDL_VideoDriverName(char *namebuf, int maxlen);
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_GetVideoSurface(void);
extern __attribute__ ((visibility("default"))) const SDL_VideoInfo * SDL_GetVideoInfo(void);
extern __attribute__ ((visibility("default"))) int SDL_VideoModeOK(int width, int height, int bpp, Uint32 flags);
extern __attribute__ ((visibility("default"))) SDL_Rect ** SDL_ListModes(SDL_PixelFormat *format, Uint32 flags);
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_SetVideoMode
   (int width, int height, int bpp, Uint32 flags);
extern __attribute__ ((visibility("default"))) void SDL_UpdateRects
  (SDL_Surface *screen, int numrects, SDL_Rect *rects);
extern __attribute__ ((visibility("default"))) void SDL_UpdateRect
  (SDL_Surface *screen, Sint32 x, Sint32 y, Uint32 w, Uint32 h);
extern __attribute__ ((visibility("default"))) int SDL_Flip(SDL_Surface *screen);
extern __attribute__ ((visibility("default"))) int SDL_SetGamma(float red, float green, float blue);
extern __attribute__ ((visibility("default"))) int SDL_SetGammaRamp(const Uint16 *red, const Uint16 *green, const Uint16 *blue);
extern __attribute__ ((visibility("default"))) int SDL_GetGammaRamp(Uint16 *red, Uint16 *green, Uint16 *blue);
extern __attribute__ ((visibility("default"))) int SDL_SetColors(SDL_Surface *surface,
   SDL_Color *colors, int firstcolor, int ncolors);
extern __attribute__ ((visibility("default"))) int SDL_SetPalette(SDL_Surface *surface, int flags,
       SDL_Color *colors, int firstcolor,
       int ncolors);
extern __attribute__ ((visibility("default"))) Uint32 SDL_MapRGB
(const SDL_PixelFormat * const format,
 const Uint8 r, const Uint8 g, const Uint8 b);
extern __attribute__ ((visibility("default"))) Uint32 SDL_MapRGBA
(const SDL_PixelFormat * const format,
 const Uint8 r, const Uint8 g, const Uint8 b, const Uint8 a);
extern __attribute__ ((visibility("default"))) void SDL_GetRGB(Uint32 pixel,
    const SDL_PixelFormat * const fmt,
    Uint8 *r, Uint8 *g, Uint8 *b);
extern __attribute__ ((visibility("default"))) void SDL_GetRGBA(Uint32 pixel,
    const SDL_PixelFormat * const fmt,
    Uint8 *r, Uint8 *g, Uint8 *b, Uint8 *a);
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_CreateRGBSurface
   (Uint32 flags, int width, int height, int depth,
   Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask);
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_CreateRGBSurfaceFrom(void *pixels,
   int width, int height, int depth, int pitch,
   Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask);
extern __attribute__ ((visibility("default"))) void SDL_FreeSurface(SDL_Surface *surface);
extern __attribute__ ((visibility("default"))) int SDL_LockSurface(SDL_Surface *surface);
extern __attribute__ ((visibility("default"))) void SDL_UnlockSurface(SDL_Surface *surface);
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_LoadBMP_RW(SDL_RWops *src, int freesrc);
extern __attribute__ ((visibility("default"))) int SDL_SaveBMP_RW
  (SDL_Surface *surface, SDL_RWops *dst, int freedst);
extern __attribute__ ((visibility("default"))) int SDL_SetColorKey
   (SDL_Surface *surface, Uint32 flag, Uint32 key);
extern __attribute__ ((visibility("default"))) int SDL_SetAlpha(SDL_Surface *surface, Uint32 flag, Uint8 alpha);
extern __attribute__ ((visibility("default"))) SDL_bool SDL_SetClipRect(SDL_Surface *surface, const SDL_Rect *rect);
extern __attribute__ ((visibility("default"))) void SDL_GetClipRect(SDL_Surface *surface, SDL_Rect *rect);
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_ConvertSurface
   (SDL_Surface *src, SDL_PixelFormat *fmt, Uint32 flags);
extern __attribute__ ((visibility("default"))) int SDL_UpperBlit
   (SDL_Surface *src, SDL_Rect *srcrect,
    SDL_Surface *dst, SDL_Rect *dstrect);
extern __attribute__ ((visibility("default"))) int SDL_LowerBlit
   (SDL_Surface *src, SDL_Rect *srcrect,
    SDL_Surface *dst, SDL_Rect *dstrect);
extern __attribute__ ((visibility("default"))) int SDL_FillRect
  (SDL_Surface *dst, SDL_Rect *dstrect, Uint32 color);
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_DisplayFormat(SDL_Surface *surface);
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_DisplayFormatAlpha(SDL_Surface *surface);
extern __attribute__ ((visibility("default"))) SDL_Overlay * SDL_CreateYUVOverlay(int width, int height,
    Uint32 format, SDL_Surface *display);
extern __attribute__ ((visibility("default"))) int SDL_LockYUVOverlay(SDL_Overlay *overlay);
extern __attribute__ ((visibility("default"))) void SDL_UnlockYUVOverlay(SDL_Overlay *overlay);
extern __attribute__ ((visibility("default"))) int SDL_DisplayYUVOverlay(SDL_Overlay *overlay, SDL_Rect *dstrect);
extern __attribute__ ((visibility("default"))) void SDL_FreeYUVOverlay(SDL_Overlay *overlay);
extern __attribute__ ((visibility("default"))) int SDL_GL_LoadLibrary(const char *path);
extern __attribute__ ((visibility("default"))) void * SDL_GL_GetProcAddress(const char* proc);
extern __attribute__ ((visibility("default"))) int SDL_GL_SetAttribute(SDL_GLattr attr, int value);
extern __attribute__ ((visibility("default"))) int SDL_GL_GetAttribute(SDL_GLattr attr, int* value);
extern __attribute__ ((visibility("default"))) void SDL_GL_SwapBuffers(void);
extern __attribute__ ((visibility("default"))) void SDL_GL_UpdateRects(int numrects, SDL_Rect* rects);
extern __attribute__ ((visibility("default"))) void SDL_GL_Lock(void);
extern __attribute__ ((visibility("default"))) void SDL_GL_Unlock(void);
extern __attribute__ ((visibility("default"))) void SDL_WM_SetCaption(const char *title, const char *icon);
extern __attribute__ ((visibility("default"))) void SDL_WM_GetCaption(char **title, char **icon);
extern __attribute__ ((visibility("default"))) void SDL_WM_SetIcon(SDL_Surface *icon, Uint8 *mask);
extern __attribute__ ((visibility("default"))) int SDL_WM_IconifyWindow(void);
extern __attribute__ ((visibility("default"))) int SDL_WM_ToggleFullScreen(SDL_Surface *surface);
typedef enum {
 SDL_GRAB_QUERY = -1,
 SDL_GRAB_OFF = 0,
 SDL_GRAB_ON = 1,
 SDL_GRAB_FULLSCREEN
} SDL_GrabMode;
extern __attribute__ ((visibility("default"))) SDL_GrabMode SDL_WM_GrabInput(SDL_GrabMode mode);
extern __attribute__ ((visibility("default"))) int SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect,
                                    SDL_Surface *dst, SDL_Rect *dstrect);
typedef struct WMcursor WMcursor;
typedef struct SDL_Cursor {
 SDL_Rect area;
 Sint16 hot_x, hot_y;
 Uint8 *data;
 Uint8 *mask;
 Uint8 *save[2];
 WMcursor *wm_cursor;
} SDL_Cursor;
extern __attribute__ ((visibility("default"))) Uint8 SDL_GetMouseState(int *x, int *y);
extern __attribute__ ((visibility("default"))) Uint8 SDL_GetRelativeMouseState(int *x, int *y);
extern __attribute__ ((visibility("default"))) void SDL_WarpMouse(Uint16 x, Uint16 y);
extern __attribute__ ((visibility("default"))) SDL_Cursor * SDL_CreateCursor
  (Uint8 *data, Uint8 *mask, int w, int h, int hot_x, int hot_y);
extern __attribute__ ((visibility("default"))) void SDL_SetCursor(SDL_Cursor *cursor);
extern __attribute__ ((visibility("default"))) SDL_Cursor * SDL_GetCursor(void);
extern __attribute__ ((visibility("default"))) void SDL_FreeCursor(SDL_Cursor *cursor);
extern __attribute__ ((visibility("default"))) int SDL_ShowCursor(int toggle);
struct _SDL_Joystick;
typedef struct _SDL_Joystick SDL_Joystick;
extern __attribute__ ((visibility("default"))) int SDL_NumJoysticks(void);
extern __attribute__ ((visibility("default"))) const char * SDL_JoystickName(int device_index);
extern __attribute__ ((visibility("default"))) SDL_Joystick * SDL_JoystickOpen(int device_index);
extern __attribute__ ((visibility("default"))) int SDL_JoystickOpened(int device_index);
extern __attribute__ ((visibility("default"))) int SDL_JoystickIndex(SDL_Joystick *joystick);
extern __attribute__ ((visibility("default"))) int SDL_JoystickNumAxes(SDL_Joystick *joystick);
extern __attribute__ ((visibility("default"))) int SDL_JoystickNumBalls(SDL_Joystick *joystick);
extern __attribute__ ((visibility("default"))) int SDL_JoystickNumHats(SDL_Joystick *joystick);
extern __attribute__ ((visibility("default"))) int SDL_JoystickNumButtons(SDL_Joystick *joystick);
extern __attribute__ ((visibility("default"))) void SDL_JoystickUpdate(void);
extern __attribute__ ((visibility("default"))) int SDL_JoystickEventState(int state);
extern __attribute__ ((visibility("default"))) Sint16 SDL_JoystickGetAxis(SDL_Joystick *joystick, int axis);
extern __attribute__ ((visibility("default"))) Uint8 SDL_JoystickGetHat(SDL_Joystick *joystick, int hat);
extern __attribute__ ((visibility("default"))) int SDL_JoystickGetBall(SDL_Joystick *joystick, int ball, int *dx, int *dy);
extern __attribute__ ((visibility("default"))) Uint8 SDL_JoystickGetButton(SDL_Joystick *joystick, int button);
extern __attribute__ ((visibility("default"))) void SDL_JoystickClose(SDL_Joystick *joystick);
typedef enum {
       SDL_NOEVENT = 0,
       SDL_ACTIVEEVENT,
       SDL_KEYDOWN,
       SDL_KEYUP,
       SDL_MOUSEMOTION,
       SDL_MOUSEBUTTONDOWN,
       SDL_MOUSEBUTTONUP,
       SDL_JOYAXISMOTION,
       SDL_JOYBALLMOTION,
       SDL_JOYHATMOTION,
       SDL_JOYBUTTONDOWN,
       SDL_JOYBUTTONUP,
       SDL_QUIT,
       SDL_SYSWMEVENT,
       SDL_EVENT_RESERVEDA,
       SDL_EVENT_RESERVEDB,
       SDL_VIDEORESIZE,
       SDL_VIDEOEXPOSE,
       SDL_EVENT_RESERVED2,
       SDL_EVENT_RESERVED3,
       SDL_EVENT_RESERVED4,
       SDL_EVENT_RESERVED5,
       SDL_EVENT_RESERVED6,
       SDL_EVENT_RESERVED7,
       SDL_USEREVENT = 24,
       SDL_NUMEVENTS = 32
} SDL_EventType;
typedef enum {
 SDL_ACTIVEEVENTMASK = (1<<(SDL_ACTIVEEVENT)),
 SDL_KEYDOWNMASK = (1<<(SDL_KEYDOWN)),
 SDL_KEYUPMASK = (1<<(SDL_KEYUP)),
 SDL_KEYEVENTMASK = (1<<(SDL_KEYDOWN))|
                           (1<<(SDL_KEYUP)),
 SDL_MOUSEMOTIONMASK = (1<<(SDL_MOUSEMOTION)),
 SDL_MOUSEBUTTONDOWNMASK = (1<<(SDL_MOUSEBUTTONDOWN)),
 SDL_MOUSEBUTTONUPMASK = (1<<(SDL_MOUSEBUTTONUP)),
 SDL_MOUSEEVENTMASK = (1<<(SDL_MOUSEMOTION))|
                           (1<<(SDL_MOUSEBUTTONDOWN))|
                           (1<<(SDL_MOUSEBUTTONUP)),
 SDL_JOYAXISMOTIONMASK = (1<<(SDL_JOYAXISMOTION)),
 SDL_JOYBALLMOTIONMASK = (1<<(SDL_JOYBALLMOTION)),
 SDL_JOYHATMOTIONMASK = (1<<(SDL_JOYHATMOTION)),
 SDL_JOYBUTTONDOWNMASK = (1<<(SDL_JOYBUTTONDOWN)),
 SDL_JOYBUTTONUPMASK = (1<<(SDL_JOYBUTTONUP)),
 SDL_JOYEVENTMASK = (1<<(SDL_JOYAXISMOTION))|
                           (1<<(SDL_JOYBALLMOTION))|
                           (1<<(SDL_JOYHATMOTION))|
                           (1<<(SDL_JOYBUTTONDOWN))|
                           (1<<(SDL_JOYBUTTONUP)),
 SDL_VIDEORESIZEMASK = (1<<(SDL_VIDEORESIZE)),
 SDL_VIDEOEXPOSEMASK = (1<<(SDL_VIDEOEXPOSE)),
 SDL_QUITMASK = (1<<(SDL_QUIT)),
 SDL_SYSWMEVENTMASK = (1<<(SDL_SYSWMEVENT))
} SDL_EventMask ;
typedef struct SDL_ActiveEvent {
 Uint8 type;
 Uint8 gain;
 Uint8 state;
} SDL_ActiveEvent;
typedef struct SDL_KeyboardEvent {
 Uint8 type;
 Uint8 which;
 Uint8 state;
 SDL_keysym keysym;
} SDL_KeyboardEvent;
typedef struct SDL_MouseMotionEvent {
 Uint8 type;
 Uint8 which;
 Uint8 state;
 Uint16 x, y;
 Sint16 xrel;
 Sint16 yrel;
} SDL_MouseMotionEvent;
typedef struct SDL_MouseButtonEvent {
 Uint8 type;
 Uint8 which;
 Uint8 button;
 Uint8 state;
 Uint16 x, y;
} SDL_MouseButtonEvent;
typedef struct SDL_JoyAxisEvent {
 Uint8 type;
 Uint8 which;
 Uint8 axis;
 Sint16 value;
} SDL_JoyAxisEvent;
typedef struct SDL_JoyBallEvent {
 Uint8 type;
 Uint8 which;
 Uint8 ball;
 Sint16 xrel;
 Sint16 yrel;
} SDL_JoyBallEvent;
typedef struct SDL_JoyHatEvent {
 Uint8 type;
 Uint8 which;
 Uint8 hat;
 Uint8 value;
} SDL_JoyHatEvent;
typedef struct SDL_JoyButtonEvent {
 Uint8 type;
 Uint8 which;
 Uint8 button;
 Uint8 state;
} SDL_JoyButtonEvent;
typedef struct SDL_ResizeEvent {
 Uint8 type;
 int w;
 int h;
} SDL_ResizeEvent;
typedef struct SDL_ExposeEvent {
 Uint8 type;
} SDL_ExposeEvent;
typedef struct SDL_QuitEvent {
 Uint8 type;
} SDL_QuitEvent;
typedef struct SDL_UserEvent {
 Uint8 type;
 int code;
 void *data1;
 void *data2;
} SDL_UserEvent;
struct SDL_SysWMmsg;
typedef struct SDL_SysWMmsg SDL_SysWMmsg;
typedef struct SDL_SysWMEvent {
 Uint8 type;
 SDL_SysWMmsg *msg;
} SDL_SysWMEvent;
typedef union SDL_Event {
 Uint8 type;
 SDL_ActiveEvent active;
 SDL_KeyboardEvent key;
 SDL_MouseMotionEvent motion;
 SDL_MouseButtonEvent button;
 SDL_JoyAxisEvent jaxis;
 SDL_JoyBallEvent jball;
 SDL_JoyHatEvent jhat;
 SDL_JoyButtonEvent jbutton;
 SDL_ResizeEvent resize;
 SDL_ExposeEvent expose;
 SDL_QuitEvent quit;
 SDL_UserEvent user;
 SDL_SysWMEvent syswm;
} SDL_Event;
extern __attribute__ ((visibility("default"))) void SDL_PumpEvents(void);
typedef enum {
 SDL_ADDEVENT,
 SDL_PEEKEVENT,
 SDL_GETEVENT
} SDL_eventaction;
extern __attribute__ ((visibility("default"))) int SDL_PeepEvents(SDL_Event *events, int numevents,
    SDL_eventaction action, Uint32 mask);
extern __attribute__ ((visibility("default"))) int SDL_PollEvent(SDL_Event *event);
extern __attribute__ ((visibility("default"))) int SDL_WaitEvent(SDL_Event *event);
extern __attribute__ ((visibility("default"))) int SDL_PushEvent(SDL_Event *event);
typedef int ( *SDL_EventFilter)(const SDL_Event *event);
extern __attribute__ ((visibility("default"))) void SDL_SetEventFilter(SDL_EventFilter filter);
extern __attribute__ ((visibility("default"))) SDL_EventFilter SDL_GetEventFilter(void);
extern __attribute__ ((visibility("default"))) Uint8 SDL_EventState(Uint8 type, int state);
extern __attribute__ ((visibility("default"))) void * SDL_LoadObject(const char *sofile);
extern __attribute__ ((visibility("default"))) void * SDL_LoadFunction(void *handle, const char *name);
extern __attribute__ ((visibility("default"))) void SDL_UnloadObject(void *handle);
extern __attribute__ ((visibility("default"))) Uint32 SDL_GetTicks(void);
extern __attribute__ ((visibility("default"))) void SDL_Delay(Uint32 ms);
typedef Uint32 ( *SDL_TimerCallback)(Uint32 interval);
extern __attribute__ ((visibility("default"))) int SDL_SetTimer(Uint32 interval, SDL_TimerCallback callback);
typedef Uint32 ( *SDL_NewTimerCallback)(Uint32 interval, void *param);
typedef struct _SDL_TimerID *SDL_TimerID;
extern __attribute__ ((visibility("default"))) SDL_TimerID SDL_AddTimer(Uint32 interval, SDL_NewTimerCallback callback, void *param);
extern __attribute__ ((visibility("default"))) SDL_bool SDL_RemoveTimer(SDL_TimerID t);
typedef struct SDL_version {
 Uint8 major;
 Uint8 minor;
 Uint8 patch;
} SDL_version;
extern __attribute__ ((visibility("default"))) const SDL_version * SDL_Linked_Version(void);
extern __attribute__ ((visibility("default"))) int SDL_Init(Uint32 flags);
extern __attribute__ ((visibility("default"))) int SDL_InitSubSystem(Uint32 flags);
extern __attribute__ ((visibility("default"))) void SDL_QuitSubSystem(Uint32 flags);
extern __attribute__ ((visibility("default"))) Uint32 SDL_WasInit(Uint32 flags);
extern __attribute__ ((visibility("default"))) void SDL_Quit(void);
typedef int32_t khronos_int32_t;
typedef uint32_t khronos_uint32_t;
typedef int64_t khronos_int64_t;
typedef uint64_t khronos_uint64_t;
typedef signed char khronos_int8_t;
typedef unsigned char khronos_uint8_t;
typedef signed short int khronos_int16_t;
typedef unsigned short int khronos_uint16_t;
typedef signed long int khronos_intptr_t;
typedef unsigned long int khronos_uintptr_t;
typedef signed long int khronos_ssize_t;
typedef unsigned long int khronos_usize_t;
typedef float khronos_float_t;
typedef khronos_uint64_t khronos_utime_nanoseconds_t;
typedef khronos_int64_t khronos_stime_nanoseconds_t;
typedef enum {
    KHRONOS_FALSE = 0,
    KHRONOS_TRUE = 1,
    KHRONOS_BOOLEAN_ENUM_FORCE_SIZE = 0x7FFFFFFF
} khronos_boolean_enum_t;
typedef void GLvoid;
typedef char GLchar;
typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef khronos_int8_t GLbyte;
typedef short GLshort;
typedef int GLint;
typedef int GLsizei;
typedef khronos_uint8_t GLubyte;
typedef unsigned short GLushort;
typedef unsigned int GLuint;
typedef khronos_float_t GLfloat;
typedef khronos_float_t GLclampf;
typedef khronos_int32_t GLfixed;
typedef khronos_intptr_t GLintptr;
typedef khronos_ssize_t GLsizeiptr;
__attribute__((visibility("default"))) void glActiveTexture (GLenum texture);
__attribute__((visibility("default"))) void glAttachShader (GLuint program, GLuint shader);
__attribute__((visibility("default"))) void glBindAttribLocation (GLuint program, GLuint index, const GLchar* name);
__attribute__((visibility("default"))) void glBindBuffer (GLenum target, GLuint buffer);
__attribute__((visibility("default"))) void glBindFramebuffer (GLenum target, GLuint framebuffer);
__attribute__((visibility("default"))) void glBindRenderbuffer (GLenum target, GLuint renderbuffer);
__attribute__((visibility("default"))) void glBindTexture (GLenum target, GLuint texture);
__attribute__((visibility("default"))) void glBlendColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
__attribute__((visibility("default"))) void glBlendEquation ( GLenum mode );
__attribute__((visibility("default"))) void glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha);
__attribute__((visibility("default"))) void glBlendFunc (GLenum sfactor, GLenum dfactor);
__attribute__((visibility("default"))) void glBlendFuncSeparate (GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
__attribute__((visibility("default"))) void glBufferData (GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
__attribute__((visibility("default"))) void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
__attribute__((visibility("default"))) GLenum glCheckFramebufferStatus (GLenum target);
__attribute__((visibility("default"))) void glClear (GLbitfield mask);
__attribute__((visibility("default"))) void glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
__attribute__((visibility("default"))) void glClearDepthf (GLclampf depth);
__attribute__((visibility("default"))) void glClearStencil (GLint s);
__attribute__((visibility("default"))) void glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
__attribute__((visibility("default"))) void glCompileShader (GLuint shader);
__attribute__((visibility("default"))) void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
__attribute__((visibility("default"))) void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
__attribute__((visibility("default"))) void glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
__attribute__((visibility("default"))) void glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
__attribute__((visibility("default"))) GLuint glCreateProgram (void);
__attribute__((visibility("default"))) GLuint glCreateShader (GLenum type);
__attribute__((visibility("default"))) void glCullFace (GLenum mode);
__attribute__((visibility("default"))) void glDeleteBuffers (GLsizei n, const GLuint* buffers);
__attribute__((visibility("default"))) void glDeleteFramebuffers (GLsizei n, const GLuint* framebuffers);
__attribute__((visibility("default"))) void glDeleteProgram (GLuint program);
__attribute__((visibility("default"))) void glDeleteRenderbuffers (GLsizei n, const GLuint* renderbuffers);
__attribute__((visibility("default"))) void glDeleteShader (GLuint shader);
__attribute__((visibility("default"))) void glDeleteTextures (GLsizei n, const GLuint* textures);
__attribute__((visibility("default"))) void glDepthFunc (GLenum func);
__attribute__((visibility("default"))) void glDepthMask (GLboolean flag);
__attribute__((visibility("default"))) void glDepthRangef (GLclampf zNear, GLclampf zFar);
__attribute__((visibility("default"))) void glDetachShader (GLuint program, GLuint shader);
__attribute__((visibility("default"))) void glDisable (GLenum cap);
__attribute__((visibility("default"))) void glDisableVertexAttribArray (GLuint index);
__attribute__((visibility("default"))) void glDrawArrays (GLenum mode, GLint first, GLsizei count);
__attribute__((visibility("default"))) void glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid* indices);
__attribute__((visibility("default"))) void glEnable (GLenum cap);
__attribute__((visibility("default"))) void glEnableVertexAttribArray (GLuint index);
__attribute__((visibility("default"))) void glFinish (void);
__attribute__((visibility("default"))) void glFlush (void);
__attribute__((visibility("default"))) void glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
__attribute__((visibility("default"))) void glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
__attribute__((visibility("default"))) void glFrontFace (GLenum mode);
__attribute__((visibility("default"))) void glGenBuffers (GLsizei n, GLuint* buffers);
__attribute__((visibility("default"))) void glGenerateMipmap (GLenum target);
__attribute__((visibility("default"))) void glGenFramebuffers (GLsizei n, GLuint* framebuffers);
__attribute__((visibility("default"))) void glGenRenderbuffers (GLsizei n, GLuint* renderbuffers);
__attribute__((visibility("default"))) void glGenTextures (GLsizei n, GLuint* textures);
__attribute__((visibility("default"))) void glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
__attribute__((visibility("default"))) void glGetActiveUniform (GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
__attribute__((visibility("default"))) void glGetAttachedShaders (GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders);
__attribute__((visibility("default"))) int glGetAttribLocation (GLuint program, const GLchar* name);
__attribute__((visibility("default"))) void glGetBooleanv (GLenum pname, GLboolean* params);
__attribute__((visibility("default"))) void glGetBufferParameteriv (GLenum target, GLenum pname, GLint* params);
__attribute__((visibility("default"))) GLenum glGetError (void);
__attribute__((visibility("default"))) void glGetFloatv (GLenum pname, GLfloat* params);
__attribute__((visibility("default"))) void glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint* params);
__attribute__((visibility("default"))) void glGetIntegerv (GLenum pname, GLint* params);
__attribute__((visibility("default"))) void glGetProgramiv (GLuint program, GLenum pname, GLint* params);
__attribute__((visibility("default"))) void glGetProgramInfoLog (GLuint program, GLsizei bufsize, GLsizei* length, GLchar* infolog);
__attribute__((visibility("default"))) void glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint* params);
__attribute__((visibility("default"))) void glGetShaderiv (GLuint shader, GLenum pname, GLint* params);
__attribute__((visibility("default"))) void glGetShaderInfoLog (GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* infolog);
__attribute__((visibility("default"))) void glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision);
__attribute__((visibility("default"))) void glGetShaderSource (GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source);
__attribute__((visibility("default"))) const GLubyte* glGetString (GLenum name);
__attribute__((visibility("default"))) void glGetTexParameterfv (GLenum target, GLenum pname, GLfloat* params);
__attribute__((visibility("default"))) void glGetTexParameteriv (GLenum target, GLenum pname, GLint* params);
__attribute__((visibility("default"))) void glGetUniformfv (GLuint program, GLint location, GLfloat* params);
__attribute__((visibility("default"))) void glGetUniformiv (GLuint program, GLint location, GLint* params);
__attribute__((visibility("default"))) int glGetUniformLocation (GLuint program, const GLchar* name);
__attribute__((visibility("default"))) void glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat* params);
__attribute__((visibility("default"))) void glGetVertexAttribiv (GLuint index, GLenum pname, GLint* params);
__attribute__((visibility("default"))) void glGetVertexAttribPointerv (GLuint index, GLenum pname, GLvoid** pointer);
__attribute__((visibility("default"))) void glHint (GLenum target, GLenum mode);
__attribute__((visibility("default"))) GLboolean glIsBuffer (GLuint buffer);
__attribute__((visibility("default"))) GLboolean glIsEnabled (GLenum cap);
__attribute__((visibility("default"))) GLboolean glIsFramebuffer (GLuint framebuffer);
__attribute__((visibility("default"))) GLboolean glIsProgram (GLuint program);
__attribute__((visibility("default"))) GLboolean glIsRenderbuffer (GLuint renderbuffer);
__attribute__((visibility("default"))) GLboolean glIsShader (GLuint shader);
__attribute__((visibility("default"))) GLboolean glIsTexture (GLuint texture);
__attribute__((visibility("default"))) void glLineWidth (GLfloat width);
__attribute__((visibility("default"))) void glLinkProgram (GLuint program);
__attribute__((visibility("default"))) void glPixelStorei (GLenum pname, GLint param);
__attribute__((visibility("default"))) void glPolygonOffset (GLfloat factor, GLfloat units);
__attribute__((visibility("default"))) void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels);
__attribute__((visibility("default"))) void glReleaseShaderCompiler (void);
__attribute__((visibility("default"))) void glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
__attribute__((visibility("default"))) void glSampleCoverage (GLclampf value, GLboolean invert);
__attribute__((visibility("default"))) void glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
__attribute__((visibility("default"))) void glShaderBinary (GLsizei n, const GLuint* shaders, GLenum binaryformat, const GLvoid* binary, GLsizei length);
__attribute__((visibility("default"))) void glShaderSource (GLuint shader, GLsizei count, const GLchar** string, const GLint* length);
__attribute__((visibility("default"))) void glStencilFunc (GLenum func, GLint ref, GLuint mask);
__attribute__((visibility("default"))) void glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask);
__attribute__((visibility("default"))) void glStencilMask (GLuint mask);
__attribute__((visibility("default"))) void glStencilMaskSeparate (GLenum face, GLuint mask);
__attribute__((visibility("default"))) void glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
__attribute__((visibility("default"))) void glStencilOpSeparate (GLenum face, GLenum fail, GLenum zfail, GLenum zpass);
__attribute__((visibility("default"))) void glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
__attribute__((visibility("default"))) void glTexParameterf (GLenum target, GLenum pname, GLfloat param);
__attribute__((visibility("default"))) void glTexParameterfv (GLenum target, GLenum pname, const GLfloat* params);
__attribute__((visibility("default"))) void glTexParameteri (GLenum target, GLenum pname, GLint param);
__attribute__((visibility("default"))) void glTexParameteriv (GLenum target, GLenum pname, const GLint* params);
__attribute__((visibility("default"))) void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
__attribute__((visibility("default"))) void glUniform1f (GLint location, GLfloat x);
__attribute__((visibility("default"))) void glUniform1fv (GLint location, GLsizei count, const GLfloat* v);
__attribute__((visibility("default"))) void glUniform1i (GLint location, GLint x);
__attribute__((visibility("default"))) void glUniform1iv (GLint location, GLsizei count, const GLint* v);
__attribute__((visibility("default"))) void glUniform2f (GLint location, GLfloat x, GLfloat y);
__attribute__((visibility("default"))) void glUniform2fv (GLint location, GLsizei count, const GLfloat* v);
__attribute__((visibility("default"))) void glUniform2i (GLint location, GLint x, GLint y);
__attribute__((visibility("default"))) void glUniform2iv (GLint location, GLsizei count, const GLint* v);
__attribute__((visibility("default"))) void glUniform3f (GLint location, GLfloat x, GLfloat y, GLfloat z);
__attribute__((visibility("default"))) void glUniform3fv (GLint location, GLsizei count, const GLfloat* v);
__attribute__((visibility("default"))) void glUniform3i (GLint location, GLint x, GLint y, GLint z);
__attribute__((visibility("default"))) void glUniform3iv (GLint location, GLsizei count, const GLint* v);
__attribute__((visibility("default"))) void glUniform4f (GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
__attribute__((visibility("default"))) void glUniform4fv (GLint location, GLsizei count, const GLfloat* v);
__attribute__((visibility("default"))) void glUniform4i (GLint location, GLint x, GLint y, GLint z, GLint w);
__attribute__((visibility("default"))) void glUniform4iv (GLint location, GLsizei count, const GLint* v);
__attribute__((visibility("default"))) void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
__attribute__((visibility("default"))) void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
__attribute__((visibility("default"))) void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
__attribute__((visibility("default"))) void glUseProgram (GLuint program);
__attribute__((visibility("default"))) void glValidateProgram (GLuint program);
__attribute__((visibility("default"))) void glVertexAttrib1f (GLuint indx, GLfloat x);
__attribute__((visibility("default"))) void glVertexAttrib1fv (GLuint indx, const GLfloat* values);
__attribute__((visibility("default"))) void glVertexAttrib2f (GLuint indx, GLfloat x, GLfloat y);
__attribute__((visibility("default"))) void glVertexAttrib2fv (GLuint indx, const GLfloat* values);
__attribute__((visibility("default"))) void glVertexAttrib3f (GLuint indx, GLfloat x, GLfloat y, GLfloat z);
__attribute__((visibility("default"))) void glVertexAttrib3fv (GLuint indx, const GLfloat* values);
__attribute__((visibility("default"))) void glVertexAttrib4f (GLuint indx, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
__attribute__((visibility("default"))) void glVertexAttrib4fv (GLuint indx, const GLfloat* values);
__attribute__((visibility("default"))) void glVertexAttribPointer (GLuint indx, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* ptr);
__attribute__((visibility("default"))) void glViewport (GLint x, GLint y, GLsizei width, GLsizei height);
