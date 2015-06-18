/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.vshkl.core;

public class CPolynomialCalculatorCallback {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected CPolynomialCalculatorCallback(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(CPolynomialCalculatorCallback obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        CPolyWrapperJNI.delete_CPolynomialCalculatorCallback(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  protected void swigDirectorDisconnect() {
    swigCMemOwn = false;
    delete();
  }

  public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CPolyWrapperJNI.CPolynomialCalculatorCallback_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    CPolyWrapperJNI.CPolynomialCalculatorCallback_change_ownership(this, swigCPtr, true);
  }

  public CPolynomialCalculatorCallback() {
    this(CPolyWrapperJNI.new_CPolynomialCalculatorCallback(), true);
    CPolyWrapperJNI.CPolynomialCalculatorCallback_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

  public void getCoefficients(SWIGTYPE_p_double c0, SWIGTYPE_p_double c1, SWIGTYPE_p_double c2, SWIGTYPE_p_double c3) {
    CPolyWrapperJNI.CPolynomialCalculatorCallback_getCoefficients(swigCPtr, this, SWIGTYPE_p_double.getCPtr(c0), SWIGTYPE_p_double.getCPtr(c1), SWIGTYPE_p_double.getCPtr(c2), SWIGTYPE_p_double.getCPtr(c3));
  }

  public void setValue(SWIGTYPE_p_double ref, double val) {
    CPolyWrapperJNI.CPolynomialCalculatorCallback_setValue(swigCPtr, this, SWIGTYPE_p_double.getCPtr(ref), val);
  }

}
