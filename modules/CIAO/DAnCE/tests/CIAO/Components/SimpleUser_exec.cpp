// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler v1.6.9 ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be/be_codegen.cpp:1372

#include "SimpleUser_exec.h"
#include "ciao/CIAO_common.h"

namespace CIAO_Simple_SimpleUser_Impl
{
  //============================================================
  // Component Executor Implementation Class: SimpleUser_exec_i
  //============================================================
  
  SimpleUser_exec_i::SimpleUser_exec_i (void)
  {
  }
  
  SimpleUser_exec_i::~SimpleUser_exec_i (void)
  {
  }
  
  // Supported operations and attributes.
  
  // Component attributes.
  
  // Port operations.
  
  // Operations from Components::SessionComponent.
  
  void
  SimpleUser_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->context_ =
      ::Simple::CCM_SimpleUser_Context::_narrow (ctx);
    
    if ( ::CORBA::is_nil (this->context_.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }
  }
  
  void
  SimpleUser_exec_i::configuration_complete (void)
  {
    /* Your code here. */
  }
  
  void
  SimpleUser_exec_i::ccm_activate (void)
  {
    /* Your code here. */
  }
  
  void
  SimpleUser_exec_i::ccm_passivate (void)
  {
    /* Your code here. */
  }
  
  void
  SimpleUser_exec_i::ccm_remove (void)
  {
    /* Your code here. */
  }
  
  extern "C" SIMPLEUSER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Simple_SimpleUser_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();
    
    ACE_NEW_RETURN (
      retval,
      SimpleUser_exec_i,
      ::Components::EnterpriseComponent::_nil ());
    
    return retval;
  }
}

namespace CIAO_Simple_SimpleUser_Impl
{
  //============================================================
  // Home Executor Implementation Class: SimpleUserHome_exec_i
  //============================================================
  
  SimpleUserHome_exec_i::SimpleUserHome_exec_i (void)
  {
  }
  
  SimpleUserHome_exec_i::~SimpleUserHome_exec_i (void)
  {
  }
  
  // All operations and attributes.
  
  // Factory operations.
  
  // Finder operations.
  
  // Implicit operations.
  
  ::Components::EnterpriseComponent_ptr
  SimpleUserHome_exec_i::create (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();
    
    ACE_NEW_THROW_EX (
      retval,
      SimpleUser_exec_i,
      ::CORBA::NO_MEMORY ());
    
    return retval;
  }
  
  extern "C" SIMPLEUSER_EXEC_Export ::Components::HomeExecutorBase_ptr
  create_Simple_SimpleUserHome_Impl (void)
  {
    ::Components::HomeExecutorBase_ptr retval =
      ::Components::HomeExecutorBase::_nil ();
    
    ACE_NEW_RETURN (
      retval,
      SimpleUserHome_exec_i,
      ::Components::HomeExecutorBase::_nil ());
    
    return retval;
  }
}

