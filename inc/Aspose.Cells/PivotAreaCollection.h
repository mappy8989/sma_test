// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTAREACOLLECTION_H
#define ASPOSE_CELLS_PIVOT_PIVOTAREACOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotArea;
} } }

namespace Aspose { namespace Cells {
    class CellArea;
} }

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class PivotAreaCollection_Impl;

/// <summary>
/// Represents a list of pivot area.
/// </summary>
class PivotAreaCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotAreaCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotAreaCollection(PivotAreaCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotAreaCollection(const PivotAreaCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotAreaCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotAreaCollection& operator=(const PivotAreaCollection& src);
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
    /// Adds pivot area.
    /// </summary>
    /// <param name="pivotArea">The pivot area.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(const PivotArea& pivotArea);
    /// <summary>
    /// Remove one pivot conditional formatted area setting.
    /// </summary>
    /// <param name="index">The index</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    /// <summary>
    /// Gets a <see cref="PivotArea"/> object;
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API PivotArea Get(int32_t index);
    /// <summary>
    /// Adds an area based on pivot table view.
    /// </summary>
    /// <param name="cellArea">The area based on pivot table view.</param>
    ASPOSE_CELLS_API void Add(const CellArea& cellArea);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
