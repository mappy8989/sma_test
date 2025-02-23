// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DATAMODELS_DATAMODELTABLECOLLECTION_H
#define ASPOSE_CELLS_DATAMODELS_DATAMODELTABLECOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace DataModels {
    class DataModelTable;
} } }

namespace Aspose { namespace Cells { namespace DataModels {

class DataModelTableCollection_Impl;

/// <summary>
/// Represents the list of the data model table.
/// </summary>
class DataModelTableCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DataModelTableCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DataModelTableCollection(DataModelTableCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DataModelTableCollection(const DataModelTableCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DataModelTableCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DataModelTableCollection& operator=(const DataModelTableCollection& src);
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
    /// Gets the data model table by position of the collection.
    /// </summary>
    /// <param name="index">The position of the collection.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API DataModelTable Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
