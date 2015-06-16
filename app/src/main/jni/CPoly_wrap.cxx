/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA
#define SWIG_DIRECTORS


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else

/* -----------------------------------------------------------------------------
 * director.swg
 *
 * This file contains support for director classes that proxy
 * method calls from C++ to Java extensions.
 * ----------------------------------------------------------------------------- */

#ifdef __cplusplus

#if defined(DEBUG_DIRECTOR_OWNED)
#include <iostream>
#endif

namespace Swig {
  /* Java object wrapper */
  class JObjectWrapper {
  public:
    JObjectWrapper() : jthis_(NULL), weak_global_(true) {
    }

    ~JObjectWrapper() {
      jthis_ = NULL;
      weak_global_ = true;
    }

    bool set(JNIEnv *jenv, jobject jobj, bool mem_own, bool weak_global) {
      if (!jthis_) {
        weak_global_ = weak_global || !mem_own; // hold as weak global if explicitly requested or not owned
        if (jobj)
          jthis_ = weak_global_ ? jenv->NewWeakGlobalRef(jobj) : jenv->NewGlobalRef(jobj);
#if defined(DEBUG_DIRECTOR_OWNED)
        std::cout << "JObjectWrapper::set(" << jobj << ", " << (weak_global ? "weak_global" : "global_ref") << ") -> " << jthis_ << std::endl;
#endif
        return true;
      } else {
#if defined(DEBUG_DIRECTOR_OWNED)
        std::cout << "JObjectWrapper::set(" << jobj << ", " << (weak_global ? "weak_global" : "global_ref") << ") -> already set" << std::endl;
#endif
        return false;
      }
    }

    jobject get(JNIEnv *jenv) const {
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "JObjectWrapper::get(";
      if (jthis_)
        std::cout << jthis_;
      else
        std::cout << "null";
      std::cout << ") -> return new local ref" << std::endl;
#endif
      return (jthis_ ? jenv->NewLocalRef(jthis_) : jthis_);
    }

    void release(JNIEnv *jenv) {
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "JObjectWrapper::release(" << jthis_ << "): " << (weak_global_ ? "weak global ref" : "global ref") << std::endl;
#endif
      if (jthis_) {
        if (weak_global_) {
          if (jenv->IsSameObject(jthis_, NULL) == JNI_FALSE)
            jenv->DeleteWeakGlobalRef((jweak)jthis_);
        } else
          jenv->DeleteGlobalRef(jthis_);
      }

      jthis_ = NULL;
      weak_global_ = true;
    }

    /* Only call peek if you know what you are doing wrt to weak/global references */
    jobject peek() {
      return jthis_;
    }

    /* Java proxy releases ownership of C++ object, C++ object is now
       responsible for destruction (creates NewGlobalRef to pin Java
       proxy) */
    void java_change_ownership(JNIEnv *jenv, jobject jself, bool take_or_release) {
      if (take_or_release) {  /* Java takes ownership of C++ object's lifetime. */
        if (!weak_global_) {
          jenv->DeleteGlobalRef(jthis_);
          jthis_ = jenv->NewWeakGlobalRef(jself);
          weak_global_ = true;
        }
      } else { /* Java releases ownership of C++ object's lifetime */
        if (weak_global_) {
          jenv->DeleteWeakGlobalRef((jweak)jthis_);
          jthis_ = jenv->NewGlobalRef(jself);
          weak_global_ = false;
        }
      }
    }

  private:
    /* pointer to Java object */
    jobject jthis_;
    /* Local or global reference flag */
    bool weak_global_;
  };

  /* director base class */
  class Director {
    /* pointer to Java virtual machine */
    JavaVM *swig_jvm_;

