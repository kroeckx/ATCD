/* -*- C++ -*- */
// $Id$
// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO ORB and the TAO IDL Compiler have been developed by Washington
// University Computer Science's Distributed Object Computing Group.
//
// Information on TAO is available at
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#include "tao/CurrentC.h"
#include "tao/Stub.h"
#include "tao/Servant_Base.h"
#include "tao/Typecode.h"
#include "tao/Any.h"
#include "tao/POA_CORBA.h"
#include "tao/Environment.h"

#if !defined (__ACE_INLINE__)
#include "tao/CurrentC.i"
#endif /* !defined INLINE */

ACE_RCSID(tao, CurrentC, "$Id$")

CORBA_Current_ptr CORBA_Current::_duplicate (CORBA_Current_ptr obj)
{
  if (!CORBA::is_nil (obj))
    obj->_incr_refcnt ();

  return obj;
} // end of _duplicate

CORBA_Current_ptr CORBA_Current::_narrow (
    CORBA::Object_ptr obj,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  if (CORBA::is_nil (obj))
    return CORBA_Current::_nil ();
  if (!obj->_is_a ("IDL:CORBA/Current:1.0", ACE_TRY_ENV))
    return CORBA_Current::_nil ();
  TAO_Stub *stub = obj->_stubobj ();
  stub->_incr_refcnt ();
  if (!obj->_is_collocated ()
         || !obj->_servant()
         || obj->_servant()->_downcast ("IDL:CORBA/Current:1.0") == 0
      )
  {
    return new CORBA_Current(stub);
  }
  void* servant = obj->_servant ()->_downcast ("IDL:CORBA/Current:1.0");
  return new POA_CORBA::_tao_collocated_Current(
      ACE_reinterpret_cast(POA_CORBA::Current_ptr, servant),
      stub
    );
}

CORBA_Current_ptr CORBA_Current::_nil (void)
{
  return (CORBA_Current_ptr)NULL;
} // end of _nil

CORBA::Boolean CORBA_Current::_is_a (const CORBA::Char *value, CORBA::Environment &ACE_TRY_ENV)
{
  if (
    (!ACE_OS::strcmp ((char *)value, "IDL:CORBA/Current:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/Object:1.0")))
  return 1; // success using local knowledge
  else
    return this->CORBA_Object::_is_a (value, ACE_TRY_ENV); // remote call
}

const char* CORBA_Current::_interface_repository_id (void) const
{
  return "IDL:CORBA/Current:1.0";
}

void operator<<= (CORBA::Any &_tao_any, CORBA_Current_ptr _tao_elem)
{
  CORBA::Environment _tao_env;
  CORBA::Object_ptr *_tao_obj_ptr;
  ACE_NEW (_tao_obj_ptr, CORBA::Object_ptr);
  *_tao_obj_ptr = CORBA_Current::_duplicate (_tao_elem);
  _tao_any.replace (CORBA::_tc_Current, _tao_obj_ptr, 1, _tao_env);
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, CORBA_Current_ptr &_tao_elem)
{
  CORBA::Environment _tao_env;
  _tao_elem = CORBA_Current::_nil ();
  CORBA::TypeCode_var type = _tao_any.type ();
  if (!type->equal (CORBA::_tc_Current, _tao_env)) return 0; // not equal
  TAO_InputCDR stream (_tao_any._tao_get_cdr ());
  CORBA::Object_ptr *_tao_obj_ptr;
  ACE_NEW_RETURN (_tao_obj_ptr, CORBA::Object_ptr, 0);
  if (stream.decode (CORBA::_tc_Current, _tao_obj_ptr, 0, _tao_env)
    == CORBA::TypeCode::TRAVERSE_CONTINUE)
  {
    _tao_elem = CORBA_Current::_narrow (*_tao_obj_ptr, _tao_env);
    if (_tao_env.exception ()) return 0; // narrow failed
    CORBA::release (*_tao_obj_ptr);
    *_tao_obj_ptr = _tao_elem;
    ((CORBA::Any *)&_tao_any)->replace (CORBA::_tc_Current, _tao_obj_ptr, 1, _tao_env);
    if (_tao_env.exception ()) return 0; // narrow failed
    return 1;
  }
  return 0; // failure
}
