// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTFORMATCONDITIONCOLLECTION_H
#define ASPOSE_CELLS_PIVOT_PIVOTFORMATCONDITIONCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotFormatCondition;
} } }

namespace Aspose { namespace Cells { namespace Pivot {

class PivotFormatConditionCollection_Impl;

/// <summary>
/// Represents PivotTable Format Conditions.
/// </summary>
/// <remarks>
/// NOTE: This method is now obsolete. Instead,
/// please use PivotConditionalFormatCollection class.
/// This method will be removed 12 months later since December 2024.
/// Aspose apologizes for any inconvenience you may have experienced.
/// </remarks>
/// @deprecated Use PivotConditionalFormatCollection class instead.
class [[deprecated]] PivotFormatConditionCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotFormatConditionCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotFormatConditionCollection(PivotFormatConditionCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotFormatConditionCollection(const PivotFormatConditionCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotFormatConditionCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotFormatConditionCollection& operator=(const PivotFormatConditionCollection& src);
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
    /// Adds a pivot FormatCondition to the collection.
    /// </summary>
    /// <returns>pivot FormatCondition object index.</returns>
    /// <remarks>not supported</remarks>
    ASPOSE_CELLS_API int32_t Add();
    /// <summary>
    /// Gets the count of conditional formats.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCount();
    /// <summary>
    /// Remove a conditional formats.
    /// </summary>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    /// <summary>
    /// Gets the pivot FormatCondition object at the specific index.
    /// </summary>
    /// <returns>pivot FormatCondition object.</returns>
    ASPOSE_CELLS_API PivotFormatCondition Get(int32_t index);
    
};

} } }

#endif
