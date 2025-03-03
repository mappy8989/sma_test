﻿// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_QUERYTABLES_POWERQUERYFORMULAPARAMETER_H
#define ASPOSE_CELLS_QUERYTABLES_POWERQUERYFORMULAPARAMETER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/PowerQueryFormula.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/PowerQueryFormulaType.h"

namespace Aspose { namespace Cells { namespace QueryTables {

using namespace Aspose::Cells;

class PowerQueryFormulaParameter_Impl;

/// <summary>
/// Represents the parameter of power query formula.
/// </summary>
class PowerQueryFormulaParameter : public PowerQueryFormula {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PowerQueryFormulaParameter_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaParameter(PowerQueryFormulaParameter_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaParameter(const PowerQueryFormulaParameter& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaParameter(const PowerQueryFormula& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PowerQueryFormulaParameter();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaParameter& operator=(const PowerQueryFormulaParameter& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// Gets the type of power query formula.
    /// </summary>
    ASPOSE_CELLS_API PowerQueryFormulaType GetType();
    /// <summary>
    /// Gets the value of parameter.
    /// </summary>
    ASPOSE_CELLS_API U16String GetValue();
    /// <summary>
    /// Gets the value of parameter.
    /// </summary>
    ASPOSE_CELLS_API void SetValue(const U16String& value);
    /// <summary>
    /// Gets the value of parameter.
    /// </summary>
    ASPOSE_CELLS_API void SetValue(const char16_t* value);
    /// <summary>
    /// Gets the definition of the parameter.
    /// </summary>
    ASPOSE_CELLS_API U16String GetFormulaDefinition();
    
};

} } }

#endif
