// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ABSTRACTFORMULACHANGEMONITOR_H
#define ASPOSE_CELLS_ABSTRACTFORMULACHANGEMONITOR_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {

class AbstractFormulaChangeMonitor_Bridge;

/// <summary>
/// Monitor for user to track the change of formulas during certain operations.
/// </summary>
/// <remarks>For example, while deleting/inserting range of cells,
/// formulas of other cells may be changed because of the shift of references.</remarks>
class ASPOSE_CELLS_API2 AbstractFormulaChangeMonitor {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    AbstractFormulaChangeMonitor_Bridge* _impl;
    
public:
    /// <summary>
    /// The event that will be triggered when the formula in a cell is changed.
    /// </summary>
    /// <param name="sheetIndex">The sheet index of the changed cell</param>
    /// <param name="rowIndex">The row index of the changed cell</param>
    /// <param name="columnIndex">The column index of the changed cell</param>
    ASPOSE_CELLS_API virtual void OnCellFormulaChanged(int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex);
    
};

} }

#endif
