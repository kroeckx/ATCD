/* -*- C++ -*- */
// $Id$

// ============================================================================
//
// = LIBRARY
//    TAO
//
// = FILENAME
//    WrongTransactionC.h
//
// = AUTHOR
//
// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#ifndef TAO_IDL_WRONG_TRANSACTIONC_H
#define TAO_IDL_WRONG_TRANSACTIONC_H
#include "ace/pre.h"

#include "tao/orbconf.h"

#if (TAO_HAS_MINIMUM_CORBA == 0)

#include "tao/corbafwd.h"
#include "tao/Exception.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO
#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

class TAO_Export CORBA_WrongTransaction : public CORBA::UserException
{
// = TITLE
//   Exception class generated by the TAO IDL compiler.
//
// = DESCRIPTION
//   This exception is thrown if a CORBA Request is implicitly
//   associated with a transaction and is found to have an
//   error in its parameters when checked at runtime (invocation).
public:

  CORBA_WrongTransaction (void); // default ctor
  CORBA_WrongTransaction (const CORBA_WrongTransaction &); // copy ctor
  ~CORBA_WrongTransaction (void); // dtor
  CORBA_WrongTransaction &operator= (const CORBA_WrongTransaction &);


  virtual void _raise (void);

  virtual void _tao_encode (TAO_OutputCDR &cdr,
                            CORBA::Environment &) const;
  virtual void _tao_decode (TAO_InputCDR &cdr,
                            CORBA::Environment &);

  static CORBA_WrongTransaction *_narrow (CORBA::Exception *);


  // = TAO extension
  static CORBA::Exception *_alloc (void);

}; // exception CORBA::WrongTransaction

TAO_Export CORBA::Boolean
operator<< (TAO_OutputCDR &, const CORBA_WrongTransaction &);
TAO_Export CORBA::Boolean
operator>> (TAO_InputCDR &, CORBA_WrongTransaction &);

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#endif /* TAO_HAS_MINIMUM_CORBA */

#include "ace/post.h"
#endif /* ifndef TAO_IDL_WRONG_TRANSACTIONC_H */