  protected:
#if defined (_MSC_VER) && (_MSC_VER<1300)
    class JNIEnvWrapper;
    friend class JNIEnvWrapper;
#endif
    /* Utility class for managing the JNI environment */
    class JNIEnvWrapper {
      const Director *director_;
      JNIEnv *jenv_;
      int env_status;
    public:
      JNIEnvWrapper(const Director *director) : director_(director), jenv_(0), env_status(0) {
#if defined(__ANDROID__)
        JNIEnv **jenv = &jenv_;
#else
        void **jenv = (void **)&jenv_;
#endif
        env_status = director_->swig_jvm_->GetEnv((void **)&jenv_, JNI_VERSION_1_2);
#if defined(SWIG_JAVA_ATTACH_CURRENT_THREAD_AS_DAEMON)
        // Attach a daemon thread to the JVM. Useful when the JVM should not wait for 
        // the thread to exit upon shutdown. Only for jdk-1.4 and later.
        director_->swig_jvm_->AttachCurrentThreadAsDaemon(jenv, NULL);
#else
        director_->swig_jvm_->AttachCurrentThread(jenv, NULL);
#endif
      }
      ~JNIEnvWrapper() {
#if !defined(SWIG_JAVA_NO_DETACH_CURRENT_THREAD)
        // Some JVMs, eg jdk-1.4.2 and lower on Solaris have a bug and crash with the DetachCurrentThread call.
        // However, without this call, the JVM hangs on exit when the thread was not created by the JVM and creates a memory leak.
        if (env_status == JNI_EDETACHED)
          director_->swig_jvm_->DetachCurrentThread();
#endif
      }
      JNIEnv *getJNIEnv() const {
        return jenv_;
      }
    };

    /* Java object wrapper */
    JObjectWrapper swig_self_;

    /* Disconnect director from Java object */
    void swig_disconnect_director_self(const char *disconn_method) {
      JNIEnvWrapper jnienv(this) ;
      JNIEnv *jenv = jnienv.getJNIEnv() ;
      jobject jobj = swig_self_.get(jenv);
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "Swig::Director::disconnect_director_self(" << jobj << ")" << std::endl;
#endif
      if (jobj && jenv->IsSameObject(jobj, NULL) == JNI_FALSE) {
        jmethodID disconn_meth = jenv->GetMethodID(jenv->GetObjectClass(jobj), disconn_method, "()V");
        if (disconn_meth) {
#if defined(DEBUG_DIRECTOR_OWNED)
          std::cout << "Swig::Director::disconnect_director_self upcall to " << disconn_method << std::endl;
#endif
          jenv->CallVoidMethod(jobj, disconn_meth);
        }
      }
      jenv->DeleteLocalRef(jobj);
    }

  public:
    Director(JNIEnv *jenv) : swig_jvm_((JavaVM *) NULL), swig_self_() {
      /* Acquire the Java VM pointer */
      jenv->GetJavaVM(&swig_jvm_);
    }

    virtual ~Director() {
      JNIEnvWrapper jnienv(this) ;
      JNIEnv *jenv = jnienv.getJNIEnv() ;
      swig_self_.release(jenv);
    }

    bool swig_set_self(JNIEnv *jenv, jobject jself, bool mem_own, bool weak_global) {
      return swig_self_.set(jenv, jself, mem_own, weak_global);
    }

    jobject swig_get_self(JNIEnv *jenv) const {
      return swig_self_.get(jenv);
    }

    // Change C++ object's ownership, relative to Java
    void swig_java_change_ownership(JNIEnv *jenv, jobject jself, bool take_or_release) {
      swig_self_.java_change_ownership(jenv, jself, take_or_release);
    }
  };
}

#endif /* __cplusplus */


namespace Swig {
  namespace {
    jclass jclass_CPolyWrapperJNI = NULL;
    jmethodID director_methids[1];
  }
}

#include "CPoly.h"


static double *new_doublep() { 
  return new double(); 
}

static double *copy_doublep(double value) { 
  return new double(value); 
}

static void delete_doublep(double *obj) { 
  if (obj) delete obj; 
}

static void doublep_assign(double *obj, double value) {
  *obj = value;
}

static double doublep_value(double *obj) {
  return *obj;
}



/* ---------------------------------------------------
 * C++ director class methods
 * --------------------------------------------------- */

#include "CPoly_wrap.h"

SwigDirector_CCallback::SwigDirector_CCallback(JNIEnv *jenv) : CCallback(), Swig::Director(jenv) {
}

SwigDirector_CCallback::~SwigDirector_CCallback() {
  swig_disconnect_director_self("swigDirectorDisconnect");
}


