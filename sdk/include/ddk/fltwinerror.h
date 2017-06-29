/*
 * fltwinerror.h
 *
 * This file is part of the ReactOS DDK package.
 *
 * Contributors:
 *   Amine Khaldi (amine.khaldi@reactos.org)
 *
 * THIS SOFTWARE IS NOT COPYRIGHTED
 *
 * This source code is offered for use in the public domain. You may
 * use, modify or distribute it freely.
 *
 * This code is distributed in the hope that it will be useful but
 * WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 * DISCLAIMED. This includes but is not limited to warranties of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */
#pragma once

#ifndef _FLT_WINERROR_
#define _FLT_WINERROR_

#if NTDDI_VERSION < NTDDI_VISTA

#if !defined(FACILITY_USERMODE_FILTER_MANAGER)

#define FILTER_HRESULT_FROM_FLT_NTSTATUS(x) \
  (NT_ASSERT((x & 0xfff0000) == 0x001c0000),(HRESULT) (((x) & 0x8000FFFF) | (FACILITY_USERMODE_FILTER_MANAGER << 16)))

#define FACILITY_USERMODE_FILTER_MANAGER       0x1F

#define ERROR_FLT_IO_COMPLETE                  ((HRESULT)0x001F0001L)
#define ERROR_FLT_NO_HANDLER_DEFINED           ((HRESULT)0x801F0001L)
#define ERROR_FLT_CONTEXT_ALREADY_DEFINED      ((HRESULT)0x801F0002L)
#define ERROR_FLT_INVALID_ASYNCHRONOUS_REQUEST ((HRESULT)0x801F0003L)
#define ERROR_FLT_DISALLOW_FAST_IO             ((HRESULT)0x801F0004L)
#define ERROR_FLT_INVALID_NAME_REQUEST         ((HRESULT)0x801F0005L)
#define ERROR_FLT_NOT_SAFE_TO_POST_OPERATION   ((HRESULT)0x801F0006L)
#define ERROR_FLT_NOT_INITIALIZED              ((HRESULT)0x801F0007L)
#define ERROR_FLT_FILTER_NOT_READY             ((HRESULT)0x801F0008L)
#define ERROR_FLT_POST_OPERATION_CLEANUP       ((HRESULT)0x801F0009L)
#define ERROR_FLT_INTERNAL_ERROR               ((HRESULT)0x801F000AL)
#define ERROR_FLT_DELETING_OBJECT              ((HRESULT)0x801F000BL)
#define ERROR_FLT_MUST_BE_NONPAGED_POOL        ((HRESULT)0x801F000CL)
#define ERROR_FLT_DUPLICATE_ENTRY              ((HRESULT)0x801F000DL)
#define ERROR_FLT_CBDQ_DISABLED                ((HRESULT)0x801F000EL)
#define ERROR_FLT_DO_NOT_ATTACH                ((HRESULT)0x801F000FL)
#define ERROR_FLT_DO_NOT_DETACH                ((HRESULT)0x801F0010L)
#define ERROR_FLT_INSTANCE_ALTITUDE_COLLISION  ((HRESULT)0x801F0011L)
#define ERROR_FLT_INSTANCE_NAME_COLLISION      ((HRESULT)0x801F0012L)
#define ERROR_FLT_FILTER_NOT_FOUND             ((HRESULT)0x801F0013L)
#define ERROR_FLT_VOLUME_NOT_FOUND             ((HRESULT)0x801F0014L)
#define ERROR_FLT_INSTANCE_NOT_FOUND           ((HRESULT)0x801F0015L)
#define ERROR_FLT_CONTEXT_ALLOCATION_NOT_FOUND ((HRESULT)0x801F0016L)
#define ERROR_FLT_INVALID_CONTEXT_REGISTRATION ((HRESULT)0x801F0017L)
#define ERROR_FLT_NAME_CACHE_MISS              ((HRESULT)0x801F0018L)
#define ERROR_FLT_NO_DEVICE_OBJECT             ((HRESULT)0x801F0019L)
#define ERROR_FLT_VOLUME_ALREADY_MOUNTED       ((HRESULT)0x801F001AL)
#define ERROR_FLT_NO_WAITER_FOR_REPLY          ((HRESULT)0x801F0020L)

#endif /* !defined(FACILITY_USERMODE_FILTER_MANAGER) */

#endif /* NTDDI_VERSION < NTDDI_VISTA */

#endif /* _FLT_WINERROR_ */