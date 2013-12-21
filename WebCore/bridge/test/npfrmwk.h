// ���ļ���NPAPI�����������ļ�֮һ�����ļ����������ʹ�ã��޸ġ�
// �����Ա��ļ����κ������Ľ����飬����ϵ�ҡ������Ա��ļ������ļ���ص��ļ��������޸��뷢��һ�ݸ��ҡ�
// by: JumuFENG
// email: zhcbfly@qq.com
// blog:  http://blog.csdn.net/z6482

#ifndef npfrm_h_
#define npfrm_h_

#include "mozilla-config.h"

#include "npapi.h"
#include "npfunctions.h"
#include "npruntime.h"
#include "nptypes.h"

#ifdef XP_WIN
#include "windows.h"
#include "windowsx.h"
#endif

#ifdef XP_UNIX
#include <stdio.h>
#endif

#ifdef XP_MAC
#include <Carbon/Carbon.h>
#endif

#ifndef ARRAY_LENGTH
#define ARRAY_LENGTH(a) (sizeof(a)/sizeof(a[0]))
#endif

#ifndef HIBYTE
#define HIBYTE(i) (i >> 8)
#endif

#ifndef LOBYTE
#define LOBYTE(i) (i & 0xff)
#endif

#endif // npfrm_h_
