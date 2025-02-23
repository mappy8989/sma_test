// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DATAMODELS_DATAMODELTABLE_H
#define ASPOSE_CELLS_DATAMODELS_DATAMODELTABLE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace DataModels {

using namespace Aspose::Cells;

class DataModelTable_Impl;

/// <summary>
/// Represents properties of a single table in spreadsheet data model.
/// </summary>
class DataModelTable {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DataModelTable_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DataModelTable(DataModelTable_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DataModelTable(const DataModelTable& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DataModelTable();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DataModelTable& operator=(const DataModelTable& src);
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
    /// Gets the id of the data model table.
    /// </summary>
    ASPOSE_CELLS_API U16String GetId();
    /// <summary>
    /// Gets the name of the data model table.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets the connection name of the data model table.
    /// </summary>
    ASPOSE_CELLS_API U16String GetConnectionName();
    
};

} } }

#endif
