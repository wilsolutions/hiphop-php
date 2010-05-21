/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_errorexception_h__
#define __GENERATED_cls_errorexception_h__

#include <cls/exception.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 94 */
class c_errorexception : public c_exception {
  BEGIN_CLASS_MAP(errorexception)
    PARENT_CLASS(exception)
  END_CLASS_MAP(errorexception)
  DECLARE_CLASS(errorexception, ErrorException, exception)
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: Variant m_severity;
  public: void t___construct(Variant v_message = "", Variant v_code = 0LL, Variant v_severity = 0LL, Variant v_filename = null, Variant v_lineno = null);
  public: c_errorexception *create(Variant v_message = "", Variant v_code = 0LL, Variant v_severity = 0LL, Variant v_filename = null, Variant v_lineno = null);
  public: ObjectData *dynCreate(CArrRef params, bool init = true);
  public: void dynConstruct(CArrRef params);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: Variant t_getseverity();
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_errorexception_h__