// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTCONDITIONALFORMATCOLLECTION_H
#define ASPOSE_CELLS_PIVOT_PIVOTCONDITIONALFORMATCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotConditionalFormat;
} } }

namespace Aspose { namespace Cells { namespace Pivot {

class PivotConditionalFormatCollection_Impl;

/// <summary>
/// Represents all conditional formats of pivot table.
/// </summary>
class PivotConditionalFormatCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotConditionalFormatCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotConditionalFormatCollection(PivotConditionalFormatCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotConditionalFormatCollection(const PivotConditionalFormatCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotConditionalFormatCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotConditionalFormatCollection& operator=(const PivotConditionalFormatCollection& src);
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
    /// Gets the pivot FormatCondition object at the specific index.
    /// </summary>
    /// <returns>pivot FormatCondition object.</returns>
    ASPOSE_CELLS_API PivotConditionalFormat Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
