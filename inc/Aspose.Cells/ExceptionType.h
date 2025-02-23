// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXCEPTIONTYPE_H
#define ASPOSE_CELLS_EXCEPTIONTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents custom exception type code.
/// </summary>
enum class ExceptionType {
    /// <summary>
    /// Invalid chart setting.
    /// </summary>
    Chart = 0,
    /// <summary>
    /// Invalid data type setting.
    /// </summary>
    DataType = 1,
    /// <summary>
    /// Invalid data validation setting.
    /// </summary>
    DataValidation = 2,
    /// <summary>
    /// Invalid data validation setting.
    /// </summary>
    ConditionalFormatting = 3,
    /// <summary>
    /// Invalid file format.
    /// </summary>
    FileFormat = 4,
    /// <summary>
    /// Invalid formula.
    /// </summary>
    Formula = 5,
    /// <summary>
    /// Invalid data.
    /// </summary>
    InvalidData = 6,
    /// <summary>
    /// Invalid operator.
    /// </summary>
    InvalidOperator = 7,
    /// <summary>
    /// Incorrect password.
    /// </summary>
    IncorrectPassword = 8,
    /// <summary>
    /// License related errors.
    /// </summary>
    License = 9,
    /// <summary>
    /// Out of MS Excel limitation error.
    /// </summary>
    Limitation = 10,
    /// <summary>
    /// Invalid page setup setting.
    /// </summary>
    PageSetup = 11,
    /// <summary>
    /// Invalid pivotTable setting.
    /// </summary>
    PivotTable = 12,
    /// <summary>
    /// Invalid drawing object setting.
    /// </summary>
    Shape = 13,
    /// <summary>
    /// Invalid sparkline object setting.
    /// </summary>
    Sparkline = 14,
    /// <summary>
    /// Invalid worksheet name.
    /// </summary>
    SheetName = 15,
    /// <summary>
    /// Invalid worksheet type.
    /// </summary>
    SheetType = 16,
    /// <summary>
    /// The process is interrupted.
    /// </summary>
    Interrupted = 17,
    /// <summary>
    /// The file is invalid.
    /// </summary>
    IO = 18,
    /// <summary>
    /// Permission is required to open this file.
    /// </summary>
    Permission = 19,
    /// <summary>
    /// Unsupported feature.
    /// </summary>
    UnsupportedFeature = 20,
    /// <summary>
    /// Unsupported stream to be opened.
    /// </summary>
    UnsupportedStream = 21,
    /// <summary>
    /// Files contains some undisclosed information.
    /// </summary>
    UndisclosedInformation = 22,
    /// <summary>
    /// File content is corrupted.
    /// </summary>
    FileCorrupted = 23,
    /// <summary>
    /// Internal exception.
    /// </summary>
    Internal = 24,
    /// <summary>
    /// Invalid defined name
    /// </summary>
    DefinedName = 25,
    /// <summary>
    /// Invalid font
    /// </summary>
    Font = 26,
    /// <summary>
    /// Invalid auto filter setting.
    /// </summary>
    AutoFilter = 27,
    /// <summary>
    /// Font substitution warning type
    /// when a font has not been found, this warning type can be get.
    /// </summary>
    FontSubstitution = 28,
};

} }

#endif
