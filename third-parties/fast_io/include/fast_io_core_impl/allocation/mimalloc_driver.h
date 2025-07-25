﻿#pragma once

namespace fast_io
{
namespace mimalloc
{

#if defined(_MSC_VER) && !defined(__clang__)
__declspec(dllimport)
#elif (__has_cpp_attribute(__gnu__::__dllimport__) && !defined(__WINE__))
[[__gnu__::__dllimport__]]
#endif
#if __has_cpp_attribute(__gnu__::__cdecl__) && ((defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__))
[[__gnu__::__cdecl__]]
#endif
#if __has_cpp_attribute(__gnu__::__malloc__)
[[__gnu__::__malloc__]]
#endif
extern void *
#if !__has_cpp_attribute(__gnu__::__cdecl__) && defined(_MSC_VER)
	__cdecl
#endif
	mi_malloc(::std::size_t size) noexcept
#if (defined(__clang__) || defined(__GNUC__))
#if SIZE_MAX <= UINT_LEAST32_MAX && (defined(__x86__) || defined(_M_IX86) || defined(__i386__)) && \
	((defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__))
#if !defined(__clang__)
	__asm__("mi_malloc")
#else
	__asm__("_mi_malloc")
#endif
#else
	__asm__("mi_malloc")
#endif
#endif
		;

#if defined(_MSC_VER) && !defined(__clang__)
__declspec(dllimport)
#elif (__has_cpp_attribute(__gnu__::__dllimport__) && !defined(__WINE__))
[[__gnu__::__dllimport__]]
#endif
#if __has_cpp_attribute(__gnu__::__cdecl__) && ((defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__))
[[__gnu__::__cdecl__]]
#endif
extern void
#if !__has_cpp_attribute(__gnu__::__cdecl__) && defined(_MSC_VER)
	__cdecl
#endif
	mi_free(void *p) noexcept
#if (defined(__clang__) || defined(__GNUC__))
#if SIZE_MAX <= UINT_LEAST32_MAX && (defined(__x86__) || defined(_M_IX86) || defined(__i386__)) && \
	((defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__))
#if !defined(__clang__)
	__asm__("mi_free")
#else
	__asm__("_mi_free")
#endif
#else
	__asm__("mi_free")
#endif
#endif
		;

#if defined(_MSC_VER) && !defined(__clang__)
__declspec(dllimport)
#elif (__has_cpp_attribute(__gnu__::__dllimport__) && !defined(__WINE__))
[[__gnu__::__dllimport__]]
#endif
#if __has_cpp_attribute(__gnu__::__cdecl__) && ((defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__))
[[__gnu__::__cdecl__]]
#endif
extern void *
#if !__has_cpp_attribute(__gnu__::__cdecl__) && defined(_MSC_VER)
	__cdecl
#endif
	mi_calloc(::std::size_t count, ::std::size_t size) noexcept
#if (defined(__clang__) || defined(__GNUC__))
#if SIZE_MAX <= UINT_LEAST32_MAX && (defined(__x86__) || defined(_M_IX86) || defined(__i386__)) && \
	((defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__))
#if !defined(__clang__)
	__asm__("mi_calloc")
#else
	__asm__("_mi_calloc")
#endif
#else
	__asm__("mi_calloc")
#endif
#endif
		;

#if defined(_MSC_VER) && !defined(__clang__)
__declspec(dllimport)
#elif (__has_cpp_attribute(__gnu__::__dllimport__) && !defined(__WINE__))
[[__gnu__::__dllimport__]]
#endif
#if __has_cpp_attribute(__gnu__::__cdecl__) && ((defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__))
[[__gnu__::__cdecl__]]
#endif
extern void *
#if !__has_cpp_attribute(__gnu__::__cdecl__) && defined(_MSC_VER)
	__cdecl
#endif
	mi_realloc(void *p, ::std::size_t newsize) noexcept
#if (defined(__clang__) || defined(__GNUC__))
#if SIZE_MAX <= UINT_LEAST32_MAX && (defined(__x86__) || defined(_M_IX86) || defined(__i386__)) && \
	((defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__))
#if !defined(__clang__)
	__asm__("mi_realloc")
#else
	__asm__("_mi_realloc")
#endif
#else
	__asm__("mi_realloc")
#endif
#endif
		;

#if defined(_MSC_VER) && !defined(__clang__)
__declspec(dllimport)
#elif (__has_cpp_attribute(__gnu__::__dllimport__) && !defined(__WINE__))
[[__gnu__::__dllimport__]]
#endif
#if __has_cpp_attribute(__gnu__::__cdecl__) && ((defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__))
[[__gnu__::__cdecl__]]
#endif
extern void *
#if !__has_cpp_attribute(__gnu__::__cdecl__) && defined(_MSC_VER)
	__cdecl
#endif
	mi_malloc_aligned(::std::size_t size, ::std::size_t alignment) noexcept
#if (defined(__clang__) || defined(__GNUC__))
#if SIZE_MAX <= UINT_LEAST32_MAX && (defined(__x86__) || defined(_M_IX86) || defined(__i386__)) && \
	((defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__))
#if !defined(__clang__)
	__asm__("mi_malloc_aligned")
#else
	__asm__("_mi_malloc_aligned")
#endif
#else
	__asm__("mi_malloc_aligned")
#endif
#endif
		;

#if defined(_MSC_VER) && !defined(__clang__)
__declspec(dllimport)
#elif (__has_cpp_attribute(__gnu__::__dllimport__) && !defined(__WINE__))
[[__gnu__::__dllimport__]]
#endif
#if __has_cpp_attribute(__gnu__::__cdecl__) && ((defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__))
[[__gnu__::__cdecl__]]
#endif
extern void *
#if !__has_cpp_attribute(__gnu__::__cdecl__) && defined(_MSC_VER)
	__cdecl
#endif
	mi_ralloc_aligned(void *p, ::std::size_t size, ::std::size_t alignment) noexcept
#if (defined(__clang__) || defined(__GNUC__))
#if SIZE_MAX <= UINT_LEAST32_MAX && (defined(__x86__) || defined(_M_IX86) || defined(__i386__)) && \
	((defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__))
#if !defined(__clang__)
	__asm__("mi_ralloc_aligned")
#else
	__asm__("_mi_ralloc_aligned")
#endif
#else
	__asm__("mi_ralloc_aligned")
#endif
#endif
		;

#if defined(_MSC_VER) && !defined(__clang__)
__declspec(dllimport)
#elif (__has_cpp_attribute(__gnu__::__dllimport__) && !defined(__WINE__))
[[__gnu__::__dllimport__]]
#endif
#if __has_cpp_attribute(__gnu__::__cdecl__) && ((defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__))
[[__gnu__::__cdecl__]]
#endif
extern void *
#if !__has_cpp_attribute(__gnu__::__cdecl__) && defined(_MSC_VER)
	__cdecl
#endif
	mi_calloc_aligned(::std::size_t count, ::std::size_t size, ::std::size_t alignment) noexcept
#if (defined(__clang__) || defined(__GNUC__))
#if SIZE_MAX <= UINT_LEAST32_MAX && (defined(__x86__) || defined(_M_IX86) || defined(__i386__)) && \
	((defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__))
#if !defined(__clang__)
	__asm__("mi_calloc_aligned")
#else
	__asm__("_mi_calloc_aligned")
#endif
#else
	__asm__("mi_calloc_aligned")
#endif
#endif
		;

#if defined(_MSC_VER) && !defined(__clang__)
__declspec(dllimport)
#elif (__has_cpp_attribute(__gnu__::__dllimport__) && !defined(__WINE__))
[[__gnu__::__dllimport__]]
#endif
#if __has_cpp_attribute(__gnu__::__cdecl__) && ((defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__))
[[__gnu__::__cdecl__]]
#endif
extern void
#if !__has_cpp_attribute(__gnu__::__cdecl__) && defined(_MSC_VER)
	__cdecl
#endif
	mi_free_aligned(void *p, ::std::size_t alignment) noexcept
#if (defined(__clang__) || defined(__GNUC__))
#if SIZE_MAX <= UINT_LEAST32_MAX && (defined(__x86__) || defined(_M_IX86) || defined(__i386__)) && \
	((defined(_WIN32) && !defined(__WINE__)) || defined(__CYGWIN__))
#if !defined(__clang__)
	__asm__("mi_free_aligned")
#else
	__asm__("_mi_free_aligned")
#endif
#else
	__asm__("mi_free_aligned")
#endif
#endif
		;

} // namespace mimalloc

class mimalloc_allocator
{
public:
#if __has_cpp_attribute(__gnu__::__returns_nonnull__)
	[[__gnu__::__returns_nonnull__]]
#endif
	static inline void *
	allocate(::std::size_t n) noexcept
	{
		if (n == 0) [[unlikely]]
		{
			n = 1;
		}
		void *p = ::fast_io::mimalloc::mi_malloc(n);
		if (p == nullptr)
		{
			::fast_io::fast_terminate();
		}
		return p;
	}

#if __has_cpp_attribute(__gnu__::__returns_nonnull__)
	[[__gnu__::__returns_nonnull__]]
#endif
	static inline void *
	reallocate(void *p, ::std::size_t n) noexcept
	{
		if (n == 0) [[unlikely]]
		{
			n = 1;
		}
		p = ::fast_io::mimalloc::mi_realloc(p, n);
		if (p == nullptr)
		{
			::fast_io::fast_terminate();
		}
		return p;
	}

#if __has_cpp_attribute(__gnu__::__returns_nonnull__)
	[[__gnu__::__returns_nonnull__]]
#endif
	static inline void *
	allocate_zero(::std::size_t n) noexcept
	{
		if (n == 0) [[unlikely]]
		{
			n = 1;
		}
		void *p = ::fast_io::mimalloc::mi_calloc(1, n);
		if (p == nullptr)
		{
			::fast_io::fast_terminate();
		}
		return p;
	}