void SwigDirector_CCallback::getCoefficients(double *c0, double *c1, double *c2, double *c3) {
  JNIEnvWrapper swigjnienv(this) ;
  JNIEnv * jenv = swigjnienv.getJNIEnv() ;
  jobject swigjobj = (jobject) NULL ;
  jlong jc0 = 0 ;
  jlong jc1 = 0 ;
  jlong jc2 = 0 ;
  jlong jc3 = 0 ;
  
  if (!swig_override[0]) {
    SWIG_JavaThrowException(JNIEnvWrapper(this).getJNIEnv(), SWIG_JavaDirectorPureVirtual, "Attempted to invoke pure virtual method CCallback::getCoefficients.");
    return;
  }
  swigjobj = swig_get_self(jenv);
  if (swigjobj && jenv->IsSameObject(swigjobj, NULL) == JNI_FALSE) {
    *((double **)&jc0) = (double *) c0; 
    *((double **)&jc1) = (double *) c1; 
    *((double **)&jc2) = (double *) c2; 
    *((double **)&jc3) = (double *) c3; 
    jenv->CallStaticVoidMethod(Swig::jclass_CPolyWrapperJNI, Swig::director_methids[0], swigjobj, jc0, jc1, jc2, jc3);
    if (jenv->ExceptionCheck() == JNI_TRUE) return ;
  } else {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null upcall object");
  }
  if (swigjobj) jenv->DeleteLocalRef(swigjobj);
}

void SwigDirector_CCallback::swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global) {
  static struct {
    const char *mname;
    const char *mdesc;
    jmethodID base_methid;
  } methods[] = {
    {
      "getCoefficients", "(Lcom/vshkl/core/SWIGTYPE_p_double;Lcom/vshkl/core/SWIGTYPE_p_double;Lcom/vshkl/core/SWIGTYPE_p_double;Lcom/vshkl/core/SWIGTYPE_p_double;)V", NULL 
    }
  };
  
  static jclass baseclass = 0 ;
  
  if (swig_set_self(jenv, jself, swig_mem_own, weak_global)) {
    if (!baseclass) {
      baseclass = jenv->FindClass("com/vshkl/core/CCallback");
      if (!baseclass) return;
      baseclass = (jclass) jenv->NewGlobalRef(baseclass);
    }
    bool derived = (jenv->IsSameObject(baseclass, jcls) ? false : true);
    for (int i = 0; i < 1; ++i) {
      if (!methods[i].base_methid) {
        methods[i].base_methid = jenv->GetMethodID(baseclass, methods[i].mname, methods[i].mdesc);
        if (!methods[i].base_methid) return;
      }
      swig_override[i] = false;
      if (derived) {
        jmethodID methid = jenv->GetMethodID(jcls, methods[i].mname, methods[i].mdesc);
        swig_override[i] = (methid != methods[i].base_methid);
        jenv->ExceptionClear();
      }
    }
  }
}



