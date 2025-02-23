// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DATAMODELS_DATAMODELRELATIONSHIP_H
#define ASPOSE_CELLS_DATAMODELS_DATAMODELRELATIONSHIP_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace DataModels {

using namespace Aspose::Cells;

class DataModelRelationship_Impl;

/// <summary>
/// Represents a single relationship in the spreadsheet data model.
/// </summary>
class DataModelRelationship {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DataModelRelationship_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DataModelRelationship(DataModelRelationship_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DataModelRelationship(const DataModelRelationship& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DataModelRelationship();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DataModelRelationship& operator=(const DataModelRelationship& src);
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
    /// Gets the name of the foreign key table for this relationship.
    /// </summary>
    ASPOSE_CELLS_API U16String GetForeignKeyTable();
    /// <summary>
    /// Gets the name of the primary key table for this relationship.
    /// </summary>
    ASPOSE_CELLS_API U16String GetPrimaryKeyTable();
    /// <summary>
    /// Gets the name of the foreign key table column for this relationship.
    /// </summary>
    ASPOSE_CELLS_API U16String GetForeignKeyColumn();
    /// <summary>
    /// Gets the name of the primary key table column for this relationship.
    /// </summary>
    ASPOSE_CELLS_API U16String GetPrimaryKeyColumn();
    
};

} } }

#endif
