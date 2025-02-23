﻿// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTITEM_H
#define ASPOSE_CELLS_PIVOT_PIVOTITEM_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Date.h"
#include "Aspose.Cells/Object.h"

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class PivotItem_Impl;

/// <summary>
/// Represents a item in a PivotField report.
/// </summary>
class ASPOSE_CELLS_API2 PivotItem {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotItem_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotItem(PivotItem_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotItem(const PivotItem& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotItem();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotItem& operator=(const PivotItem& src);
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
    /// Gets and Sets whether the pivot item is hidden.
    /// </summary>
    ASPOSE_CELLS_API bool IsHidden();
    /// <summary>
    /// Gets and Sets whether the pivot item is hidden.
    /// </summary>
    ASPOSE_CELLS_API void SetIsHidden(bool value);
    /// <summary>
    /// Specifying the position index in all the PivotItems,not the PivotItems under the same parent node.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPosition();
    /// <summary>
    /// Specifying the position index in all the PivotItems,not the PivotItems under the same parent node.
    /// </summary>
    ASPOSE_CELLS_API void SetPosition(int32_t value);
    /// <summary>
    /// Specifying the position index in the PivotItems under the same parent node.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPositionInSameParentNode();
    /// <summary>
    /// Specifying the position index in the PivotItems under the same parent node.
    /// </summary>
    ASPOSE_CELLS_API void SetPositionInSameParentNode(int32_t value);
    /// <summary>
    /// Moves the item up or down
    /// </summary>
    /// <param name="count">
    /// The number of moving up or down.
    /// Move the item up if this is less than zero;
    /// Move the item down if this is greater than zero.
    /// </param>
    /// <param name="isSameParent">
    /// Specifying whether moving operation is in the same parent node or not
    /// </param>
    ASPOSE_CELLS_API void Move(int32_t count, bool isSameParent);
    /// <summary>
    /// Gets and sets whether the detail of this pivot item is hidden.
    /// </summary>
    ASPOSE_CELLS_API bool IsDetailHidden();
    /// <summary>
    /// Gets and sets whether the detail of this pivot item is hidden.
    /// </summary>
    ASPOSE_CELLS_API void SetIsDetailHidden(bool value);
    /// <summary>
    /// Indicates whether this pivot item is a calculated formula item.
    /// </summary>
    ASPOSE_CELLS_API bool IsCalculatedItem();
    /// <summary>
    /// Gets the formula of this calculated item.
    /// Only works when this item is calculated item.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String GetFormula();
    /// <summary>
    /// Indicates whether the item is removed from the data source.
    /// </summary>
    /// <remarks>
    /// True means this value has benn removed from the data source.
    /// </remarks>
    ASPOSE_CELLS_API bool IsMissing();
    /// <summary>
    /// Gets the string value of the pivot item
    /// If the value is null, it will return ""
    /// </summary>
    ASPOSE_CELLS_API U16String GetStringValue();
    /// <summary>
    /// Gets the double value of the pivot item
    /// If the value is null or not number ,it will return 0
    /// </summary>
    ASPOSE_CELLS_API double GetDoubleValue();
    /// <summary>
    /// Gets the date time value of the pivot item
    /// If the value is null ,it will return DateTime.MinValue
    /// </summary>
    ASPOSE_CELLS_API Date GetDateTimeValue();
    /// <summary>
    /// Gets the value of the pivot item
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Object GetValue();
    /// <summary>
    /// Gets the name of the pivot item.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets the name of the pivot item.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets the name of the pivot item.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Gets the index of the pivot item in cache field.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetIndex();
    /// <summary>
    /// Gets the index of the pivot item in cache field.
    /// </summary>
    ASPOSE_CELLS_API void SetIndex(int32_t value);
    
};

} } }

#endif
