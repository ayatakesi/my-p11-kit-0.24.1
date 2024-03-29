# Modifications to p11-kit to build on Android.
# Copyright (C) 2023 Free Software Foundation, Inc.

# These modifications are part of GNU Emacs.

# GNU Emacs is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or (at
# your option) any later version.

# GNU Emacs is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with GNU Emacs.  If not, see <https://www.gnu.org/licenses/>.

LOCAL_PATH := $(call my-dir)

ifneq ($(findstring 64,$(TARGET_ARCH)),)
p11_kit_long_size := 8
else
p11_kit_long_size := 4
endif

# Import sources from Makefile.am.

inc_HEADERS += \
	p11-kit/deprecated.h \
	p11-kit/iter.h \
	p11-kit/p11-kit.h \
	p11-kit/pin.h \
	p11-kit/remote.h \
	p11-kit/uri.h

COMMON_SRCS = \
	p11-kit/util.c \
	p11-kit/conf.c p11-kit/conf.h \
	p11-kit/iter.c \
	p11-kit/log.c p11-kit/log.h \
	p11-kit/filter.c p11-kit/filter.h \
	p11-kit/modules.c p11-kit/modules.h \
	p11-kit/pkcs11.h \
	p11-kit/pin.c \
	p11-kit/pkcs11.h \
	p11-kit/private.h \
	p11-kit/messages.c \
	p11-kit/rpc-transport.c p11-kit/rpc.h \
	p11-kit/rpc-message.c p11-kit/rpc-message.h \
	p11-kit/rpc-client.c \
	p11-kit/uri.c \
	p11-kit/virtual.c p11-kit/virtual.h \
	p11-kit/virtual-fixed.h \
	$(inc_HEADERS)

libp11_common_la_SOURCES = \
	common/argv.c common/argv.h \
	common/attrs.c common/attrs.h \
	common/array.c common/array.h \
	common/buffer.c common/buffer.h \
	common/compat.c common/compat.h \
	common/constants.c common/constants.h \
	common/debug.c common/debug.h \
	common/dict.c common/dict.h \
	common/hash.c common/hash.h \
	common/lexer.c common/lexer.h \
	common/message.c common/message.h \
	common/path.c common/path.h \
	common/pkcs11.h common/pkcs11x.h common/pkcs11i.h \
	common/runtime.c common/runtime.h \
	common/url.c common/url.h \
	common/vsock.c common/vsock.h \
	common/init.h \
	$(NULL)

libp11_library_la_SOURCES = \
	common/library.c common/library.h \
	$(NULL)

p11_system_config_file = "/data/local/tmp/p11-system-config-file.conf"
p11_system_config_modules = "/data/local/tmp"
p11_package_config_modules = "/data/local/tmp"
p11_user_config_file = "/data/local/tmp"
p11_user_config_modules = "/data/local/tmp"
p11_module_path = "/data/local/tmp"

COMMON_CFLAGS = \
	-DP11_SYSTEM_CONFIG_FILE=\""$(p11_system_config_file)"\" \
	-DP11_SYSTEM_CONFIG_MODULES=\""$(p11_system_config_modules)"\" \
	-DP11_PACKAGE_CONFIG_MODULES=\""$(p11_package_config_modules)"\" \
	-DP11_USER_CONFIG_FILE=\""$(p11_user_config_file)"\" \
	-DP11_USER_CONFIG_MODULES=\""$(p11_user_config_modules)"\" \
	-DP11_MODULE_PATH=\""$(p11_module_path)"\"

# p11-kit shared library.

include $(CLEAR_VARS)

LOCAL_SRC_FILES = $(filter %.c,$(COMMON_SRCS) $(libp11_common_la_SOURCES) \
		    $(libp11_library_la_SOURCES))
LOCAL_MODULE := p11-kit
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)
LOCAL_C_INCLUDES := $(LOCAL_PATH)/p11-kit $(LOCAL_PATH)/common \
  $(LOCAL_PATH)

LOCAL_CFLAGS := -O2 -Wimplicit-function-declaration \
  -DSIZEOF_UNSIGNED_LONG=$(p11_kit_long_size)	    \
  $(COMMON_CFLAGS)				    \
  -DP11_KIT_FUTURE_UNSTABLE_API

LOCAL_LDFLAGS := --no-undefined

include $(BUILD_SHARED_LIBRARY)
