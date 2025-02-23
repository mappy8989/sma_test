// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DATAMODELS_DATAMODEL_H
#define ASPOSE_CELLS_DATAMODELS_DATAMODEL_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace DataModels {
    class DataModelRelationshipCollection;
    class DataModelTableCollection;
} } }

namespace Aspose { namespace Cells { namespace DataModels {

class DataModel_Impl;

/// <summary>
/// Represents the data model.
/// </summary>
class DataModel {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DataModel_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DataModel(DataModel_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DataModel(const DataModel& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DataModel();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DataModel& operator=(const DataModel& src);
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
    /// Gets all relationships of the tables in the data model.
    /// </summary>
    ASPOSE_CELLS_API DataModelRelationshipCollection GetRelationships();
    /// <summary>
    /// Gets all tables in the data model.
    /// </summary>
    ASPOSE_CELLS_API DataModelTableCollection GetTables();
    
};

} } }

#endif
