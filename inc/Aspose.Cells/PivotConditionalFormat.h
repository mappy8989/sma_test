// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTCONDITIONALFORMAT_H
#define ASPOSE_CELLS_PIVOT_PIVOTCONDITIONALFORMAT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/PivotConditionFormatRuleType.h"
#include "Aspose.Cells/PivotConditionFormatScopeType.h"
#include "Aspose.Cells/PivotFieldType.h"

namespace Aspose { namespace Cells {
    class CellArea;
    class FormatConditionCollection;
} }

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotAreaCollection;
    class PivotField;
} } }

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class PivotConditionalFormat_Impl;

/// <summary>
/// Represents a PivotTable Format Condition in PivotFormatCondition Collection.
/// </summary>
class PivotConditionalFormat {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotConditionalFormat_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotConditionalFormat(PivotConditionalFormat_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotConditionalFormat(const PivotConditionalFormat& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotConditionalFormat();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotConditionalFormat& operator=(const PivotConditionalFormat& src);
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
    /// Gets all cell areas where this conditional format applies to.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API Vector<CellArea> GetCellAreas();
    /// <summary>
    /// Gets all pivot areas.
    /// </summary>
    ASPOSE_CELLS_API PivotAreaCollection GetPivotAreas();
    /// <summary>
    /// Adds an area based on pivot table view.
    /// </summary>
    /// <param name="ca">The cell area.</param>
    ASPOSE_CELLS_API void AddCellArea(const CellArea& ca);
    /// <summary>
    /// Applies the conditional format to range.
    /// Only for the data region.
    /// </summary>
    /// <param name="row">The selected row.</param>
    /// <param name="column">The selected column.</param>
    /// <param name="scope">The scope</param>
    ASPOSE_CELLS_API void ApplyTo(int32_t row, int32_t column, PivotConditionFormatScopeType scope);
    /// <summary>
    /// Adds an area of pivot field.
    /// </summary>
    /// <param name="axisType">The region type.</param>
    /// <param name="fieldName">The name of pivot field.</param>
    ASPOSE_CELLS_API void AddFieldArea(PivotFieldType axisType, const U16String& fieldName);
    /// <summary>
    /// Adds an area of pivot field.
    /// </summary>
    /// <param name="axisType">The region type.</param>
    /// <param name="fieldName">The name of pivot field.</param>
    ASPOSE_CELLS_API void AddFieldArea(PivotFieldType axisType, const char16_t* fieldName);
    /// <summary>
    /// Adds an area of pivot field.
    /// </summary>
    /// <param name="axisType">The region type.</param>
    /// <param name="field">The pivot field.</param>
    ASPOSE_CELLS_API void AddFieldArea(PivotFieldType axisType, const PivotField& field);
    /// <summary>
    /// Get conditions for the pivot table conditional format .
    /// </summary>
    ASPOSE_CELLS_API FormatConditionCollection GetFormatConditions();
    /// <summary>
    /// Get and set scope type for the pivot table conditional format .
    /// </summary>
    ASPOSE_CELLS_API PivotConditionFormatScopeType GetScopeType();
    /// <summary>
    /// Get and set scope type for the pivot table conditional format .
    /// </summary>
    ASPOSE_CELLS_API void SetScopeType(PivotConditionFormatScopeType value);
    /// <summary>
    /// Get and set rule type for the pivot table condition format .
    /// </summary>
    ASPOSE_CELLS_API PivotConditionFormatRuleType GetRuleType();
    /// <summary>
    /// Get and set rule type for the pivot table condition format .
    /// </summary>
    ASPOSE_CELLS_API void SetRuleType(PivotConditionFormatRuleType value);
    
};

} } }

#endif
