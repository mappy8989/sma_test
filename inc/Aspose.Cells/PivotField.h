﻿// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTFIELD_H
#define ASPOSE_CELLS_PIVOT_PIVOTFIELD_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Date.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ConsolidationFunction.h"
#include "Aspose.Cells/PivotFieldDataDisplayFormat.h"
#include "Aspose.Cells/PivotFieldSubtotalType.h"
#include "Aspose.Cells/PivotFieldType.h"
#include "Aspose.Cells/PivotFilterType.h"
#include "Aspose.Cells/PivotGroupByType.h"
#include "Aspose.Cells/PivotItemPositionType.h"
#include "Aspose.Cells/PivotLineType.h"
#include "Aspose.Cells/SortOrder.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotItemCollection;
    class PivotFieldGroupSettings;
    class CustomPiovtFieldGroupItem;
    class PivotFilter;
    class PivotFieldSortSetting;
    class PivotShowValuesSetting;
} } }

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class PivotField_Impl;

/// <summary>
/// Represents a field in a PivotTable report.
/// </summary>
class ASPOSE_CELLS_API2 PivotField {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotField_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotField(PivotField_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotField(const PivotField& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotField();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotField& operator=(const PivotField& src);
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
    /// Gets the pivot items of the pivot field
    /// </summary>
    ASPOSE_CELLS_API PivotItemCollection GetPivotItems();
    /// <summary>
    /// Gets the group settings of the pivot field.
    /// </summary>
    /// <remarks>
    /// If this field is not grouped, Null will be returned.
    /// </remarks>
    ASPOSE_CELLS_API PivotFieldGroupSettings GetGroupSettings();
    /// <summary>
    /// Init the pivot items of the pivot field
    /// </summary>
    ASPOSE_CELLS_API void InitPivotItems();
    /// <summary>
    /// Automatically group the field with internal
    /// </summary>
    /// <param name="interval">The internal of group.
    /// Automatic value will be assigned if it's zero,
    /// </param>
    /// <param name="newField">Indicates whether adding a new field to the pivottable.</param>
    ASPOSE_CELLS_API void GroupBy(double interval, bool newField);
    /// <summary>
    /// Group the file by the date group types.
    /// </summary>
    /// <param name="start">The start datetime</param>
    /// <param name="end">The end of datetime</param>
    /// <param name="groups">Group types</param>
    /// <param name="interval">The interval</param>
    /// <param name="firstAsNewField">Indicates whether adding a new field to the pivottable.
    /// Only for the first group item.
    /// </param>
    /// <returns>
    /// False means this field could not be grouped by date time.
    /// </returns>
    ASPOSE_CELLS_API bool GroupBy(const Date& start, const Date& end, const Vector<PivotGroupByType>& groups, double interval, bool firstAsNewField);
    /// <summary>
    /// Group the file by number.
    /// </summary>
    /// <param name="start">The start value</param>
    /// <param name="end">The end of value</param>
    /// <param name="interval">The interval</param>
    /// <param name="newField">Indicates whether adding a new field to the pivottable
    /// </param>
    /// <returns>
    /// False means this field could not be grouped by date time.
    /// </returns>
    ASPOSE_CELLS_API bool GroupBy(double start, double end, double interval, bool newField);
    /// <summary>
    /// Custom group the field.
    /// </summary>
    /// <param name="customGroupItems">The custom group items.</param>
    /// <param name="newField">Indicates whether adding a new field to the pivottable</param>
    /// <returns>
    /// False means this field could not be grouped by date time.
    /// </returns>
    ASPOSE_CELLS_API bool GroupBy(const Vector<CustomPiovtFieldGroupItem>& customGroupItems, bool newField);
    /// <summary>
    /// Ungroup the pivot field.
    /// </summary>
    ASPOSE_CELLS_API void Ungroup();
    /// <summary>
    /// Gets the pivot filter of the pivot field by type
    /// </summary>
    ASPOSE_CELLS_API PivotFilter GetPivotFilterByType(PivotFilterType type);
    /// <summary>
    /// Gets all pivot filters of this pivot field.
    /// </summary>
    ASPOSE_CELLS_API Vector<PivotFilter> GetFilters();
    /// <summary>
    /// Clears filter setting on this pivot field.
    /// </summary>
    ASPOSE_CELLS_API void ClearFilter();
    /// <summary>
    /// Filters by values of data pivot field.
    /// </summary>
    /// <param name="valueFieldIndex">The index of data field  in the data region.</param>
    /// <param name="type">The type of filtering data. Only can be Count,Sum and Percent.
    /// </param>
    /// <param name="isTop">Indicates whether filter from top or bottom</param>
    /// <param name="itemCount">The item count</param>
    ASPOSE_CELLS_API PivotFilter FilterTop10(int32_t valueFieldIndex, PivotFilterType type, bool isTop, int32_t itemCount);
    /// <summary>
    /// Filters by values of data pivot field.
    /// </summary>
    /// <param name="valueFieldIndex">The index of value field in the value region.</param>
    /// <param name="type">The type of filtering data.</param>
    /// <param name="value1">The value of filter condition</param>
    /// <param name="value2">The upper-bound value of between filter condition</param>
    ASPOSE_CELLS_API PivotFilter FilterByValue(int32_t valueFieldIndex, PivotFilterType type, double value1, double value2);
    /// <summary>
    /// Filters by captions of row or column pivot field.
    /// </summary>
    /// <param name="type">The type of filtering data.</param>
    /// <param name="label1">The label of filter condition</param>
    /// <param name="label2">The upper-bound label of between filter condition</param>
    ASPOSE_CELLS_API PivotFilter FilterByLabel(PivotFilterType type, const U16String& label1, const U16String& label2);
    /// <summary>
    /// Filters by captions of row or column pivot field.
    /// </summary>
    /// <param name="type">The type of filtering data.</param>
    /// <param name="label1">The label of filter condition</param>
    /// <param name="label2">The upper-bound label of between filter condition</param>
    ASPOSE_CELLS_API PivotFilter FilterByLabel(PivotFilterType type, const char16_t* label1, const char16_t* label2);
    /// <summary>
    /// Filters by date setting of row or column pivot field.
    /// </summary>
    /// <param name="type">The type of filtering data.</param>
    /// <param name="dateTime1">The date label of filter condition</param>
    /// <param name="dateTime2">The upper-bound date label of between filter condition</param>
    ASPOSE_CELLS_API PivotFilter FilterByDate(PivotFilterType type, const Date& dateTime1, const Date& dateTime2);
    /// <summary>
    /// Indicates whether the specified PivotTable field is calculated field.
    /// </summary>
    ASPOSE_CELLS_API bool IsCalculatedField();
    /// <summary>
    /// Gets formula of the calculated field .
    /// </summary>
    ASPOSE_CELLS_API U16String GetFormula();
    /// <summary>
    /// Indicates whether this field represents values fields.
    /// </summary>
    ASPOSE_CELLS_API bool IsValueFields();
    /// <summary>
    /// Represents the PivotField index in the base PivotFields.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetBaseIndex();
    /// <summary>
    /// Represents the PivotField index in the base PivotFields.
    /// </summary>
    ASPOSE_CELLS_API void SetBaseIndex(int32_t value);
    /// <summary>
    /// Represents the index of <see cref="PivotField"/> in the region.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPosition();
    /// <summary>
    /// Specifies the region of the PivotTable that this field is displayed.
    /// </summary>
    ASPOSE_CELLS_API PivotFieldType GetRegionType();
    /// <summary>
    /// Represents the name of PivotField.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Represents the name of PivotField.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Represents the name of PivotField.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Represents the PivotField display name.
    /// </summary>
    ASPOSE_CELLS_API U16String GetDisplayName();
    /// <summary>
    /// Represents the PivotField display name.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayName(const U16String& value);
    /// <summary>
    /// Represents the PivotField display name.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayName(const char16_t* value);
    /// <summary>
    /// Sets whether the specified field shows that subtotals.
    /// </summary>
    /// <param name="subtotalType">subtotals type.</param>
    /// <param name="shown">whether the specified field shows that subtotals.</param>
    /// <see cref="PivotFieldSubtotalType"/>
    ASPOSE_CELLS_API void SetSubtotals(PivotFieldSubtotalType subtotalType, bool shown);
    /// <summary>
    /// Indicates whether showing specified subtotal.
    /// </summary>
    /// <param name="subtotalType">subtotal type.</param>
    /// <returns>Returns whether showing specified subtotal.</returns>
    ASPOSE_CELLS_API bool GetSubtotals(PivotFieldSubtotalType subtotalType);
    /// <summary>
    /// Indicates whether the specified field shows automatic subtotals. Default is true.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoSubtotals();
    /// <summary>
    /// Indicates whether the specified field shows automatic subtotals. Default is true.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoSubtotals(bool value);
    /// <summary>
    /// Indicates whether the specified field can be dragged to the column position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetDragToColumn();
    /// <summary>
    /// Indicates whether the specified field can be dragged to the column position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetDragToColumn(bool value);
    /// <summary>
    /// Indicates whether the specified field can be dragged to the hide position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetDragToHide();
    /// <summary>
    /// Indicates whether the specified field can be dragged to the hide position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetDragToHide(bool value);
    /// <summary>
    /// Indicates whether the specified field can be dragged to the row position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetDragToRow();
    /// <summary>
    /// Indicates whether the specified field can be dragged to the row position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetDragToRow(bool value);
    /// <summary>
    /// Indicates whether the specified field can be dragged to the page position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetDragToPage();
    /// <summary>
    /// Indicates whether the specified field can be dragged to the page position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetDragToPage(bool value);
    /// <summary>
    /// Indicates whether the specified field can be dragged to the data position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetDragToData();
    /// <summary>
    /// Indicates whether the specified field can be dragged to the data position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetDragToData(bool value);
    /// <summary>
    /// indicates whether the field can have multiple items
    /// selected in the page field
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsMultipleItemSelectionAllowed();
    /// <summary>
    /// indicates whether the field can have multiple items
    /// selected in the page field
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsMultipleItemSelectionAllowed(bool value);
    /// <summary>
    /// Indicates whether repeating labels of the field in the region.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsRepeatItemLabels();
    /// <summary>
    /// Indicates whether repeating labels of the field in the region.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsRepeatItemLabels(bool value);
    /// <summary>
    /// Indicates whether including new items to the field in manual filter.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsIncludeNewItemsInFilter();
    /// <summary>
    /// Indicates whether including new items to the field in manual filter.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsIncludeNewItemsInFilter(bool value);
    /// <summary>
    /// Indicates whether inserting page breaks after each item.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsInsertPageBreaksBetweenItems();
    /// <summary>
    /// Indicates whether inserting page breaks after each item.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsInsertPageBreaksBetweenItems(bool value);
    /// <summary>
    /// Indicates whether all items displays in the PivotTable report,
    /// even if they don't contain summary data.
    /// show items with no data
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowAllItems();
    /// <summary>
    /// Indicates whether all items displays in the PivotTable report,
    /// even if they don't contain summary data.
    /// show items with no data
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetShowAllItems(bool value);
    /// <summary>
    /// Sorts this pivot field.
    /// </summary>
    /// <param name="sortType">The type of sorting this field.</param>
    /// <param name="fieldSortedBy">The index of pivot field sorted by.
    /// -1 means sorting by data labels of this field, others mean the index of data field sorted by.
    /// </param>
    ASPOSE_CELLS_API void SortBy(SortOrder sortType, int32_t fieldSortedBy);
    /// <summary>
    /// Sorts this pivot field.
    /// </summary>
    /// <param name="sortType">The type of sorting this field.</param>
    /// <param name="fieldSortedBy">The index of pivot field sorted by.
    /// -1 means sorting by data labels of this field, others mean the index of data field sorted by.
    /// </param>
    /// <param name="dataType">The type of data sorted by. </param>
    /// <param name="cellName">Sort by values in the row or column</param>
    ASPOSE_CELLS_API void SortBy(SortOrder sortType, int32_t fieldSortedBy, PivotLineType dataType, const U16String& cellName);
    /// <summary>
    /// Sorts this pivot field.
    /// </summary>
    /// <param name="sortType">The type of sorting this field.</param>
    /// <param name="fieldSortedBy">The index of pivot field sorted by.
    /// -1 means sorting by data labels of this field, others mean the index of data field sorted by.
    /// </param>
    /// <param name="dataType">The type of data sorted by. </param>
    /// <param name="cellName">Sort by values in the row or column</param>
    ASPOSE_CELLS_API void SortBy(SortOrder sortType, int32_t fieldSortedBy, PivotLineType dataType, const char16_t* cellName);
    /// <summary>
    /// Indicates whether a sort operation that will be applied to this pivot field is an autosort operation or a simple data sort.
    /// </summary>
    ASPOSE_CELLS_API bool GetNonAutoSortDefault();
    /// <summary>
    /// Indicates whether a sort operation that will be applied to this pivot field is an autosort operation or a simple data sort.
    /// </summary>
    ASPOSE_CELLS_API void SetNonAutoSortDefault(bool value);
    /// <summary>
    /// Indicates whether the specified PivotTable field is automatically sorted.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoSort();
    /// <summary>
    /// Indicates whether the specified PivotTable field is automatically sorted.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoSort(bool value);
    /// <summary>
    /// Indicates whether the specified PivotTable field is autosorted ascending.
    /// </summary>
    ASPOSE_CELLS_API bool IsAscendSort();
    /// <summary>
    /// Indicates whether the specified PivotTable field is autosorted ascending.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAscendSort(bool value);
    /// <summary>
    /// Gets all settings of auto sorting
    /// </summary>
    ASPOSE_CELLS_API PivotFieldSortSetting GetSortSetting();
    /// <summary>
    /// Represents the index of field which is auto sorted.
    /// -1 means PivotField itself,others means the position of the data fields.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetAutoSortField();
    /// <summary>
    /// Represents the index of field which is auto sorted.
    /// -1 means PivotField itself,others means the position of the data fields.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoSortField(int32_t value);
    /// <summary>
    /// Indicates whether the specified PivotTable field is automatically shown,only valid for excel 2003.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoShow();
    /// <summary>
    /// Indicates whether the specified PivotTable field is automatically shown,only valid for excel 2003.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoShow(bool value);
    /// <summary>
    /// Indicates whether the specified PivotTable field is autoshown ascending.
    /// </summary>
    ASPOSE_CELLS_API bool IsAscendShow();
    /// <summary>
    /// Indicates whether the specified PivotTable field is autoshown ascending.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAscendShow(bool value);
    /// <summary>
    /// Represent the number of top or bottom items
    /// that are automatically shown in the specified PivotTable field.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetAutoShowCount();
    /// <summary>
    /// Represent the number of top or bottom items
    /// that are automatically shown in the specified PivotTable field.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoShowCount(int32_t value);
    /// <summary>
    /// Represents auto show field index. -1 means PivotField itself.
    /// It should be the index of the data fields.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetAutoShowField();
    /// <summary>
    /// Represents auto show field index. -1 means PivotField itself.
    /// It should be the index of the data fields.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoShowField(int32_t value);
    /// <summary>
    /// Represents the function used to summarize the PivotTable data field.
    /// </summary>
    ASPOSE_CELLS_API ConsolidationFunction GetFunction();
    /// <summary>
    /// Represents the function used to summarize the PivotTable data field.
    /// </summary>
    ASPOSE_CELLS_API void SetFunction(ConsolidationFunction value);
    /// <summary>
    /// Shows values of data field as different display format when the ShowDataAs calculation is in use.
    /// </summary>
    /// <param name="displayFormat">The data display format type.</param>
    /// <param name="baseField">The index to the field which ShowDataAs calculation bases on.</param>
    /// <param name="baseItemPositionType">
    /// The position type of base iteam.
    /// </param>
    /// <param name="baseItem">The index to the base item which ShowDataAs calculation bases on.
    /// Only works when baseItemPositionType is custom.
    /// </param>
    /// <remarks>
    /// Only for data field.
    /// </remarks>
    ASPOSE_CELLS_API void ShowValuesAs(PivotFieldDataDisplayFormat displayFormat, int32_t baseField, PivotItemPositionType baseItemPositionType, int32_t baseItem);
    /// <summary>
    /// Gets the settings of showing values as when the ShowDataAs calculation is in use.
    /// </summary>
    ASPOSE_CELLS_API PivotShowValuesSetting GetShowValuesSetting();
    /// <summary>
    /// Represents the current page item showing for the page field (valid only for page fields).
    /// </summary>
    ASPOSE_CELLS_API int16_t GetCurrentPageItem();
    /// <summary>
    /// Represents the current page item showing for the page field (valid only for page fields).
    /// </summary>
    ASPOSE_CELLS_API void SetCurrentPageItem(int16_t value);
    /// <summary>
    /// Represents the built-in display format of numbers and dates.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetNumber();
    /// <summary>
    /// Represents the built-in display format of numbers and dates.
    /// </summary>
    ASPOSE_CELLS_API void SetNumber(int32_t value);
    /// <summary>
    /// Indicates whether inserting blank line after each item.
    /// </summary>
    ASPOSE_CELLS_API bool GetInsertBlankRow();
    /// <summary>
    /// Indicates whether inserting blank line after each item.
    /// </summary>
    ASPOSE_CELLS_API void SetInsertBlankRow(bool value);
    /// <summary>
    /// when ShowInOutlineForm is true, then display subtotals at the top of the list of items instead of at the bottom
    /// </summary>
    /// <remarks>
    /// Only works when ShowInOutlineForm is true.
    /// </remarks>
    ASPOSE_CELLS_API bool GetShowSubtotalAtTop();
    /// <summary>
    /// when ShowInOutlineForm is true, then display subtotals at the top of the list of items instead of at the bottom
    /// </summary>
    /// <remarks>
    /// Only works when ShowInOutlineForm is true.
    /// </remarks>
    ASPOSE_CELLS_API void SetShowSubtotalAtTop(bool value);
    /// <summary>
    /// Indicates whether layout this field in outline form on the Pivot Table view
    /// </summary>
    ASPOSE_CELLS_API bool GetShowInOutlineForm();
    /// <summary>
    /// Indicates whether layout this field in outline form on the Pivot Table view
    /// </summary>
    ASPOSE_CELLS_API void SetShowInOutlineForm(bool value);
    /// <summary>
    /// Represents the custom display format of numbers and dates.
    /// </summary>
    ASPOSE_CELLS_API U16String Get_NumberFormat();
    /// <summary>
    /// Represents the custom display format of numbers and dates.
    /// </summary>
    ASPOSE_CELLS_API void SetNumberFormat(const U16String& value);
    /// <summary>
    /// Represents the custom display format of numbers and dates.
    /// </summary>
    ASPOSE_CELLS_API void SetNumberFormat(const char16_t* value);
    /// <summary>
    /// Gets whether the specific PivotItem is hidden.
    /// </summary>
    /// <param name="index">The index of the pivotItem in the pivotField.</param>
    /// <returns>whether the specific PivotItem is hidden</returns>
    ASPOSE_CELLS_API bool IsHiddenItem(int32_t index);
    /// <summary>
    /// Sets whether the specific PivotItem in a data field is hidden.
    /// </summary>
    /// <param name="index">the index of the pivotItem in the pivotField.</param>
    /// <param name="isHidden">whether the specific PivotItem is hidden</param>
    ASPOSE_CELLS_API void HideItem(int32_t index, bool isHidden);
    /// <summary>
    /// Gets whether hidding the detail of  the specific PivotItem..
    /// </summary>
    /// <param name="index">The index of the pivotItem in the pivotField.</param>
    /// <returns>whether the specific PivotItem is hidden detail</returns>
    ASPOSE_CELLS_API bool IsHiddenItemDetail(int32_t index);
    /// <summary>
    /// Sets whether the specific PivotItem in a pivot field is hidden detail.
    /// </summary>
    /// <param name="index">the index of the pivotItem in the pivotField.</param>
    /// <param name="isHiddenDetail">whether the specific PivotItem is hidden</param>
    ASPOSE_CELLS_API void HideItemDetail(int32_t index, bool isHiddenDetail);
    /// <summary>
    /// Sets whether the PivotItems in a pivot field is hidden detail.That is collapse/expand this field.
    /// </summary>
    /// <param name="isHiddenDetail">Whether hide the detail of the pivot field.</param>
    ASPOSE_CELLS_API void HideDetail(bool isHiddenDetail);
    /// <summary>
    /// Sets whether the specific PivotItem in a data field is hidden.
    /// </summary>
    /// <param name="itemValue">the value of the pivotItem in the pivotField.</param>
    /// <param name="isHidden">whether the specific PivotItem is hidden</param>
    ASPOSE_CELLS_API void HideItem(const U16String& itemValue, bool isHidden);
    /// <summary>
    /// Sets whether the specific PivotItem in a data field is hidden.
    /// </summary>
    /// <param name="itemValue">the value of the pivotItem in the pivotField.</param>
    /// <param name="isHidden">whether the specific PivotItem is hidden</param>
    ASPOSE_CELLS_API void HideItem(const char16_t* itemValue, bool isHidden);
    /// <summary>
    /// Get all labels of pivot items in this field.
    /// </summary>
    ASPOSE_CELLS_API Vector<U16String> GetItems();
    /// <summary>
    /// Get the original base items;
    /// </summary>
    ASPOSE_CELLS_API Vector<U16String> GetOriginalItems();
    /// <summary>
    /// Gets the count of the base items in this pivot field.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetItemCount();
    /// <summary>
    /// Add a calculated formula item to the pivot field.
    /// </summary>
    /// <param name="name">The item's name.</param>
    /// <param name="formula">The formula of pivot item.</param>
    /// <remarks>
    /// Only supports to add calculated item to Row/Column field.
    /// </remarks>
    ASPOSE_CELLS_API void AddCalculatedItem(const U16String& name, const U16String& formula);
    /// <summary>
    /// Add a calculated formula item to the pivot field.
    /// </summary>
    /// <param name="name">The item's name.</param>
    /// <param name="formula">The formula of pivot item.</param>
    /// <remarks>
    /// Only supports to add calculated item to Row/Column field.
    /// </remarks>
    ASPOSE_CELLS_API void AddCalculatedItem(const char16_t* name, const char16_t* formula);
    /// <summary>
    /// Indicates whether display labels from the next field in the same column on the Pivot Table view
    /// </summary>
    ASPOSE_CELLS_API bool GetShowCompact();
    /// <summary>
    /// Indicates whether display labels from the next field in the same column on the Pivot Table view
    /// </summary>
    ASPOSE_CELLS_API void SetShowCompact(bool value);
    
};

} } }

#endif
