/* Created by cgo - DO NOT EDIT. */
#include <stdlib.h>
#include "_cgo_export.h"

extern void crosscall2(void (*fn)(void *, int, __SIZE_TYPE__), void *, int, __SIZE_TYPE__);
extern __SIZE_TYPE__ _cgo_wait_runtime_init_done();
extern void _cgo_release_context(__SIZE_TYPE__);

extern char* _cgo_topofstack(void);
#define CGO_NO_SANITIZE_THREAD
#define _cgo_tsan_acquire()
#define _cgo_tsan_release()

extern void _cgoexp_12e22672b83d_goCallbackKbdAddEvent(void *, int, __SIZE_TYPE__);

CGO_NO_SANITIZE_THREAD
void goCallbackKbdAddEvent(rfbBool p0, rfbKeySym p1, rfbClientPtr p2)
{
	__SIZE_TYPE__ _cgo_ctxt = _cgo_wait_runtime_init_done();
	struct {
		rfbBool p0;
		char __pad0[3];
		rfbKeySym p1;
		rfbClientPtr p2;
	} __attribute__((__packed__)) a;
	a.p0 = p0;
	a.p1 = p1;
	a.p2 = p2;
	_cgo_tsan_release();
	crosscall2(_cgoexp_12e22672b83d_goCallbackKbdAddEvent, &a, 16, _cgo_ctxt);
	_cgo_tsan_acquire();
	_cgo_release_context(_cgo_ctxt);
}
extern void _cgoexp_12e22672b83d_goCallbackKbdReleaseAllKeys(void *, int, __SIZE_TYPE__);

CGO_NO_SANITIZE_THREAD
void goCallbackKbdReleaseAllKeys(rfbClientPtr p0)
{
	__SIZE_TYPE__ _cgo_ctxt = _cgo_wait_runtime_init_done();
	struct {
		rfbClientPtr p0;
	} __attribute__((__packed__)) a;
	a.p0 = p0;
	_cgo_tsan_release();
	crosscall2(_cgoexp_12e22672b83d_goCallbackKbdReleaseAllKeys, &a, 8, _cgo_ctxt);
	_cgo_tsan_acquire();
	_cgo_release_context(_cgo_ctxt);
}
extern void _cgoexp_12e22672b83d_goCallbackPtrAddEvent(void *, int, __SIZE_TYPE__);

CGO_NO_SANITIZE_THREAD
void goCallbackPtrAddEvent(int p0, int p1, int p2, rfbClientPtr p3)
{
	__SIZE_TYPE__ _cgo_ctxt = _cgo_wait_runtime_init_done();
	struct {
		int p0;
		int p1;
		int p2;
		char __pad0[4];
		rfbClientPtr p3;
	} __attribute__((__packed__)) a;
	a.p0 = p0;
	a.p1 = p1;
	a.p2 = p2;
	a.p3 = p3;
	_cgo_tsan_release();
	crosscall2(_cgoexp_12e22672b83d_goCallbackPtrAddEvent, &a, 24, _cgo_ctxt);
	_cgo_tsan_acquire();
	_cgo_release_context(_cgo_ctxt);
}
extern void _cgoexp_12e22672b83d_goCallbackNewClientHook(void *, int, __SIZE_TYPE__);

CGO_NO_SANITIZE_THREAD
void goCallbackNewClientHook(rfbClientPtr p0)
{
	__SIZE_TYPE__ _cgo_ctxt = _cgo_wait_runtime_init_done();
	struct {
		rfbClientPtr p0;
	} __attribute__((__packed__)) a;
	a.p0 = p0;
	_cgo_tsan_release();
	crosscall2(_cgoexp_12e22672b83d_goCallbackNewClientHook, &a, 8, _cgo_ctxt);
	_cgo_tsan_acquire();
	_cgo_release_context(_cgo_ctxt);
}
extern void _cgoexp_12e22672b83d_goCallbackDisplayHook(void *, int, __SIZE_TYPE__);

CGO_NO_SANITIZE_THREAD
void goCallbackDisplayHook(rfbClientPtr p0)
{
	__SIZE_TYPE__ _cgo_ctxt = _cgo_wait_runtime_init_done();
	struct {
		rfbClientPtr p0;
	} __attribute__((__packed__)) a;
	a.p0 = p0;
	_cgo_tsan_release();
	crosscall2(_cgoexp_12e22672b83d_goCallbackDisplayHook, &a, 8, _cgo_ctxt);
	_cgo_tsan_acquire();
	_cgo_release_context(_cgo_ctxt);
}

CGO_NO_SANITIZE_THREAD
void _cgo_12e22672b83d_Cfunc__Cmalloc(void *v) {
	struct {
		unsigned long long p0;
		void *r1;
	} __attribute__((__packed__)) *a = v;
	void *ret;
	_cgo_tsan_acquire();
	ret = malloc(a->p0);
	if (ret == 0 && a->p0 == 0) {
		ret = malloc(1);
	}
	a->r1 = ret;
	_cgo_tsan_release();
}
