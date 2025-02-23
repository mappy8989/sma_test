// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DELETEBLANKOPTIONS_H
#define ASPOSE_CELLS_DELETEBLANKOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/DeleteOptions.h"

#include "Aspose.Cells/MergedCellsShrinkType.h"

namespace Aspose { namespace Cells {

class DeleteBlankOptions_Impl;

/// <summary>
/// Represents the setting of deleting blank cells/rows/columns.
/// </summary>
class DeleteBlankOptions : public DeleteOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DeleteBlankOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API DeleteBlankOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DeleteBlankOptions(DeleteBlankOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DeleteBlankOptions(const DeleteBlankOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API DeleteBlankOptions(const DeleteOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DeleteBlankOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DeleteBlankOptions& operator=(const DeleteBlankOptions& src);
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
    /// Whether one cell will be taken as blank when its value is empty string.
    /// Default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetEmptyStringAsBlank();
    /// <summary>
    /// Whether one cell will be taken as blank when its value is empty string.
    /// Default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetEmptyStringAsBlank(bool value);
    /// <summary>
    /// Whether one cell will be taken as blank when it is formula and the calculated result is null or empty string.
    /// Default value is false.
    /// </summary>
    /// <remarks>
    /// Generally user should make sure the formulas have been calculated before deleting operation with this property as true.
    /// Otherwise all newly cretaed formulas by normal apis such as <see cref="Cell.Formula"/> will be taken as blank and may be deleted
    /// because before calculation their calculated results are all null.
    /// </remarks>
    ASPOSE_CELLS_API bool GetEmptyFormulaValueAsBlank();
    /// <summary>
    /// Whether one cell will be taken as blank when it is formula and the calculated result is null or empty string.
    /// Default value is false.
    /// </summary>
    /// <remarks>
    /// Generally user should make sure the formulas have been calculated before deleting operation with this property as true.
    /// Otherwise all newly cretaed formulas by normal apis such as <see cref="Cell.Formula"/> will be taken as blank and may be deleted
    /// because before calculation their calculated results are all null.
    /// </remarks>
    ASPOSE_CELLS_API void SetEmptyFormulaValueAsBlank(bool value);
    /// <summary>
    /// Whether drawing related objects such as picture, shape, chart... will be taken as blank.
    /// Default value is true.
    /// </summary>
    /// <remarks>
    /// When setting this property as false,
    /// all rows/columns covered by drawing objects will not be taken as blank and will not be deleted.
    /// </remarks>
    ASPOSE_CELLS_API bool GetDrawingsAsBlank();
    /// <summary>
    /// Whether drawing related objects such as picture, shape, chart... will be taken as blank.
    /// Default value is true.
    /// </summary>
    /// <remarks>
    /// When setting this property as false,
    /// all rows/columns covered by drawing objects will not be taken as blank and will not be deleted.
    /// </remarks>
    ASPOSE_CELLS_API void SetDrawingsAsBlank(bool value);
    /// <summary>
    /// Indicates how to process merged cells when deleting blank rows/columns.
    /// </summary>
    /// <remarks>
    /// For <see cref="MergedCellsShrinkType.KeepHeaderOnly"/>, all cells in it will be taken as blank except the non-blank top-left cell. It is the default value of this property.<br></br>
    /// For <see cref="MergedCellsShrinkType.None"/>, all cells in it will be taken as non-blank.<br></br>
    /// For <see cref="MergedCellsShrinkType.ShrinkToFit"/>, all cells outside the content display area will be taken as blank.<br></br>
    /// </remarks>
    ASPOSE_CELLS_API MergedCellsShrinkType GetMergedCellsShrinkType();
    /// <summary>
    /// Indicates how to process merged cells when deleting blank rows/columns.
    /// </summary>
    /// <remarks>
    /// For <see cref="MergedCellsShrinkType.KeepHeaderOnly"/>, all cells in it will be taken as blank except the non-blank top-left cell. It is the default value of this property.<br></br>
    /// For <see cref="MergedCellsShrinkType.None"/>, all cells in it will be taken as non-blank.<br></br>
    /// For <see cref="MergedCellsShrinkType.ShrinkToFit"/>, all cells outside the content display area will be taken as blank.<br></br>
    /// </remarks>
    ASPOSE_CELLS_API void SetMergedCellsShrinkType(MergedCellsShrinkType value);
    /// <summary>
    /// Specifies the start row/column index of the range to check and delete blank rows/columns.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetStartIndex();
    /// <summary>
    /// Specifies the start row/column index of the range to check and delete blank rows/columns.
    /// </summary>
    ASPOSE_CELLS_API void SetStartIndex(int32_t value);
    /// <summary>
    /// Specifies the end row/column index(inclusive) of the range to check and delete blank rows/columns.
    /// Default value is -1 and -1 means the maximum range of all objects(cells, drawings, ...) that need to be checked.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetEndIndex();
    /// <summary>
    /// Specifies the end row/column index(inclusive) of the range to check and delete blank rows/columns.
    /// Default value is -1 and -1 means the maximum range of all objects(cells, drawings, ...) that need to be checked.
    /// </summary>
    ASPOSE_CELLS_API void SetEndIndex(int32_t value);
    
};

} }

#endif
