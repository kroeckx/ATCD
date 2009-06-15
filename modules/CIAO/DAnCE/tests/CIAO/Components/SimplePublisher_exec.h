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
// be/be_codegen.cpp:1301

#ifndef CIAO_SIMPLEPUBLISHER_EXEC_H_
#define CIAO_SIMPLEPUBLISHER_EXEC_H_

#include /**/ "ace/pre.h"

#include "SimplePublisherEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "SimplePublisher_exec_export.h"
#include "tao/LocalObject.h"

namespace CIAO_Simple_SimplePublisher_Impl
{
  class SIMPLEPUBLISHER_EXEC_Export SimplePublisher_exec_i
    : public virtual SimplePublisher_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    SimplePublisher_exec_i (void);
    virtual ~SimplePublisher_exec_i (void);
    
    // Supported operations and attributes.
    
    // Component attributes.
    
    // Port operations.
    
    // Operations from Components::SessionComponent.
    
    virtual void
    set_session_context (
      ::Components::SessionContext_ptr ctx);
    
    virtual void configuration_complete (void);
    
    virtual void ccm_activate (void);
    virtual void ccm_passivate (void);
    virtual void ccm_remove (void);
  
  private:
    ::Simple::CCM_SimplePublisher_Context_var context_;
  };
  
  extern "C" SIMPLEPUBLISHER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Simple_SimplePublisher_Impl (void);
}

namespace CIAO_Simple_SimplePublisher_Impl
{
  class SIMPLEPUBLISHER_EXEC_Export SimplePublisherHome_exec_i
    : public virtual SimplePublisherHome_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    SimplePublisherHome_exec_i (void);
    
    virtual ~SimplePublisherHome_exec_i (void);
    
    // All operations and attributes.
    
    // Factory operations.
    
    // Finder operations.
    
    // Implicit operations.
    
    virtual ::Components::EnterpriseComponent_ptr
    create (void);
  };
  
  extern "C" SIMPLEPUBLISHER_EXEC_Export ::Components::HomeExecutorBase_ptr
  create_Simple_SimplePublisherHome_Impl (void);
}

#include /**/ "ace/post.h"

#endif /* ifndef */

