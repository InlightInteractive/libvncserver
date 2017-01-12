// #line 3 "/Users/zuric/Documents/workspace/Inlight/idylwood/server/wcr/libvnc.go"


 //#cgo LDFLAGS: -L. -lvncserver -lpng -ljpeg -lz -lssl -lcrypto -lresolv
 #include "rfb/rfb.h"



/*
  If x and y are not equal, the type will be invalid
  (have a negative array count) and an inscrutable error will come
  out of the compiler and hopefully mention "name".
*/
#define __cgo_compile_assert_eq(x, y, name) typedef char name[(x-y)*(x-y)*-2+1];

// Check at compile time that the sizes we use match our expectations.
#define __cgo_size_assert(t, n) __cgo_compile_assert_eq(sizeof(t), n, _cgo_sizeof_##t##_is_not_##n)

__cgo_size_assert(char, 1)
__cgo_size_assert(short, 2)
__cgo_size_assert(int, 4)
typedef long long __cgo_long_long;
__cgo_size_assert(__cgo_long_long, 8)
__cgo_size_assert(float, 4)
__cgo_size_assert(double, 8)

extern char* _cgo_topofstack(void);

#include <errno.h>
#include <string.h>


#define CGO_NO_SANITIZE_THREAD
#define _cgo_tsan_acquire()
#define _cgo_tsan_release()

CGO_NO_SANITIZE_THREAD
void
_cgo_12e22672b83d_Cfunc_free(void *v)
{
	struct {
		void* p0;
	} __attribute__((__packed__)) *a = v;
	_cgo_tsan_acquire();
	free((void*)a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_12e22672b83d_Cfunc_memcpy(void *v)
{
	struct {
		void* p0;
		void* p1;
		size_t p2;
		const void* r;
	} __attribute__((__packed__)) *a = v;
	char *stktop = _cgo_topofstack();
	__typeof__(a->r) r;
	_cgo_tsan_acquire();
	r = (__typeof__(a->r)) memcpy((void*)a->p0, (void*)a->p1, a->p2);
	_cgo_tsan_release();
	a = (void*)((char*)a + (_cgo_topofstack() - stktop));
	a->r = r;
}

CGO_NO_SANITIZE_THREAD
void
_cgo_12e22672b83d_Cfunc_rfbGetScreen(void *v)
{
	struct {
		int* p0;
		char** p1;
		int p2;
		int p3;
		int p4;
		int p5;
		int p6;
		char __pad36[4];
		rfbScreenInfoPtr r;
	} __attribute__((__packed__)) *a = v;
	char *stktop = _cgo_topofstack();
	__typeof__(a->r) r;
	_cgo_tsan_acquire();
	r = rfbGetScreen((void*)a->p0, (void*)a->p1, a->p2, a->p3, a->p4, a->p5, a->p6);
	_cgo_tsan_release();
	a = (void*)((char*)a + (_cgo_topofstack() - stktop));
	a->r = r;
}

CGO_NO_SANITIZE_THREAD
void
_cgo_12e22672b83d_Cfunc_rfbInitServer(void *v)
{
	struct {
		rfbScreenInfoPtr p0;
	} __attribute__((__packed__)) *a = v;
	_cgo_tsan_acquire();
	rfbInitServerWithPthreadsAndZRLE((void*)a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_12e22672b83d_Cfunc_rfbIsActive(void *v)
{
	struct {
		rfbScreenInfoPtr p0;
		rfbBool r;
		char __pad9[7];
	} __attribute__((__packed__)) *a = v;
	char *stktop = _cgo_topofstack();
	__typeof__(a->r) r;
	_cgo_tsan_acquire();
	r = rfbIsActive((void*)a->p0);
	_cgo_tsan_release();
	a = (void*)((char*)a + (_cgo_topofstack() - stktop));
	a->r = r;
}

CGO_NO_SANITIZE_THREAD
void
_cgo_12e22672b83d_Cfunc_rfbMarkRectAsModified(void *v)
{
	struct {
		rfbScreenInfoPtr p0;
		int p1;
		int p2;
		int p3;
		int p4;
	} __attribute__((__packed__)) *a = v;
	_cgo_tsan_acquire();
	rfbMarkRectAsModified((void*)a->p0, a->p1, a->p2, a->p3, a->p4);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_12e22672b83d_Cfunc_rfbProcessEvents(void *v)
{
	struct {
		rfbScreenInfoPtr p0;
		long int p1;
		rfbBool r;
		char __pad17[7];
	} __attribute__((__packed__)) *a = v;
	char *stktop = _cgo_topofstack();
	__typeof__(a->r) r;
	_cgo_tsan_acquire();
	r = rfbProcessEvents((void*)a->p0, a->p1);
	_cgo_tsan_release();
	a = (void*)((char*)a + (_cgo_topofstack() - stktop));
	a->r = r;
}

CGO_NO_SANITIZE_THREAD
void
_cgo_12e22672b83d_Cfunc_rfbScreenCleanup(void *v)
{
	struct {
		rfbScreenInfoPtr p0;
	} __attribute__((__packed__)) *a = v;
	_cgo_tsan_acquire();
	rfbScreenCleanup((void*)a->p0);
	_cgo_tsan_release();
}

