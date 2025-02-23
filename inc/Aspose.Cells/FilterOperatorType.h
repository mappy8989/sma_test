// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FILTEROPERATORTYPE_H
#define ASPOSE_CELLS_FILTEROPERATORTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Custom Filter operator type.
/// </summary>
enum class FilterOperatorType {
    /// <summary>
    /// Represents LessOrEqual operator.
    /// </summary>
    LessOrEqual = 0,
    /// <summary>
    /// Represents LessThan operator.
    /// </summary>
    LessThan = 1,
    /// <summary>
    /// Represents Equal operator.
    /// </summary>
    Equal = 2,
    /// <summary>
    /// Represents GreaterThan operator.
    /// </summary>
    GreaterThan = 3,
    /// <summary>
    /// Represents NotEqual operator.
    /// </summary>
    NotEqual = 4,
    /// <summary>
    /// Represents GreaterOrEqual operator.
    /// </summary>
    GreaterOrEqual = 5,
    /// <summary>
    /// Represents no comparison.
    /// </summary>
    None = 6,
    /// <summary>
    /// Begins with the text.
    /// </summary>
    BeginsWith = 7,
    /// <summary>
    /// Ends with the text.
    /// </summary>
    EndsWith = 8,
    /// <summary>
    /// Contains the text.
    /// </summary>
    Contains = 9,
    /// <summary>
    /// Not contains the text.
    /// </summary>
    NotContains = 10,
    /// <summary>
    /// Not begins with the text.
    /// </summary>
    NotBeginsWith = 11,
    /// <summary>
    /// Not ends with the text.
    /// </summary>
    NotEndsWith = 12,
};

} }

#endif