	inline static void deallocate(void *p) noexcept
	{
		::fast_io::mimalloc::mi_free(p);
	}
#if __has_cpp_attribute(__gnu__::__returns_nonnull__)
	[[__gnu__::__returns_nonnull__]]
#endif
	static inline void *
	allocate_aligned(::std::size_t alignment, ::std::size_t n) noexcept
	{
		if (n == 0) [[unlikely]]
		{
			n = 1;
		}
		void *p = ::fast_io::mimalloc::mi_malloc_aligned(n, alignment);
		if (p == nullptr)
		{
			::fast_io::fast_terminate();
		}
		return p;
	}

#if __has_cpp_attribute(__gnu__::__returns_nonnull__)
	[[__gnu__::__returns_nonnull__]]
#endif
	static inline void *
	reallocate_aligned(void *p, ::std::size_t alignment, ::std::size_t n) noexcept
	{
		if (n == 0) [[unlikely]]
		{
			n = 1;
		}
		p = ::fast_io::mimalloc::mi_ralloc_aligned(p, n, alignment);
		if (p == nullptr)
		{
			::fast_io::fast_terminate();
		}
		return p;
	}

#if __has_cpp_attribute(__gnu__::__returns_nonnull__)
	[[__gnu__::__returns_nonnull__]]
#endif
	static inline void *
	allocate_zero_aligned(::std::size_t n, ::std::size_t alignment) noexcept
	{
		if (n == 0) [[unlikely]]
		{
			n = 1;
		}
		void *p = ::fast_io::mimalloc::mi_calloc_aligned(1, n, alignment);
		if (p == nullptr)
		{
			::fast_io::fast_terminate();
		}
		return p;
	}

	inline static void deallocate_aligned(void *p, ::std::size_t alignment) noexcept
	{
		if (p == nullptr) [[unlikely]]
		{
			return;
		}
		::fast_io::mimalloc::mi_free_aligned(p, alignment);
	}
};

} // namespace fast_io
