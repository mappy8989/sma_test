// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTFILTERCOLLECTION_H
#define ASPOSE_CELLS_PIVOT_PIVOTFILTERCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Date.h"

#include "Aspose.Cells/PivotFilterType.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotFilter;
} } }

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class PivotFilterCollection_Impl;

/// <summary>
/// Represents a collection of all the PivotFilter objects
/// </summary>
class PivotFilterCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotFilterCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotFilterCollection(PivotFilterCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotFilterCollection(const PivotFilterCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotFilterCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotFilterCollection& operator=(const PivotFilterCollection& src);
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
    /// Gets the pivotfilter object at the specific index.
    /// </summary>
    ASPOSE_CELLS_API PivotFilter Get(int32_t index);
    /// <summary>
    /// Adds a PivotFilter Object to the specific type
    /// </summary>
    /// <param name="fieldIndex">the PivotField index </param>
    /// <param name="type">the PivotFilter type </param>
    /// <returns>the index of  the PivotFilter Object in this PivotFilterCollection.</returns>
    /// <remarks>
    /// NOTE: This method is now obsolete. Instead,
    /// please use PivotFilterCollection.AddValueFilter(),AddTop10Filter(),AddLabelFilter() and AddDateFilter() methods.
    /// This method will be removed 12 months later since November 2024.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PivotFilterCollection.AddValueFilter(),AddTop10Filter(),AddLabelFilter() and AddDateFilter() methods,instead.
    [[deprecated]] ASPOSE_CELLS_API int32_t Add(int32_t fieldIndex, PivotFilterType type);
    /// <summary>
    /// Filters by values of data pivot field.
    /// </summary>
    /// <param name="baseFieldIndex">The index of field in the source.</param>
    /// <param name="valueFieldIndex">The index of data field  in the data region.</param>
    /// <param name="type">The type of filtering data. Only can be Count,Sum and Percent.
    /// </param>
    /// <param name="isTop">Indicates whether filter from top or bottom</param>
    /// <param name="itemCount">The item count</param>
    ASPOSE_CELLS_API PivotFilter AddTop10Filter(int32_t baseFieldIndex, int32_t valueFieldIndex, PivotFilterType type, bool isTop, int32_t itemCount);
    /// <summary>
    /// Filters by values of data pivot field.
    /// </summary>
    /// <param name="baseFieldIndex">The index of field in the source.</param>
    /// <param name="valueFieldIndex">The index of value field in the value region.</param>
    /// <param name="type">The type of filtering data.</param>
    /// <param name="value1">The value of filter condition</param>
    /// <param name="value2">The upper-bound value of between filter condition</param>
    ASPOSE_CELLS_API PivotFilter AddValueFilter(int32_t baseFieldIndex, int32_t valueFieldIndex, PivotFilterType type, double value1, double value2);
    /// <summary>
    /// Filters by captions of row or column pivot field.
    /// </summary>
    /// <param name="baseFieldIndex">The index of field in the source.</param>
    /// <param name="type">The type of filtering data.</param>
    /// <param name="label1">The label of filter condition</param>
    /// <param name="label2">The upper-bound label of between filter condition</param>
    ASPOSE_CELLS_API PivotFilter AddLabelFilter(int32_t baseFieldIndex, PivotFilterType type, const U16String& label1, const U16String& label2);
    /// <summary>
    /// Filters by captions of row or column pivot field.
    /// </summary>
    /// <param name="baseFieldIndex">The index of field in the source.</param>
    /// <param name="type">The type of filtering data.</param>
    /// <param name="label1">The label of filter condition</param>
    /// <param name="label2">The upper-bound label of between filter condition</param>
    ASPOSE_CELLS_API PivotFilter AddLabelFilter(int32_t baseFieldIndex, PivotFilterType type, const char16_t* label1, const char16_t* label2);
    /// <summary>
    /// Filters by date setting of row or column pivot field.
    /// </summary>
    /// <param name="baseFieldIndex">The index of field in the source.</param>
    /// <param name="type">The type of filtering data.</param>
    /// <param name="dateTime1">The date label of filter condition</param>
    /// <param name="dateTime2">The upper-bound date label of between filter condition</param>
    ASPOSE_CELLS_API PivotFilter AddDateFilter(int32_t baseFieldIndex, PivotFilterType type, const Date& dateTime1, const Date& dateTime2);
    /// <summary>
    /// Clear PivotFilter from the specific PivotField
    /// </summary>
    /// <param name="fieldIndex">the PivotField index </param>
    ASPOSE_CELLS_API void ClearFilter(int32_t fieldIndex);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
