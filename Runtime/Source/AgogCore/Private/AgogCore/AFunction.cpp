//=======================================================================================
// Agog Labs C++ library.
// Copyright (c) 2000 Agog Labs Inc.,
// All rights reserved.
//
//  AFunction class definition module
// Author(s):    Conan Reis
// Create Date:   2000-01-11
// Notes:          
//=======================================================================================


//=======================================================================================
// Includes
//=======================================================================================

#include <AgogCore/AgogCore.hpp> // Always include AgogCore first (as some builds require a designated precompiled header)
#include <AgogCore/AFunction.hpp>


//=======================================================================================
// Method Definitions
//=======================================================================================

//---------------------------------------------------------------------------------------
// Adds copy_new()
AFUNC_COPY_NEW_DECL(AFunction, AFunctionBase)


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Modifying Methods
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//---------------------------------------------------------------------------------------
// Invokes the stored function.
// Examples:   func.invoke();
// Notes:      overridden from AFunctionBase
// Modifiers:   virtual
// Author(s):   Conan Reis
void AFunction::invoke()
  {
  if (m_function_f)
    {
    (m_function_f)();
    }
  }