#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_com_vshkl_core_CPolyWrapperJNI_new_1CCallback(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  CCallback *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (CCallback *)new SwigDirector_CCallback(jenv);
  *(CCallback **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_vshkl_core_CPolyWrapperJNI_delete_1CCallback(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  CCallback *arg1 = (CCallback *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(CCallback **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_com_vshkl_core_CPolyWrapperJNI_CCallback_1getCoefficients(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jlong jarg3, jlong jarg4, jlong jarg5) {
  CCallback *arg1 = (CCallback *) 0 ;
  double *arg2 = (double *) 0 ;
  double *arg3 = (double *) 0 ;
  double *arg4 = (double *) 0 ;
  double *arg5 = (double *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CCallback **)&jarg1; 
  arg2 = *(double **)&jarg2; 
  arg3 = *(double **)&jarg3; 
  arg4 = *(double **)&jarg4; 
  arg5 = *(double **)&jarg5; 
  (arg1)->getCoefficients(arg2,arg3,arg4,arg5);
}


SWIGEXPORT void JNICALL Java_com_vshkl_core_CPolyWrapperJNI_CCallback_1setValue(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jdouble jarg3) {
  CCallback *arg1 = (CCallback *) 0 ;
  double *arg2 = 0 ;
  double arg3 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CCallback **)&jarg1; 
  arg2 = *(double **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "double & reference is null");
    return ;
  } 
  arg3 = (double)jarg3; 
  (arg1)->setValue(*arg2,arg3);
}


SWIGEXPORT void JNICALL Java_com_vshkl_core_CPolyWrapperJNI_CCallback_1director_1connect(JNIEnv *jenv, jclass jcls, jobject jself, jlong objarg, jboolean jswig_mem_own, jboolean jweak_global) {
  CCallback *obj = *((CCallback **)&objarg);
  (void)jcls;
  SwigDirector_CCallback *director = dynamic_cast<SwigDirector_CCallback *>(obj);
  if (director) {
    director->swig_connect_director(jenv, jself, jenv->GetObjectClass(jself), (jswig_mem_own == JNI_TRUE), (jweak_global == JNI_TRUE));
  }
}


SWIGEXPORT void JNICALL Java_com_vshkl_core_CPolyWrapperJNI_CCallback_1change_1ownership(JNIEnv *jenv, jclass jcls, jobject jself, jlong objarg, jboolean jtake_or_release) {
  CCallback *obj = *((CCallback **)&objarg);
  SwigDirector_CCallback *director = dynamic_cast<SwigDirector_CCallback *>(obj);
  (void)jcls;
  if (director) {
    director->swig_java_change_ownership(jenv, jself, jtake_or_release ? true : false);
  }
}


SWIGEXPORT void JNICALL Java_com_vshkl_core_CPolyWrapperJNI_CPolynomialCalculator_1setCallback(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  CPolynomialCalculator *arg1 = (CPolynomialCalculator *) 0 ;
  CCallback *arg2 = (CCallback *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(CPolynomialCalculator **)&jarg1; 
  arg2 = *(CCallback **)&jarg2; 
  (arg1)->setCallback(arg2);
}


SWIGEXPORT jdouble JNICALL Java_com_vshkl_core_CPolyWrapperJNI_CPolynomialCalculator_1calculate(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jdouble jarg2) {
  jdouble jresult = 0 ;
  CPolynomialCalculator *arg1 = (CPolynomialCalculator *) 0 ;
  double arg2 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(CPolynomialCalculator **)&jarg1; 
  arg2 = (double)jarg2; 
  result = (double)(arg1)->calculate(arg2);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_vshkl_core_CPolyWrapperJNI_new_1CPolynomialCalculator(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  CPolynomialCalculator *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (CPolynomialCalculator *)new CPolynomialCalculator();
  *(CPolynomialCalculator **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_vshkl_core_CPolyWrapperJNI_delete_1CPolynomialCalculator(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  CPolynomialCalculator *arg1 = (CPolynomialCalculator *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(CPolynomialCalculator **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_com_vshkl_core_CPolyWrapperJNI_new_1doublep(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  double *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (double *)new_doublep();
  *(double **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_vshkl_core_CPolyWrapperJNI_copy_1doublep(JNIEnv *jenv, jclass jcls, jdouble jarg1) {
  jlong jresult = 0 ;
  double arg1 ;
  double *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (double)jarg1; 
  result = (double *)copy_doublep(arg1);
  *(double **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_vshkl_core_CPolyWrapperJNI_delete_1doublep(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  double *arg1 = (double *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(double **)&jarg1; 
  delete_doublep(arg1);
}


SWIGEXPORT void JNICALL Java_com_vshkl_core_CPolyWrapperJNI_doublep_1assign(JNIEnv *jenv, jclass jcls, jlong jarg1, jdouble jarg2) {
  double *arg1 = (double *) 0 ;
  double arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(double **)&jarg1; 
  arg2 = (double)jarg2; 
  doublep_assign(arg1,arg2);
}


SWIGEXPORT jdouble JNICALL Java_com_vshkl_core_CPolyWrapperJNI_doublep_1value(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jdouble jresult = 0 ;
  double *arg1 = (double *) 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(double **)&jarg1; 
  result = (double)doublep_value(arg1);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_vshkl_core_CPolyWrapperJNI_swig_1module_1init(JNIEnv *jenv, jclass jcls) {
  int i;
  
  static struct {
    const char *method;
    const char *signature;
  } methods[1] = {
    {
      "SwigDirector_CCallback_getCoefficients", "(Lcom/vshkl/core/CCallback;JJJJ)V" 
    }
  };
  Swig::jclass_CPolyWrapperJNI = (jclass) jenv->NewGlobalRef(jcls);
  if (!Swig::jclass_CPolyWrapperJNI) return;
  for (i = 0; i < (int) (sizeof(methods)/sizeof(methods[0])); ++i) {
    Swig::director_methids[i] = jenv->GetStaticMethodID(jcls, methods[i].method, methods[i].signature);
    if (!Swig::director_methids[i]) return;
  }
}


#ifdef __cplusplus
}
#endif

