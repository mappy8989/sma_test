// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ERRORCELLVALUETYPE_H
#define ASPOSE_CELLS_ERRORCELLVALUETYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents a cell value which contains an error.
/// </summary>
enum class ErrorCellValueType {
    /// <summary>
    /// Represents the value of a cell containing a #BLOCKED! error.
    /// </summary>
    Blocked = 10,
    /// <summary>
    /// Represents the value of a cell containing a #BUSY! error.
    /// </summary>
    Busy = 14,
    /// <summary>
    /// Represents the value of a cell containing a #CALC! error.
    /// </summary>
    Calc = 13,
    /// <summary>
    /// Represents the value of a cell containing a #CONNECT! error.
    /// </summary>
    Connect = 9,
    /// <summary>
    /// Represents the value of a cell containing a #NAME? error.
    /// </summary>
    Name = 4,
    /// <summary>
    /// Represents the value of a cell containing a #FIELD! error.
    /// </summary>
    Field = 12,
    /// <summary>
    /// Represents the value of a cell containing a #SPILL! error.
    /// </summary>
    Spill = 8,
    /// <summary>
    /// Represents the value of a cell containing a #UNKNOWN! error.
    /// </summary>
    Unknown = 11,
    /// <summary>
    /// Represents the value of a cell containing a #TIMEOUT! error.
    /// </summary>
    TimeOut = 19,
    /// <summary>
    /// Represents the value of a cell containing an #EXTERNAL! error.
    /// </summary>
    External = 18,
};

} }

#endif
